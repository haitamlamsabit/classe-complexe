// compl.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Complexe.h"
using namespace std;

int main()
{
    Complexe c1(5, 8);
    Complexe c2(4, 9);
    double y = 8.90;
    int x = 4;
    Complexe c3 = c1 + c2;
    c1.afficher();
    c3.afficher();
    Complexe c4 = c3 - c1;
    c4.afficher();
    Complexe c5 = c3 - y;
    c5.afficher();
    Complexe c6 = c1 * c2;
    c6.afficher();
    Complexe c = c2 / c1;
    c.afficher();
    std::cout << (c2 == x) << std::endl;
    std::cout << (c1 != x)<<endl;
    if (c2 > c1) { std::cout << "plus grand" << std::endl; };
    if (c2 > y) { std::cout << "plus grand" << std::endl; };
    if (c1 < c2) { std::cout << "plus petit" << std::endl; };

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
