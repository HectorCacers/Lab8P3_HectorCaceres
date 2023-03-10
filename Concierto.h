#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Concierto {
private:
    string nombre_banda;
    double precio_entrada;
    string fecha;
    string codigo;
    double total_recaudado;
    int entradas_vendidas;

public:
    Concierto(string nombre, double precio, string fecha, string codigo) {
        nombre_banda = nombre;
        precio_entrada = precio;
        this->fecha = fecha;
        this->codigo = codigo;
        total_recaudado = 0;
        entradas_vendidas = 0;
    }

    void vender_entrada() {
        total_recaudado += precio_entrada;
        entradas_vendidas++;
    }

    int get_entradas_vendidas() {
        return entradas_vendidas;
    }

    void guardar_concierto() {
        ofstream archivo("conciertos.txt", ios::app);
        archivo << nombre_banda << "," << fixed << setprecision(4) << precio_entrada << "," << fecha << "," << codigo << "," << entradas_vendidas << endl;
        archivo.close();
    }
};