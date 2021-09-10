#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int tovar;
	cout << "������� ����� ������� ";
	cin >> tovar;

	//��������
	if (tovar > 1000)
	{
		cout << "������!!! ������� ����� ������ 1000\n";
		while (tovar > 1000)
		{
			cout << "������� ����� ������� ";
			cin >> tovar;
		}
	}

	//�������� � ���������� �������
	int* array = new int[tovar];
	for (int i = 0; i < tovar; i++)
	{
		cout << "������� ���� " << i + 1 << " - ��� ������ ";
		cin >> array[i];
	}

	//����� �������
	for (int i = 0; i < tovar; i++)
	{
		cout << array[i] << " ";
	}

	//���������� �������
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

	//���������� ����� �����. �����. �����. ...
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


	//������������
	int sum = 0;
	for (int i = 0; i < tovar; i++)
	{
		if (i % 2 == 0)
		{
			sum += arraysort[i];
		}
	}

	//�����
	for (int i = 0; i < tovar; i++)
	{
		cout << arraysort[i] << " ";
	}
	cout << "\n";
	cout << "����� �������: " << sum;



	return 0;
}