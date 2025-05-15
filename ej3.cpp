#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Ingrese tres valores: ";
    cin >> A >> B >> C;

    if (A == B || B == C || A == C) {
        cout << "Alerta: hay valores iguales." << endl;
    } else {
        int mayor = A;
        int menor = A;

        if (B > mayor) mayor = B;
        if (C > mayor) mayor = C;

        if (B < menor) menor = B;
        if (C < menor) menor = C;

        cout << "Mayor: " << mayor << endl;
        cout << "Menor: " << menor << endl;
    }

    return 0;
}
