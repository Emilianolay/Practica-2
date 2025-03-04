#include <iostream>
#include <cmath>

using namespace std;

int recursividad(int numero1, int numero2) {
    if (abs(numero1) < abs(numero2)) {
        return 0;
    }
    return 1 + recursividad(abs(numero1) - abs(numero2), abs(numero2));
}

int division(int a, int b) {
    int resultado = recursividad(a, b);
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        return -resultado;
    }
    return resultado;
}

int main() {
    char opcion;
    do {
        system("cls");
        int a, b;

        cout << "Dame dos numeros para dividir: " << endl;

        cout << "Numero 1: ";
        cin >> a;

        cout << "Numero 2: ";
        cin >> b;
        if (b == 0) {
            cout << "Error, no se puede dividir entre 0." << endl;
        }

        cout << a << " / " << b << " = " << division(a, b) << endl;

        cout << "Desea ingresar otros numeros? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    return 0;
}

