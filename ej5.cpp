#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un número: ";
    cin >> N;

    if (N % 2 == 0)
        cout << "Es par.";
    else
        cout << "Es impar.";

    return 0;
}
