// Lab8P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include "Concierto.h"
using namespace std;

int main() {

    // Ejemplo de uso
    Concierto concierto1("Banda1", 100.5678, "10/03/2023", "A12345");
    concierto1.vender_entrada();
    concierto1.guardar_concierto();

    Concierto concierto2("Banda2", 200.9876, "15/03/2023", "B67890");
    concierto2.vender_entrada();
    concierto2.guardar_concierto();

    return 0;
}