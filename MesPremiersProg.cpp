//Ce programme a été réalisé par Mathis BEDHOUCHE.Il vise à y intégrer nos programmes du TP Methode Dev. L'utilisateur choisira donc le programme souhaité.

#include <iostream>       
#include <cstdlib>        
#include <ctime>        
#include <limits>      
#include <iomanip>

using namespace std;
int main() {
    int choix = 0;
    cout << ("quel programme choisissez vous ? : "); cin >> choix;
	switch (choix)
	{
	case 1:
		cout << ("devinette"); break;
	
	case 2:
		cout << ("forfait");
	default:
		break;
	}
}