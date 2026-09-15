 #include <iostream>
using namespace std;

class account {
	string owner;
	int currentBalance;
public:
	account(string name, int balance) {
		owner = name;
		currentBalance = balance;
	}
	void setAccount(string name, int balance) {
		owner = name;
		currentBalance = balance;
	};
	void getAccount() {
		cout << owner << ' ' << currentBalance << '\n';
	};

	void deposit() {
		int deposit;
		cout << "Enter amount to deposit\n";
		cin >> deposit;
		currentBalance += deposit;
	}
	void withdraw() {
		int withdraw;
		cout << "Enter amount to withdraw\n";
		cin >> withdraw;
		if (withdraw > currentBalance) {
			cout << "Errorr ,Not enough balance\n";
		}
		else {
			currentBalance -= withdraw;
		}
	}
};


void display() {
	cout << "Choose an option\n";
	cout << "1. Deposit\n";
	cout << "2. Withdraw\n";
	cout << "3. check Balance\n";
	cout << "4. Exit\n";
}

int main() {
	cout << "========== Bank System ============\n";
	string username;
	int balance;
	cout << "Enter name and your balance\n";
	cin >> username;
	cin >> balance;
	account c1(username, balance);
	int choice;
	c1.getAccount();
	while (true) {
		display();
		cin >> choice;
		switch (choice) {
		case 1:
			c1.deposit();
			break;
		case 2:
			c1.withdraw();
			break;
		case 3:
			c1.getAccount();
			break;
		case 4:
			cout << "Wish you happy day\n";
		}
		if (choice == 4)
			break;
		cout << "=======================\n";
	}





	return 0;
}
