#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "12: \nОберіть номер завдання: ";
    int a;
    cin >> a;
    cout << endl;
    switch(a)
    {
    case 1:
    {
        int c[3], t[3];
        for (int i=0; i<3; i++)
        {
            cout << 'c' << i+1 << "=";
            cin >> c[i];
        }
            
        for (int i=0; i<3; i++)
        {
            cout << 't' << i+1 << "=";
            cin >> t[i];
        }
        int sum=0;
        cout << "Сума за: ";
        for (int i=0; i<3; i++)
        {
            cout << i + 1 << " розмову " << c[i]*t[i]/100 << " грн " << c[i]*t[i]%100 << "коп., ";
            sum += c[i] * t[i];
        }
        cout << "усього " << sum / 100 << " грн " << sum % 100 << " коп." << endl;
        break;
    }
    case 2:
    {
        double k;
        cout << "Початкова вартість = ";
        cin >> k;
        cout << "Результат = " << k * (1 - 10.0 / 100) * (1 + 15.0 / 100) << endl;
        break;
    }
    }
}
