//Подключение директив
#include <iostream>
#include<cmath>
int main()
{
    //Объявление переменных
    double x, a = 2.4, b = 3.1, y1, y2, y3, y4;
      std::cin >> x;
      //Вычисление y1
     y1 = (a * x + 1);
        y1 = pow(y1, 4);
        std::cout << y1;
        std::cin >> x;
        //Вычисление y2
        y2 = 1 / ((2 * pow(x, 2)) + b * (log(x)));
        std::cout << y2;
        std::cin >> x;
        //Вычисление y3
        y3 = a *(cos(pow(b + x, 2)));
      std::cout << y3;
}

