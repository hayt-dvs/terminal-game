#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int playerHP = 100;
    int enemyHP = 50;

    cout << "=== Jeux terminal ===" << endl;

    while (playerHP > 0 && enemyHP > 0) {

        cout << "\nTes PV: " << playerHP;
        cout << " | PV ennemi: " << enemyHP << endl;

        cout << "\nChoix:" << endl;
        cout << "1. Attaquer" << endl;
        cout << "2. Se soigner" << endl;
        cout << "3. Fuir" << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            int damage = rand() % 20 + 5;
            enemyHP -= damage;
            cout << "Tu infliges " << damage << " degats !" << endl;
        }
        else if (choice == 2) {
            int heal = rand() % 15 + 5;
            playerHP += heal;
            cout << "Tu te soignes de " << heal << " PV !" << endl;
        }
        else if (choice == 3) {
            cout << "Tu as fui le combat..." << endl;
            return 0;
        }

        // attaque ennemi
        if (enemyHP > 0) {
            int enemyDamage = rand() % 15 + 3;
            playerHP -= enemyDamage;
            cout << "L'ennemi t'attaque et inflige " << enemyDamage << " degats !" << endl;
        }
    }

    if (playerHP <= 0) {
        cout << "\n💀 Tu as perdu..." << endl;
    } else {
        cout << "\n🏆 Tu as gagne !" << endl;
    }

    return 0;
}