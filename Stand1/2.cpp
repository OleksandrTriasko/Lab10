#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "2: \nТрикутник задано координатами вершин A(0;0),B(2;1),C(-2;3). \n2. Обчислити медіану m_a та бісектрису w_b." << endl;
    double ax = 0, ay = 0, bx = 2, by = 1, cx = -2, cy = 3;
    double m = cy - 1;
    cout << "Медіана = " << m << endl;
    double a = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
    double b = sqrt(pow(cx - ax, 2) + pow(cy - ay, 2));
    double c = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    double w = sqrt(c* a* (a + b + c) * (a - b + c)) / (c+a);
    cout << "Бісектриса = " << w << endl;
}
