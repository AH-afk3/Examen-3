#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

void cajero() {
    int saldo = 20000;
    int opcion, monto;

    do {
        cout << "\n--- Menu Cajero ---\n";
        cout << "1. Consultar Saldo\n";
        cout << "2. Retirar Efectivo\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opcion= ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual= " << saldo << " MXN\n";
                break;
            case 2:
                cout << "Ingrese monto a retirar= ";
                cin >> monto;
                if (monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Saldo actual= " << saldo << " MXN\n";
                } else {
                    cout << "Fondos insuficientes.\n";
                }
                break;
            case 3:
                cout << "Gracias por usar el cajero.\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 3);
}

int main() {
    int opcion;
    cout << "Seleccione una opcion:\n1. Calcular Factorial\n2. Usar Cajero\n";
    cin >> opcion;

    if (opcion == 1) {
        int num;
        cout << "Ingrese un numero para calcular su factorial: ";
        cin >> num;
        cout << "Factorial de " << num << " es " << factorial(num) << endl;
    } else if (opcion == 2) {
        cajero();
    } else {
        cout << "Opcion no valida.\n";
    }

    return 0;
}
