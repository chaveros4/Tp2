#include <iostream>
using namespace std;

int main() {
    int v[] = {1, 10, 5, 15};
    int suma = 0;
    for (int i = 0; i < 4; i++) {
        suma += v[i];
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}
