#include <iostream>
using namespace std;

const char* teclas[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; //Simulando las teclas de un telefono 

void generarCombinaciones(string digitos, string actual, int index) {
    if (index == digitos.length()) {
        cout << actual << " ";
        return;
    }
    
    int num = digitos[index] - '2'; // Convertir '2'-'9' a un índice 0-7
    for (int i = 0; teclas[num][i] != '\0'; i++) {
        generarCombinaciones(digitos, actual + teclas[num][i], index + 1);
    }
}

int main() {
    string digitos;
    cout << "Ingrese los digitos: ";
    cin >> digitos;

    if (!digitos.empty()) {
        generarCombinaciones(digitos, "", 0);
    }else{
    	cout << "No existe ninguna combinacion";
	}
    cout << endl;
    
    return 0;
}

