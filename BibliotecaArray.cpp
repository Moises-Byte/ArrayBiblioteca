#include <iostream>
#include <array>
#include <string>
using namespace std;

const int MAX = 10;
array<string, MAX> titulos;
array<string, MAX> autores;
int cantidad = 0;

void agregarLibro() {
    if (cantidad >= MAX) {
        cout << "No se pueden agregar más libros.\n";
        return;
    }

    cout << "Ingrese el titulo (una sola palabra): ";
    cin >> titulos[cantidad];

    cout << "Ingrese el autor (una sola palabra): ";
    cin >> autores[cantidad];

    cantidad++;
}

