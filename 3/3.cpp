#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "a=";
    double a;
    cin >> a;
    const double PI = 3.14159265359;
    double res = pow(cos((3.0 / 8) * PI - a / 4), 2) - pow(cos((11.0 / 8) * PI + a / 4), 2);
    cout << "z1=" << res;
    cout << "\nz2=" << (sqrt(2.0) / 2) * sin(a / 2) << endl;
}
