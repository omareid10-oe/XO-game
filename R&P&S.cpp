  #include <iostream>
using namespace std;
void Score(char play, char computer, int& countme, int& countc) {
	if (play == computer)
		cout << "draw\n";
	else if ((play == 'R' && computer == 'S') || (play == 'P' && computer == 'R') || (play == 'S' && computer == 'P'))
		countme++;
	else if ((computer == 'R' && play == 'S') || (computer == 'P' && play == 'R') || (computer == 'S' && play == 'P'))
		countc++;
	cout << "user = " << countme << "\ncomputer = " << countc << "\n";
}

void Input() {
	int countme = 0, countc = 0;
	while (countme < 3 && countc < 3) {
		cout << "Enter  ( R / P / S )\n";
		char play;
		cin >> play;
		if (play != 'R' && play != 'P' && play != 'S') {
			cout << "invalid letter\n";
			cout << "===================\n";
			continue;
		}
		int computer = rand() % 3;
		if (computer == 0)
			computer = 'R';
		else if (computer == 1)
			computer = 'P';
		else
			computer = 'S';
		cout << "The computer chose " << char(computer) << '\n';
		cout << "You chose " << play << '\n';
		Score(play, computer, countme, countc);
		cout << "==============================\n";
	}
	if (countme == 3)
		cout << "You are the winner\n";
	else if (countc == 3)
		cout << "I am the winner\n";
}


int main() {
	cout << "Play with the computer (Rock / Paper / Scissors)\n";
	cout << "The first to reach 3 is the winner\n";
	Input();




	return 0;
}