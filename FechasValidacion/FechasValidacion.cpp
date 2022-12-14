#include <iostream>
#include <string>
#include "Dates.h"
using namespace std;

int main(){
    string date;
    int opc = 1;

    while (opc == 1) {
        system("cls");
        cout << "Digite la fecha: ";
        cin >> date;
        cout << endl << endl << endl;
        system("cls");
        Date d(date);
        d.valInput();
        
        cout << d << endl << endl << endl;
        if (d.validate() == true) {
            cout << "Fecha valida." << endl;
            cout << ++d << endl << endl << endl;
        }
        else {
            cout << "Fecha invalida." << endl << endl << endl;
        }
        
        system("pause");
        system("cls");

        cout << "Desea validar otra fecha:" << endl;
        cout << "1.-Si" << endl;
        cout << "0.-No" << endl;
        cout << "Elige una opcion: ";
        cin >> opc;
    }
    system("cls");
    cout << "Gracias por usar el programa. FIN" << endl;
}