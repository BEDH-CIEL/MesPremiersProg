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

    if (choix == 1) {
        cout << "salut ! bienvenue sur le jeu, lancons une partie !!" << endl;
        cout << "---------------------------------------------------" << endl;
        // Initialisation du générateur aléatoire
        srand(static_cast<unsigned int>(time(nullptr)));

        int NBMax;

        // Demander le nombre maximum avec validation
        while (true) {
            cout << "Entrez le nombre maximum (entier positif) : ";
            if (cin >> NBMax && NBMax > 0) {
                break;
            }
            else {
                cin.clear(); // réinitialise l'état d'erreur
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        // Génération du nombre aléatoire
        int NBsecret = rand() % (NBMax + 1); // inclus 0 et NBMax
        int devine;
        int essais = 0;

        cout << "J'ai choisi un nombre entre 0 et " << NBMax << ". A vous de deviner !\n";

        // Boucle de jeu
        while (true) {
            if (!(cin >> devine)) {
                cout << "(Je me suis permis d'arrondir votre nombre, vu que vous ne savez pas taper un nombre entier ;)\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            essais++;

            if (devine < NBsecret) {
                cout << "C'est plus grand ;) !\n";
            }
            else if (devine > NBsecret) {
                cout << "C'est plus petit ;) !\n";
            }
            else {
                cout << "BRAVO ! Vous avez trouve en " << essais << " essais :O\n";
                cout << "|----------------------------------------|" << endl;
                cout << "Pour tous vos efforts.." << endl;
                cout << "Parce que vous avez gagne.." << endl << endl;
                cout << "VOUS AVEZ GAGNE UN VOYAGE CHEZ DISNEY !! Non j'rigole le jeu a pas le budget" << endl << endl;
                cout << "|---------------------------------------------------------------------------|" << endl;
                cout << "Pourquoi ne pas essayer d'aller au niveau superieur ? Relancez une partie !! " << endl << endl << endl << endl << endl;
                break;
            }
        }
        return 0;
    }
    else if (choix == 2) {
        //mise en place des variables (combien valent chaques pieces, et le systeme du nombre de pieces)
        double Unc = 0.01;
        double Deuxc = 0.02;
        double Cinqc = 0.05;
        double Dixc = 0.10;
        double Vingtc = 0.20;
        double Cinquantec = 0.50;
        int UnE = 1;
        int DeuxE = 2;

        int NbUnc;
        int NbDeuxc;
        int NbCinqc;
        int NbDixc;
        int NbVingtc;
        int NbCinquantec;
        int NbUnE;
        int NbDeuxE;


        //demande du nombre de pieces
        cout << "Boujour, et bienvenue sur votre calculateur dargent !!" << endl;
        cout << "Veuillez svp combien vous avez de pieces de :" << endl << endl;
        cout << "-1c :" << endl;
        cin >> NbUnc;
        cout << "-2c :" << endl;
        cin >> NbDeuxc;
        cout << "-5c :" << endl;
        cin >> NbCinqc;
        cout << "-10c :" << endl;
        cin >> NbDixc;
        cout << "-20c :" << endl;
        cin >> NbVingtc;
        cout << "-50c :" << endl;
        cin >> NbCinquantec;
        cout << "-1e :" << endl;
        cin >> NbUnE;
        cout << "-2e :" << endl;
        cin >> NbDeuxE;

        //variables de calculs (comment calculer le total de la valeur de chaque type de pieces, et la valeur TOTAL)
        double TotalUnc = Unc * NbUnc;
        double TotalDeuxc = Deuxc * NbDeuxc;
        double TotalCinqc = Cinqc * NbCinqc;
        double TotalDixc = Dixc * NbDixc;
        double TotalVingtc = Vingtc * NbVingtc;
        double TotalCinquantec = Cinquantec * NbCinquantec;
        int TotalUnE = UnE * NbUnE;
        int TotalDeuxE = DeuxE * NbDeuxE;

        double TOTAL = TotalUnc + TotalDeuxc + TotalCinqc + TotalDixc + TotalVingtc + TotalCinquantec + TotalUnE + TotalDeuxE;

        //Nous donne notre argent TOTAL
        cout << "Calcul en cours..." << endl;
        cout << "------------------" << endl;
        cout << "Vous avez tres exactement : " << TOTAL << " euros" << endl << endl << endl;


        return 0;
    }
    else if (choix == 3) {
        int MensuA = 2;
        int MensuB = 4;
        int DureeAppel;
        int NbSMS;
        double TarifAppelA = 0.3;
        double TarifSMSA = 0.1;
        double TarifAppelB = 0.2;
        double TarifSMSB = 0.088;

        double CoutA = 0;
        double CoutB = 0;
        char choix; // Variable pour stocker la réponse (o/n)

        cout << "TP Forfaits." << endl << endl << endl;

        do {
            cout << "Bonjour, et bienvenue sur votre calculateur ! Inscrivez vous des maintenant a nos offres mensuelles !!" << endl << endl;
            cout << "Veuillez entrer la duree d'appel par mois que vous souhaitez : ";
            cin >> DureeAppel;
            cout << "Entrer le nombre de SMS : ";
            cin >> NbSMS;
            cout << endl << endl;

            CoutA = MensuA + (DureeAppel * TarifAppelA) + (NbSMS * TarifSMSA);
            CoutB = MensuB + (DureeAppel * TarifAppelB) + (NbSMS * TarifSMSB);

            cout << "Pour vous, le forfait A reviendrait a : " << CoutA << " euros par mois" << endl;
            cout << "Et le forfait B reviendrait a : " << CoutB << " euros par mois" << endl << endl;

            // Question pour recommencer
            cout << "Refaire une estimation ? (o/n) : ";
            cin >> choix;
            cout << endl << "----------------------------------------" << endl << endl;

        } while (choix == 'o' || choix == 'O'); // Recommence si l'utilisateur tape 'o' ou 'O'

        // Affichage du résultat final après la sortie de la boucle
        cout << "=== RESULTAT DE VOTRE DERNIERE ESTIMATION ===" << endl;
        cout << "Forfait A : " << CoutA << " euros par mois" << endl;
        cout << "Forfait B : " << CoutB << " euros par mois" << endl;
        cout << "Merci d'avoir utilise le calculateur !" << endl;

        return 0;
    }
    else if (choix == 4) {
        cout << "Taille des principaux types en octets :\n";
        cout << "---------------------------------------\n";
        // Affichage formaté avec alignement
        cout << left << setw(20) << "Type" << "Taille (octets)\n";
        cout << "---------------------------------------\n";

        cout << left << setw(20) << "bool" << sizeof(bool) << '\n';
        cout << left << setw(20) << "char" << sizeof(char) << '\n';
        cout << left << setw(20) << "int" << sizeof(int) << '\n';
        cout << left << setw(20) << "float" << sizeof(float) << '\n';
        cout << left << setw(20) << "double" << sizeof(double) << '\n';

        return 0;
    }
    else if (choix == 5) {
        int etoiles; // Déclaration de la variable sans valeur fixe

        while (true) { // Boucle infinie qui s'arrêtera uniquement si le nombre est valide
            // Demander le nombre de lignes à l'utilisateur
            cout << "Entrez le nombre de lignes pour la pyramide (1-200) : " << endl << endl;
            cin >> etoiles;

            if (etoiles < 200) {
                // Boucle externe pour les lignes
                for (int i = 1; i <= etoiles; i++) {
                    // Boucle interne pour afficher les étoiles sur chaque ligne
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl; // Passer à la ligne suivante
                }
                break; // Sort de la boucle 'while' et termine le programme après avoir dessiné
            }
            else {
                cout << "ERREUR, Entrer un nombre entre 0 et 1999" << endl << endl << endl << endl;
            }
        }
        return 0;
    }
    else if (choix == 6) {
        int code; // on lit un entier directement

        std::cout << "=== Programme ASCII (code -> caractere) ===\n";
        std::cout << "Plage valide : ASCII 32 à 127 (caractères imprimables)\n";
        std::cout << "Entrez 0 pour quitter.\n\n";

        while (true) {
            std::cout << "Entrez un code ASCII : ";

            // Validation de l'entrée
            if (!(std::cin >> code)) {
                std::cout << "Erreur : veuillez entrer un nombre entier.\n";
                std::cin.clear(); // réinitialise l'état d'erreur
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            // Quitter si 0
            if (code == 0) {
                std::cout << "Fin du programme.\n";
                break;
            }

            // Vérification de la plage
            if (code < 32 || code > 127) {
                std::cout << "Erreur : code hors plage ASCII imprimable (32-127).\n\n";
                continue;
            }

            // Conversion en caractère
            char caractere = static_cast<char>(code);

            // Affichage
            std::cout << "Code ASCII : " << code << "\n";
            std::cout << "Caractere  : '" << caractere << "'\n";
            std::cout << "Hexa       : 0x"
                << std::uppercase << std::hex << code
                << std::dec << "\n\n"; // revenir en mode décimal
        }

        return 0;
    }




}
