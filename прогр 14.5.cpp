#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	cout << "Введите размер массива: "; 
	cin >> N;
	int* g = new int[N];
	cout << "Введите элементы массива, два из которых имеют одинаковые значения: " << endl;
	for (int i = 0; i < N; i++) 
		cin >> g[i];
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (g[i] == g[j]) 
				cout << i << endl << j;
		}
	}
}