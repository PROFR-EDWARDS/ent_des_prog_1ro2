#include <iostream>
using namespace std;
 
double saldo(double total) {
    cout << endl;
    if (total == 0)
        cout << "Ud. no tiene saldo en su cuenta" << endl << endl;
    else
        cout << "Su saldo es de: " << total << endl;
    return total;
}
 
void fin()
 {
    cout << endl << "Gracias por usar este cajero, vuelva pronto." << endl << endl;
}
 
double deposito(double total) {
    double dep = 0;
    cout << endl;
    do {
        cout << "Ingrese la cantidad que desea depositar: ";
        cin >> dep;
        if (dep > 0) {
            total = total + dep;
            cout << "Su nuevo saldo es de: " << total << endl;
        } else
            cout << "Ingrese una cantidad válida" << endl << endl;
    } while (dep <= 0);
    return total;
}
 
double retiro(double total) {
    double ret = 0;
    cout << endl;
    if (total == 0)
        cout << "Ud. no tiene saldo que pueda retirar" << endl;
    else
        do {
            cout << "Ingrese la cantidad que desea retirar: ";
            cin >> ret;
            if (ret > 0) {
                if (ret <= total) {
                    total = total - ret;
                    cout << "Su nuevo saldo es de: " << total << endl;
                } else
                    cout << "Ud. no tiene saldo suficiente para hacer ese retiro" << endl;
            } else
                cout << "Ingrese una cantidad válida" << endl << endl;
        } while (ret <= 0);
    return total;
}
 
int menu(double total) {
    int opcion;
    cout << "---------------MENU DEL CAJERO---------------" << endl;
    cout << "---------------------------------------------" << endl << endl;
    cout << "Depositar dinero...........................(1)" << endl;
    cout << "Retirar dinero.............................(2)" << endl;
    cout << "Consulta de saldo..........................(3)" << endl;
    cout << "Salir / Exit...............................(4)" << endl;
    cout << endl << "Elija la transacción que desea realizar: ";
    cin >> opcion;
    return opcion;
}
 
double proceso(int opcion, double total) {
    switch (opcion) {
    case 1:
        total = deposito(total);
        break;
    case 2:
        total = retiro(total);
        break;
    case 3:
        total = saldo(total);
        break;
    case 4:
        cout << endl << "Ud. ha salido del sistema" << endl << endl;
        exit(0);
    default:
        cout << "Ingrese un valor correcto" << endl;
        menu(total);
    }
    return total;
}
 
int main() {
    double total = 0;
    int opcion, a;
    char c;
    do {
        cout << endl << endl;
        opcion = menu(total);
        total = proceso(opcion, total);
        do {
            cout << endl;
            cout << "Desea realizar alguna otra transacción (S)(N): ";
            cin >> c;
            a = 0;
            switch (c) {
            case 's': case 'S':
                a = 2;
                break;
            case 'n': case 'N':
                break;
            default:
                cout << endl << "Ingrese un valor correcto" << endl;
                a = 1;
            }
        } while (a == 1);
    } while (a == 2);
    fin();
    return 0;
}