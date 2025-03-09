#include <iostream>
#include <cmath>

const double pi = 3.14159265358979323846;

int main()
{
    system("chcp 1251");

    int angle;
    double radians;

    std::cout << "Введите угол. Вычислится его синус, косинус и тангенс: ";
    std::cin >> angle;


    radians = angle * (pi / 180); //преобразуем градусы в радианы

    std::cout << "Результаты вычислений: " << "Синус равен:" << sin(radians) << " Косинус равен: " << cos(radians) << " Тангенс равен: " << tan(radians);
}

