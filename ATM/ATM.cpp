#include <iostream>
using namespace std;

void showMenu() {
	cout << "*********MENU*********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "**********************" << endl;
	
}

int main()
{
	//check balance,depostit, withdraw, show menu
	int option;
	double balance = 500;

	do {
		showMenu();
		cout << "Choose one:";
		cin >> option;
		system("cls");

		switch (option) {
		case 1:cout << "Balance is: " << balance << "$" << endl; break;
		case 2: cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3: cout << "Withdraw amount: ";
			double WithdrawAmount;
			cin >> WithdrawAmount;
			if (WithdrawAmount <= balance)
				balance -= WithdrawAmount;
			else
				cout << "Not Enough Money" << endl;
			break;
		}
	} while (option!=4);

	system("pause>0");
}