/*************************************
 * Автор:   Ильиных Андрей           *
 * Задание: Линейные алгоритмы       *
 * Вариант: 3                        *
 ************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
// Ввод данных
    double a = 14.0 * 3.14159265358979323846 / 180.0;
    double v0 = 750.0;
    double g = 9.81;
// Расчёт времени полёта
    double t = (2 * v0 * sin(a)/g);
    cout << "Время полёта = " << fixed << setprecision(6) << t << endl;

// Расчёт высоты полёта
    double h = (v0 * v0 * sin(a) * sin(a)) / (2 * g);
    cout << "Высота полёта = " << fixed << setprecision(6) << h << endl;

// расчёт дальности полёта
    double s = (v0 * v0 * sin(2 * a)) / g;
    cout << "Дальность полёта = " << fixed << setprecision(6) << s << endl;
}