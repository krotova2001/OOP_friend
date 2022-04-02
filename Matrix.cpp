#include "Matrix.h"

void Matrix::Show_mass()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) 
		{
			cout << mass[i][j] << "; ";
		}
		cout << "\n";
	}
	cout << "\n";
}

Matrix Matrix::operator+(Matrix a)
{
	Matrix temp;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				temp.mass[i][j] = mass[i][j] + a.mass[i][j];
			}
		}
		return temp;
}

Matrix Summ(Matrix a, Matrix b)
{
	Matrix temp;
	temp = a + b;
	return temp;
}

void Matrix1::FindMax(Matrix a)
{
	for (int i = 0; i < 10; i++)
	{
		int result=0;
		for (int j = 0; j < 10; j++)
		{
			if (result <= a.mass[i][j])
			{
				result = a.mass[i][j];
			}
		}
		cout << "Max of row " << i << " - " << result << "\n";
	}
	cout << "\n";
}

void Matrix1::Sort(Matrix& a) // примем объект по ссылке, так как мы его будем изменять
{
	for (int i = 0; i < 10; i++) // проходим по строкам
	{
		for (int j = 0; j < 10; j++) // проходим по столбцам
		{
			for (int m = 0; m < 9; m++) // вложенный цикл обычной пузырьковой сортировки
			{
				if (a.mass[i][m] > a.mass[i][m + 1])
				{
					int temp = a.mass[i][m];
					a.mass[i][m] = a.mass[i][m + 1];
					a.mass[i][m + 1] = temp;
				}
			}
		}
	}
}


