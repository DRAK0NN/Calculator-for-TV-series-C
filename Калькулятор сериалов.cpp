/*Создать программу которая вычесляет какое время потребуется для просмотра сериала
Дни, часы, минута, месяцы*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a, b;

    cout << "Введите кол-во серий:" << endl;
    cin >> a;

    cout << "Введите продолжительность одной серии (в минутах)" << endl;
    cin >> b;

    cout << "Ответ в минутах: " << endl;
    cout << a * b << endl;

    cout << "Ответ в часах: " << endl;
    cout << (a * b) / 60 << endl;

    cout << "Ответ в днях: " << endl;
    cout << ((a * b) / 60) / 24 << endl;

}
