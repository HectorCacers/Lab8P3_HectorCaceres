// Lab8P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Concierto.h"
using namespace std;
int main() {
    int opcion;
    do {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Crear un nuevo concierto" << endl;
        cout << "2. Vender una entrada" << endl;
        cout << "3. Ver detalles de un concierto" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        switch (opcion) {
        case 1:
            crearConcierto();
            break;
        case 2:
            venderEntrada();
            break;
        case 3:
            imprimir_concierto();
            break;
        case 4:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opcion invalida. Intente de nuevo." << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}
}