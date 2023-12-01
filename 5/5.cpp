#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double E = 2.718281828459;
    double x, y;
    cout << "7: \nx=";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (abs(1 - 9 * y * y) <= 1e-5 || abs(9 * y + 3) <= 1e-5)
    {
        cout << "Invalid values" << endl;
        return 0;
    }
    double res = pow(E, y) * ((8 * x * x + 3) / (1 - 9 * y * y)) * ((x + 0.5) / (9 * y + 3));
    cout << "Значення виразу = " << res << endl;
}
