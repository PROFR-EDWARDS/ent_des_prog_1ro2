// Codificado por: Beastieux
// Código para convertir de Decimal a Binario (0-255).
#include <iostream>
using namespace std;
 
int main() {
    int D, d1, D2, D3, D4, D5, D6, D7, d8, R1, r2, R3, R4, r5, R6, R7, R8;
     
    cout << "Ingrese un numero decimal" << endl;
    cin >> D;
     
    if (D > 255 || D < 0)
        cout << "Ingrese un numero del 0 al 255" << endl;
    else {
        D1 = D / 2; R1 = D % 2;
        D2 = D1 / 2; R2 = D1 % 2;
        D3 = D2 / 2; R3 = D2 % 2;
        D4 = D3 / 2; R4 = D3 % 2;
        D5 = D4 / 2; R5 = D4 % 2;
        D6 = D5 / 2; R6 = D5 % 2;
        D7 = D6 / 2; R7 = D6 % 2;
        D8 = D7 / 2; R8 = D7 % 2;
         
        cout<<endl<< "El resultado en Binario es:  ";
        cout << R8 << R7 << R6 << R5 << R4 << R3 << R2 << R1 << endl;
    }
     
    cin.ignore();
    return 0;
}
