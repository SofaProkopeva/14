#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	cout << "Введите размер массива N: ";
	cin >> N;
	int* g = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите число, не равное предыдущим введённым: ";
		cin >> g[i];
	}
	int d = g[1] - g[0];
	for (size_t i = 1; i < N - 1; i++)
	{
		if (g[i + 1] - g[i] != d)
		{
			cout << "Массив не является арифметической прогрессией";
			return 0;
		}
	}
	cout << "Массив является арифметической прогрессией";
}