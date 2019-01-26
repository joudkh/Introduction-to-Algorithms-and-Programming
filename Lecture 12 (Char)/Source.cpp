#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		double x, y, result = 0;
		char op;

		cout << "Enter The First Number:";
		cin >> x;

		cout << "Enter The Second Number:";
		cin >> y;

		cout << "Enter An Operation:";
		cin >> op;

		if (op == '+')
		{
			result = x + y;
			cout << "Total Result: " << result << endl;
		}
		else if (op == '-')
		{
			result = x - y;
			cout << "Total Result: " << result << endl;
		}
		else if (op == '*')
		{
			result = x*y;
			cout << "Total Result: " << result << endl;

		}
		else if (op == '/')
		{
			result = x / y;
			cout << "Total Result: " << result << endl;
		}
		else
		{
			cout << "Invalid Operation." << endl;
		}


		cout << "If you want to exit press (n): " << endl;
		cin >> op;

		if (op == 'n' || op == 'N')
		{
			break;
		}

	}


	
	
}