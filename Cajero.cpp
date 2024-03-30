#include <iostream>

using namespace std;

void opcion15() {
    int saldo = 1000; // saldo inicial

    cout << "Bienvenido al Cajero Automático" << endl;
    cout << "Su saldo actual es: Q" << saldo << endl;

    int opcion;
    do {
        cout << "\nPor favor, seleccione una opción:" << endl;
        cout << "1. Retirar dinero" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int cantidad;
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;
                if (cantidad > saldo) {
                    cout << "Saldo insuficiente" << endl;
                } else {
                    saldo -= cantidad;
                    cout << "Retiro exitoso" << endl;
                    cout << "Saldo restante: Q" << saldo << endl;
                }
                break;
            }
            case 2: {
                int cantidad;
                cout << "Ingrese la cantidad a depositar: ";
                cin >> cantidad;
                saldo += cantidad;
                cout << "Depósito exitoso" << endl;
                cout << "Saldo actual: Q" << saldo << endl;
                break;
            }
            case 3:
                cout << "Gracias por utilizar nuestro servicio. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 3);
}

void iniciarPrograma() {
    opcion15();
}

void iniciar() {
    iniciarPrograma();
}
