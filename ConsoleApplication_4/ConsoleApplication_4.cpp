// ConsoleApplication_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
// Задание 1 (Вариант 3)
//#define y 2
//#define z y * y
//#define t sin(2 + z)
//#define x 6 * pow(t,2) - (z+1)/pow(y,2)
// Задание 2
//#define x 2.87
//#define y 0.84
//#define w(x,y) (2*x*y)/x+cos(y)
//#define z w(x,y)
//#define f(x,y,z) (sqrt(x*sin(2)*y))/z+exp(x)*y
//#define b f(x,y,z)

// Задание 3
const double PI = 3.14;

double y(double a) {
    return sin(PI / 2 + 3 * a) / (1 - sin(3 * a - PI));
}

int main()
{
    // Задание 1
    /* printf("%f\t\n", x);
    return 0;*/
    // Задание 2
    /*printf("%f\t\n", b);
    return 0;*/
    // Задание 3
    setlocale(0, "RUS");
    double a;
    std::cout << "Введите число альфа: ";
    std::cin >> a;
    std::cout << y(a) << std::endl;
}




