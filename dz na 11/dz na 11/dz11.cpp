#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int tovar;
	cout << "¬ведите число товаров ";
	cin >> tovar;

	//проверка
	if (tovar > 1000)
	{
		cout << "ќшибка!!! ¬ведите число меньше 1000\n";
		while (tovar > 1000)
		{
			cout << "¬ведите число товаров ";
			cin >> tovar;
		}
	}

	//создание и заполнение массива
	int* array = new int[tovar];
	for (int i = 0; i < tovar; i++)
	{
		cout << "¬ведите цену " << i + 1 << " - ого товара ";
		cin >> array[i];
	}

	//вывод массива
	for (int i = 0; i < tovar; i++)
	{
		cout << array[i] << " ";
	}

	//сортировка массива
	for (int i = 1; i < tovar; i++)
	{
		int a = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] < a)
		{
			array[j + 1] = array[j];
			array[j] = a;
			j--;
		}
	}
	cout << "\n";

	//растановка чисел больш. меньш. больш. ...
	int* arraysort = new int[tovar];
	int f = 0;
	for (int i = 0; i < tovar; i++,f++)
	{
		arraysort[i] = array[i/2];
		for (int j = 0; j < 1; j++)
		{
			arraysort[i+1] = array[tovar - 1 - f];
		}
		i += 1;
	}


	//суммирование
	int sum = 0;
	for (int i = 0; i < tovar; i++)
	{
		if (i % 2 == 0)
		{
			sum += arraysort[i];
		}
	}

	//вывод
	for (int i = 0; i < tovar; i++)
	{
		cout << arraysort[i] << " ";
	}
	cout << "\n";
	cout << "—умма покупки: " << sum;



	return 0;
}