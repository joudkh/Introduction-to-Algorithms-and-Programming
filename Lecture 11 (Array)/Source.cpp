#include <iostream>
using namespace std;

int main()
{
	// declare array of integers that contains 5 elements
	int Marks[5];

	// read marks from user and fill in the array
	int counter = 0;
	while (counter < 5)
	{
		cin >> Marks[counter];
		counter++;
	}
	cout << "-----------------" << endl;

	// print all array values
	for (int i = 0; i < 5; i++)
	{
		cout << Marks[i] << endl;
	}
	cout << "-----------------" << endl;

	// calculate and print sum of marks
	int sum = 0;
	for (int i = 0; i < 5;i++)
	{ 
		cout << Marks[i] << endl;
		sum = sum + Marks[i];
	}
	cout << "Total Sum: " << sum << endl;
	cout << "-----------------" << endl;

	// calculate and print maximum and minimum marks
	int min=INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < 5; i++)
	{
		if (Marks[i] < min)
		{
			min = Marks[i];
		}
		if (Marks[i] > max)
		{
			max = Marks[i];
		}
	}
	cout << min << endl;
	cout << "-----------------" << endl;

	// add codes to print the array in reverse order
	// add codes to fill and print new array (add two marks for each mark)
	// add codes to print a specific mark based on user input
}