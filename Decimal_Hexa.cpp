#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal; // Convierte el número decimal a hexadecimal
    return ss.str(); // Retorna el valor hexadecimal como una cadena
}

void opcion12() {
    int decimal;
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    string hexadecimal = decimalToHexadecimal(decimal);
    cout << "El numero hexadecimal equivalente es: " << hexadecimal <<endl;
}

void start() {
    opcion12();
}
