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
	cout << ("-1 : devinette") << endl;
	cout << ("-2 : forfait") << endl;
	cout << ("-3 : caisse") << endl;
	cout << ("-4 : variables") << endl;
	cout << ("-5 : etoiles") << endl;
	cout << ("-6 : ascii") << endl;
    cout << ("quel programme choisissez vous ? : "); cin >> choix;
	switch (choix)
	{
	case 1:
		cout << ("devinette") << endl; 
		cout << ("----------") << endl;
		devinette(); 
		break;
	case 2:
		cout << ("forfait")<<endl;
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
	}
}