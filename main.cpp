#include <math.h>
#include <stdio.h>
#include <clocale>
#include <iostream>

using namespace std;

int main()
{
    double v, u, t1, t2, s;
    setlocale(LC_CTYPE, "rus");
    cout << "Собственная скорость лодки (км/ч): ";
    scanf("%lf", &v);
    cout << "Скорость течения реки (км/ч): ";
    scanf("%lf", &u);
    if (v > u)
    {
    cout << "Время движения лодки по озеру (ч): ";
    scanf("%lf", &t1);
    cout << "Время движения по реке против течения (ч): ";
    scanf("%lf", &t2);
    s=v*t1+(v-u)*t2;
    cout << "Путь лодки равен ";
    cout << s;
    cout << " км";
    }
    else
        cout << "Скорость лодки должна быть больше скорости течения";
    return 0;

}
