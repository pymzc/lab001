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

// Максимальная высота полёта
    double h = (v0 * v0 * sin(a) * sin(a)) / (2 * g);
    cout << "Максимальная высота полёта = " << fixed << setprecision(6) << h << endl;

// Максимальная дальность полёта
    double l = (v0 * v0 * sin(2 * a)) / g;
    cout << "Максимальная дальность полёта = " << fixed << setprecision(6) << l << endl;

// Радиус кривизны начала траектории:
    double R = (v0 * v0) / (g * cos(a));
    cout << "Радиус кривизны начала траектории = " << fixed << setprecision(6) << R << endl;
}