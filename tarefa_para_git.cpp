#include <iostream>
using namespace std;

int main() {
    float a, b, c, d;
    cout << "Me dê 4 notas: " << endl;
    cin >> a >> b >> c >> d;
    cout << "As notas foram: " << a << ", " << b << ", " << c << ", " << d << "." << endl;

    float mediaPonderada = (a * 0.5 + b * 0.1 + c * 0.1 + d * 0.3) / 4.0;

    cout << "A média das notas ponderadas é: " << mediaPonderada << endl;

    return 0;
}

