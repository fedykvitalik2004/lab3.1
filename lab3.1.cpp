// lab3.1.cpp
// Федик Віталій
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;// вхідний параметр
    double y;// результат обчислення виразу
    double a;// проміжний результат-стала частина виразу
    double b;// проміжний результат-змінна частина виразу
   
    cout << "x="; cin >> x;

    a = 2 * abs(5 - x);

    // спосіб №1: розгалуження в скороченій формі
    if (x <= -1)
        b = exp(abs(2+x));
    if (x > -1 && x < 1)
        b = sin(1.0/ (abs(2 + x)))* sin(1.0 / (abs(2 + x)));
    if (x >= 1)
        b = (cos(x) * cos(x)) / (1 + abs(sin(x)));

    y = a - b;

    cout << endl;
    cout << "1)y=" << y << endl;
    
    // спосіб №2 розгалуження в повній формі
    if (x <= -1)
        b = exp((abs(2 + x)));
    else
        if (x >=1)
            b = cos(x) * cos(x) / (1 + abs(sin(x)));
        else
            b = sin(1.0 / (abs(2 + x))) * sin(1.0 / (abs(2 + x)));
           
    
    y = a - b;
    
    cout << "2)y=" << y << endl;

    cin.get();
    return 0;
}

