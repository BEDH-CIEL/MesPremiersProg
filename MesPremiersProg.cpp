//Ce programme a été réalisé par Mathis BEDHOUCHE.Il vise à y intégrer nos programmes du TP Methode Dev. L'utilisateur choisira donc le programme souhaité.

#include <iostream>       
#include <cstdlib>        
#include <ctime>        
#include <limits>      
#include <iomanip>
#include "FonctionsProg.h"
using namespace std;

int main() {
    int choix = 0;

    do {
        cout << ("==================================") << endl;
        cout << ("        |MENU PRINCIPAL|") << endl;
        cout << ("==================================") << endl;
        cout << ("-1 : devinette") << endl;
        cout << ("-2 : forfait") << endl;
        cout << ("-3 : caisse") << endl;
        cout << ("-4 : variables") << endl;
        cout << ("-5 : etoiles") << endl;
        cout << ("-6 : ascii") << endl;
        cout << ("-0 : quitter") << endl; // Option 7 ajoutée
        cout << ("quel programme choisissez vous ? : ");

        // Sécurité si l'utilisateur saisit des lettres au lieu d'un chiffre
        if (!(cin >> choix)) {
            cin.clear(); // Efface l'état d'erreur de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Vide le tampon
            choix = 0; // Force une valeur incorrecte pour déclencher l'erreur
        }

        switch (choix)
        {
        case 1:
            cout << ("devinette") << endl;
            cout << ("----------") << endl;
            devinette();
            break;
        case 2:
            cout << ("forfait") << endl;
            cout << ("----------") << endl;
            forfait();
            break;
        case 3:
            cout << ("caisse") << endl;
            cout << ("----------") << endl;
            caisse();
            break;
        case 4:
            cout << ("variables") << endl;
            cout << ("----------") << endl;
            variables();
            break;
        case 5:
            cout << ("etoiles") << endl;
            cout << ("----------") << endl;
            etoiles();
            break;
        case 6:
            cout << ("ascii") << endl;
            cout << ("----------") << endl;
            ascii();
            break;
        case 0:
            cout << ("Au revoir !") << endl; // Message de sortie
            break;
        default:
            cout << ("Erreur, veuillez entrer un chiffre valide.") << endl << endl;
            break;
        }
    } while (choix != 7); // Le programme recommence tant qu'on ne fait pas 7

    return 0;
}
