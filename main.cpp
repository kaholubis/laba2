#include <math.h>
#include <stdio.h>
#include <clocale>
#include <iostream>

using namespace std;

int main()
{
    double v, u, t1, t2, s;
    setlocale(LC_CTYPE, "rus");
    cout << "����������� �������� ����� (��/�): ";
    scanf("%lf", &v);
    cout << "�������� ������� ���� (��/�): ";
    scanf("%lf", &u);
    if (v > u)
    {
    cout << "����� �������� ����� �� ����� (�): ";
    scanf("%lf", &t1);
    cout << "����� �������� �� ���� ������ ������� (�): ";
    scanf("%lf", &t2);
    s=v*t1+(v-u)*t2;
    cout << "���� ����� ����� ";
    cout << s;
    cout << " ��";
    }
    else
        cout << "�������� ����� ������ ���� ������ �������� �������";
    return 0;

}
