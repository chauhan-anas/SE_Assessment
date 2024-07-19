#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissors {
public:
    // Function to start the game
    void startGame() {
        srand(time(0)); // Seed for random number generation
        int playerChoice, computerChoice;
        char playAgain;

        do {
            // Display menu
            cout << "====== Rock Paper Scissors ======\n";
            cout << "\n\n\t 1. Rock";
            cout << "\n\n\t 2. Paper";
            cout << "\n\n\t 3. Scissors";
            cout << "\n\n\t Enter your choice (1-3): ";
            cin >> playerChoice;

//            // Validate player's choice
//            while (playerChoice < 1 || playerChoice > 3) {
//                cout << "Invalid choice! Please enter a number between 1 and 3: ";
//                cin >> playerChoice;
//            }

            // Generate computer's choice (1 = Rock, 2 = Paper, 3 = Scissors)
            computerChoice = (rand() % 3) + 1;

            // Display choices
            cout << "You chose "<<playerChoice;
            cout << "Computer chose "<<computerChoice;
            

            // Determine winner
            int result; 
            if (result == 0) 
                cout << "\n\n\t It's a draw!";
            else if (result == 1) 
                cout << "\n\n\t You win!";
            else 
                cout << "\n\n\t Computer wins!";
            

            // Ask if the player wants to play again
            cout << "\n\n\t Do you want to play again? (y/n): ";
            cin >> playAgain;
            

        } while (playAgain == 'y' || playAgain == 'Y');
    }

private:
    // Function to display choices
    void displayChoice(int choice) {
        switch (choice) {
            case 1:
                cout << "Rock ";
                break;
            case 2:
                cout << "Paper ";
                break;
            case 3:
                cout << "Scissors ";
                break;
        }
    }

    // Function to determine the winner
    // Returns 0 for draw, 1 for player win, 2 for computer win
    int determineWinner(int playerChoice, int computerChoice) {
        if (playerChoice == computerChoice) 
		{
            return 0; // Draw
        } else if ((playerChoice == 1 && computerChoice == 3) ||(playerChoice == 2 && computerChoice == 1) ||(playerChoice == 3 && computerChoice == 2)) 
		{
            return 1; // Player wins
        } else 
		{
            return 2; // Computer wins
        }
    }
};

int main() {
    // Create an object of RockPaperScissors class
    RockPaperScissors game;

    // Start the game
    game.startGame();

    return 0;
}

