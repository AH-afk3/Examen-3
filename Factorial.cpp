#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;
    cout << "Factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}
