 #include <iostream>
#include <vector>
using namespace std;

void displayGrid(char g[3][3]) {
	cout << "-------\n";
	for (int i = 0; i < 3; i++) {
		cout << '|';
		for (int j = 0; j < 3; j++) {
			cout << g[i][j] << "|";
		}
		cout << "\n";
		cout << "-------\n";
	}
}

bool finishedx(char g[3][3]) {
	for (int i = 0; i < 3; i++) {
		if (g[i][0] == g[i][1] && g[i][0] == g[i][2]) {
			if (g[i][0] == 'x')
				return true;
		}
		if (g[0][i] == g[1][i] && g[0][i] == g[2][i]) {
			if (g[0][i] == 'x')
				return true;
		}
	}
	if (g[0][0] == g[1][1] && g[0][0] == g[2][2]) {
		if (g[0][0] == 'x')
			return true;
	}
	if (g[2][0] == g[1][1] && g[2][0] == g[0][2]) {
		if (g[2][0] == 'x')
			return true;
	}

	return false;
}
bool finishedo(char g[3][3]) {
	for (int i = 0; i < 3; i++) {
		if (g[i][0] == g[i][1] && g[i][0] == g[i][2]) {
			if (g[i][0] == 'o')
				return true;
		}
		if (g[0][i] == g[1][i] && g[0][i] == g[2][i]) {
			if (g[i][0] == 'o')
				return true;
		}
	}
	if (g[0][0] == g[1][1] && g[0][0] == g[2][2]) {
		if (g[0][0] == 'o')
			return true;
	}
	if (g[2][0] == g[1][1] && g[2][0] == g[0][2]) {
		if (g[2][0] == 'o')
			return true;
	}

	return false;
}
void player1(char g[3][3]) {
	int row, column;
	cout << " player 1: (x) Enter place(row/column) from(0>2)\n";
	cin >> row >> column;
	if (g[row][column] == 'x' || g[row][column] == 'o' || row > 2 || column > 2) {
		cout << "Invalid Place\n";
		player1(g);
	}
	else
		g[row][column] = 'x';
	displayGrid(g);
}
void player2(char g[3][3]) {
	int row, column;
	cout << " player 2: (o) Enter Place (row/column)from(0>2)\n";
	cin >> row >> column;
	if (g[row][column] == 'x' || g[row][column] == 'o' || row > 2 || column > 2) {
		cout << "Invalid Place\n";
		player2(g);
	}
	else
		g[row][column] = 'o';
	displayGrid(g);
}

void xo_game() {
	char grid[3][3] = {
   {' ',' ',' '},
   {' ',' ',' '},
   {' ',' ',' '}
	};

	displayGrid(grid);
	bool check = 0;
	while (!finishedx(grid) || !finishedo(grid)) {

		player1(grid);
		if (finishedx(grid)) {
			cout << "Player 1 won !!!\n";
			break;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (grid[i][j] == ' ')
					check = 1;
			}
		}
		if (!check) {
			cout << "Draw (=)\n";
			break;
		}
		player2(grid);
		if (finishedo(grid)) {
			cout << "Player 2 won !!!\n";
			break;
		}
	}

}

int main() {
	xo_game();
	return 0;
}