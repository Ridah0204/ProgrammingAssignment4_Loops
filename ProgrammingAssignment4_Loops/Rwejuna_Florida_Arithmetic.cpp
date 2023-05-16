#include<iostream>

using namespace std;

int main() {

	int number_one, number_two, result, choice;
	char again;

	do {
		cout << "\ntOperations menu\n";
		cout << "\n1.Addition\n";

		cout << "2.Subtraction\n" << "3.Multiplication\n" << "4.Division\n" << "5.Modulus\n" << "6.Quit " << endl;
		 
		cout << "Choose the operation you want to perform:\n";
		cin >> choice;
		while (choice < 1 || choice > 6);

		if (choice != 6)
		{
			cout << " Enter two numbers:\n";
			cin >> number_one >> number_two;

			switch (choice)
			{
			case 1:
				cout << "\nAdding...\n";
				result = number_one + number_two;
				cout << number_one << " + " << number_two << " = " << result << endl;
				break;

			case 2:
				cout << "\nSubtracting...\n";
				result = number_one - number_two;
				cout << number_one << " - " << number_two << " = " << result << endl;
				break;

			case 3:
					cout << "\nMultiplication...\n";
					result = number_one * number_two;
					cout << number_one << " * " << number_two << " = " << result << endl;
					break;

			case 4:
				cout << "\nDivison...\n";
				result = number_one / number_two;
				cout << number_one << " / " << number_two << " = " << result << endl;
				break;

			case 5:
				cout << "\nModulus...\n";
				result = number_one % number_two;
				cout << number_one << " % " << number_two << " = " << result << endl;
				break;

			default: cout << "You entered an invalid operation";

			}

			cout << " Do you want to perform another operation? Y/N:";
			cin >> again;

		}
		if (again == 'N' || again == 'n')
			break;
		else
		{
			again = 'n';
		}
		
	} 

	while (choice != 6);
	cout << "\nFair well programmers!\n";


	return 0;
}