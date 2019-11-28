#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	int array1[5];
	int array2[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> array1[i];
	}
	fout.open("Task_1.txt");
	if (fout)
	{
		cout << "\nWriting array's elements\n\n";
		for (int i = 0; i < 5; i++)
		{
			fout << array1[i]<<" ";
		}
		fout.close();
	}
	else cout << "Error opening file";
	ifstream fin;
	fin.open("Task_1.txt");
	if (fin)
	{
		for (int i = 0; i < 5; i++)
		{
			fin >> array2[i];
		}
		cout << "The retreived array is\n";
		for (int i = 0; i < 5; i++)
		{
			cout << array2[i] << " ";
		}
		fin.close();
	}
	else cout << "Error reading file";
	for (int i = 0; i < 5; i++)
	{
		sum = sum + array2[i];
	}
	fout.open("Task_1.txt", ios::app);
	if (fout)
	{
		cout << "\n\nSum append successfully\n";
		fout << "Sum is: " << sum;
		fout.close();
	}
	else cout << "Error appending file";
}