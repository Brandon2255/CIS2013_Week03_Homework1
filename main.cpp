#include <iostream>
using namespace std;
//Rock paper scissors game
int main() {

	char player1Answer;
	char player2Answer;
	char player1PlayAgain;
	char player2PlayAgain;
	int player1Score = 0;
	int player2Score = 0;
	
	cout << "\t\tWelcome to the Rock Paper Scissors game\n";
	
	do {
	
	cout << "Player1 please enter R, P, or S. ";
	cin >> player1Answer;
	
	cout << "Player2 please enter R, P, or S. ";
	cin >> player2Answer;
	
	switch (player1Answer)
	{
	case 'R':
	case 'r':
		if ((player2Answer == 'R') || (player2Answer == 'r'))
			cout << "You have tied\n";
		else if ((player2Answer == 'P') || (player2Answer == 'p'))
		{	cout << "Player2 won\n";
			player2Score++;
		}	
		else if ((player2Answer == 'S') || (player2Answer == 's'))
		{	cout << "Player1 won\n";
			player1Score++;
		}
		break;
	case 'P':
	case 'p':
		if ((player2Answer == 'R') || (player2Answer == 'r'))
		{	cout << "Player1 won.\n";
			player1Score++;
		}		
		else if ((player2Answer == 'P') || (player2Answer == 'p'))
			cout << "You have tied.\n";
		else if ((player2Answer == 'S') || (player2Answer == 's'))
		{	cout << "Player2 won\n";
			player2Score++;
		}
		break;
	case 'S':
	case 's':
		if ((player2Answer == 'R') || (player2Answer == 'r'))
		{	cout << "Player2 won\n";
			player2Score++;
		}
		else if ((player2Answer == 'P') || (player2Answer == 'p'))
		{	cout << "Player1 won.\n";
			player1Score++;
		}	
		else if ((player2Answer == 'S') || (player2Answer == 's'))
			cout << "You have tied.\n";
		break;
	}
	cout << "player 1 has " << player1Score << " points.\n";
	cout << "player 2 has " << player2Score << " points.\n";
	cout << "Player 1 would you like to play again? Y/N. ";
	cin >> player1PlayAgain;
	cout << "Player 2 would you like to play again? Y/N. ";
	cin >> player2PlayAgain;
	} while (((player1PlayAgain == 'Y') || (player1PlayAgain == 'y')) && ((player2PlayAgain == 'Y') || (player2PlayAgain == 'y')));
	
	return 0;
}