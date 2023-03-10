// Lab8P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

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
        ofstream archivo("conciertos.csv", ios::app);
        archivo << nombre_banda << "," << fixed << setprecision(4) << precio_entrada << "," << fecha << "," << codigo << "," << entradas_vendidas << endl;
        archivo.close();
    }
};

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