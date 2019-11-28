#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	char name1[10];
	char name2[10];
	int age1;
	int age2;
	fout.open("Task_2.txt");
	if (fout)
	{
		cout << "Writing to the file\n\nEnter your name: ";
		cin >> name1;
		cout << "Enter your age: ";
		cin >> age1;
		fout << name1<<" " << age1;
		fout.close();
	}
	else cout << "Error writing file";
	ifstream fin;
	fin.open("Task_2.txt");
	if (fin)
	{
		cout << "\n\nReading from the file";
		fin >> name2;
		fin >> age2;
		cout << endl << name2 << endl << age2 << endl;
		fin.close();
	}
	else cout << "Error reading file";
}