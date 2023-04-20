#include <iostream>
#include <stdlib.h>

bool Contain(int* arr, int& size, int val)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == val)
		{
			return true;
		}
	}
	return false;
}

void Append(int*& arr, int& size, int val) 
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = val;
	std::swap(newArr, arr);
	delete[] newArr;
	size++;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int m, n, f =0;
	std::cin >> m;
	std::cin >> n;
	int* a = new int[m];
	int* b = new int[n];
	int* c = new int[f];
	for (int i = 0; i < m; i++)
	{
		a[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		b[i] = rand() % 10;
	}
	for (int i = 0; i < m; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << b[i]<< " ";
	}
	std::cout << "\n";

	for (int i = 0; i < m; i++)
	{
		if (!Contain(c, n, a[i]) && !Contain(b, n, a[i]))
		{
			Append(c, f, a[i]);
		}
	}
	for (int i = 0; i < f; i++)
	{
		std::cout << c[i] << " ";
	}
	std::cout << "\n";

}