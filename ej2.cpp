#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Suma: " << a + b << endl;
        cout << "Resta: " << a - b << endl;
    } else {
        cout << "Producto: " << a * b << endl;
        if (b != 0)
            cout << "División: " << a / b << endl;
        else
            cout << "No se puede dividir por cero." << endl;
    }

    return 0;
}
