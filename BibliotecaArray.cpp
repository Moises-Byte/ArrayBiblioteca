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

void mostrarLibros() {
    if (cantidad == 0) {
        cout << "No hay libros registrados.\n";
        return;
    }

    cout << "\nLibros registrados:\n";
    for (int i = 0; i < cantidad; i++) {
        cout << i + 1 << ". " << titulos[i] << " - " << autores[i] << endl;
    }
}

void mostrarLibroPorPosicion() {
    int posicion;
    cout << "Ingrese la posicion del libro que desea ver (1 a " << cantidad << "): ";
    cin >> posicion;

    if (posicion < 1 || posicion > cantidad) {
        cout << "Posicion inválida.\n";
        return;
    }

    cout << "Libro en la posicion " << posicion << ": " << titulos[posicion - 1] << " - " << autores[posicion - 1] << endl;
}

int main() {
    int opcion;

    do {
        cout << "\nMenu:\n";
        cout << "1. Agregar libro\n";
        cout << "2. Mostrar libros\n";
        cout << "3. Mostrar libro por posicion\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            agregarLibro();
        } else if (opcion == 2) {
            mostrarLibros();
        } else if (opcion == 3) {
            mostrarLibroPorPosicion();
        } else if (opcion != 0) {
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 0);

    cout << "Programa finalizado.\n";
    return 0;
}

