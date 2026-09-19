#include <iostream>
#include <string>
#include <cmath>

#include "../calculator.h"

// Compteurs pour le bilan final
int tests_reussis = 0;
int tests_echoues = 0;

/**
  @brief Vérifie si deux nombres sont égaux et affiche si le test a réussi ou échoué.
 
  Cette fonction compare le résultat théorique (attendu) avec le résultat réel 
  renvoyé par la calculatrice (obtenu). Comme les nombres à virgule (double) 
  peuvent avoir de petites imprécisions, elle accepte une marge d'erreur de 0.0001.
  
  - Si le test réussit : affiche [SUCCES] et augmente le compteur de réussites.
  - Si le test échoue : affiche [ECHEC] avec les détails et augmente le compteur d'échecs.
  
  @param attendu Le résultat théorique parfait que la calculatrice devrait trouver.
  @param obtenu Le résultat réel renvoyé par la fonction de la calculatrice.
  @param nom_test Une courte phrase qui explique ce que l'on est en train de tester.
 */
void test_tolerance(double attendu, double obtenu, const std::string& nom_test) {
    // Marge d'erreur pour la comparaison de nombres
    if (std::abs(attendu - obtenu) < 0.0001) {
        std::cout << "  [SUCCES] " << nom_test << "\n";
        tests_reussis++;
    } else {
        std::cout << "  [ECHEC]  " << nom_test 
                  << " | Attendu: " << attendu 
                  << ", Obtenu: " << obtenu << "\n";
        tests_echoues++;
    }
}

void tester_multiplication() {
    std::cout << "\n=== Tests : Multiplication ===\n";
    Calculatrice calc;
    test_tolerance(15.0, calc.multiplier(3.0, 5.0), "Multiplication de deux nombres positifs");
    test_tolerance(-15.0, calc.multiplier(3.0, -5.0), "Multiplication avec un nombre négatif");
    test_tolerance(0.0, calc.multiplier(5.0, 0.0), "Multiplication par zero");
}

void tester_division() {
    std::cout << "\n--- Tests : Division ---\n";
    Calculatrice calc;
    test_tolerance(2.5, calc.diviser(5.0, 2.0), "Division reelle ");
    test_tolerance(-2.0, calc.diviser(6.0, -3.0), "Division avec un nombre négatif");
}