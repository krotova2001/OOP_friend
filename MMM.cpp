#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix M;
    M.Show_mass();
    Matrix N(10); // cоздаем объект с начальным значением массива - 10
    N.Show_mass();

    Matrix Z = M + N; // проверяем перегрузку оператора
    Z.Show_mass();

    Matrix Z1 = Summ(Z, Z); // проверяем работу дружественной функции сложения
    Z1.Show_mass();


    Matrix1 A; // создадим экземпляр класса с дружественными функциями
    A.FindMax(Z1);

    A.Sort(Z1); // отсортируем наш последний объект
    Z1.Show_mass(); // и посмотрим
}
