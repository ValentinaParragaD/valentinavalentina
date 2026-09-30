#include <iostream>
using namespace std;

// Función 1: Sumar
int sumar(int a, int b) {
    return a + b;
}

// Función 2: Restar
int restar(int a, int b) {
    return a - b;
}

// Función 3: Multiplicar
int multiplicar(int a, int b) {
    return a * b;
}

// Pruebas
int main() {
    cout << "=== Ejecutando pruebas ===" << endl;
    
    // Prueba Sumar
    if (sumar(2, 3) == 5) {
        cout << "? Sumar: CORRECTO" << endl;
    } else {
        cout << "? Sumar: FALLÓ" << endl;
    }

    // Prueba Restar
    if (restar(10, 4) == 6) {
        cout << "? Restar: CORRECTO" << endl;
    } else {
        cout << "? Restar: FALLÓ" << endl;
    }

    // ?? Multiplicar NO la probamos a propósito
    // Así Codecov mostrará que falta cubrir esa función

    cout << "=== Fin de las pruebas ===" << endl;
    return 0;
}
