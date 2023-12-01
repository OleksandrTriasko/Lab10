#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double a = 7;
    double b;
    cout << "27: \na=7 \nb=";
    cin >> b;
    double x = sqrt(a) + sqrt(b);
    double p = sqrt(a * a + x * x);
    double y = pow(atan(abs(p)),3);
    cout << "y(x)=" << y << endl;
}
