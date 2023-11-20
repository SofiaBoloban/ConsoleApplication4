// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
//include <iostream>
//include <cmath>

// Обчислення значення функції F(x)
double F(double x, double t) {
    double a = log10(x);
    double b = sqrt(x * x + t * t);
    return pow(fabs(a - b), 1.0 / 3.0);
}

int main() {
    double x = 1.7;
    double t = 3;
    double y = F(x, t);
    std::cout << "Значення функції y при x=" << x << " та t=" << t << " дорівнює " << y << std::endl;
    return 0;
}