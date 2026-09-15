 #include <iostream>
using namespace std;

class patients {
public:
	string username, doctor;
	int age;


	void addPatient() {
		cout << "Enter patient name: ";
		cin >> username;
		cout << "Enter age: ";
		cin >> age;
		cout << "  Patient \"" << username << "\" added.\n";
	}
	void assignDoctor() {
		string name;
		cout << "Enter patient name: ";
		cin >> name;
		if (name != username)
			cout << "This username is not found!!!    please add this patient\n";
		else {
			cout << "Enter doctor name: ";
			cin >> doctor;
			cout << name << " assigned to Dr. " << doctor << ".\n";
		}
	}
	void searchPatient() {
		string name;
		cout << "Enter the username: ";
		cin >> name;
		if (name != username)
			cout << "This username is not found!!!    please add this patient\n";
		else
			cout << "Name of patient: " << username << " , Age of patient : " << age << '\n';
	}
	void displayPatients() {
		cout << " Patient: " << username << " | Age: " << age << " | Doctor: Dr." << doctor << '\n';
	}
};


int main() {
	cout << "============ Hospital System ===============\n";
	int choice;
	patients p1;
	while (true) {
		cout << " 1. Add Patient\n";
		cout << " 2. Assign Doctor\n";
		cout << " 3. search Patient\n";
		cout << " 4. Display all Patients\n";
		cout << " 5. Exit\n";
		cout << "Choose an option: ";
		cin >> choice;
		switch (choice) {
		case 1:
			p1.addPatient();
			break;
		case 2:
			p1.assignDoctor();
			break;
		case 3:
			p1.searchPatient();
			break;
		case 4:
			p1.displayPatients();
			break;
		case 5:
			cout << "Wish I served you well \n";
			return 0;
		default:
			cout << "Invalid choice  choose from 1 to 5\n";
		}
		cout << "-----------------------------\n";
	}









	return 0;
}