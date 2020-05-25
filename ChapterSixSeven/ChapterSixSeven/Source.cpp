#include <iostream>
#include <string>
#include <time.h>
int randomNumber() {
	int random;
	srand(time(NULL));
	random = rand() % 10 + 1;

	return 0;
}
int liftoff() {
	
	for (int i = 10; i > 0; i--) {
		std::cout << i << "\n";
		if (i == 1) {
			std::cout << "Liftoff!";
		}
	}

	return 0;
}
int guessingGame() {

	int answer;
	int guess;
	int tries = 1;
	int difficulty;
	int play = 0;
	int win = 0;
	int cont;

	std::cout << "WELCOME TO THE GUESSING GAME!\nWhich difficulty would you like to play on? EASY = 1, MEDIUM = 2, HARD = 3";
	std::cin >> difficulty;

	switch (difficulty) {
	case 1:

		while (play != 1) {

			srand(time(NULL));
			answer = rand() % 10 + 1;

			std::cout << "The goal of the game is to guess a number between 1 and 10\n";

			while (win != 1) {

				std::cout << "Please enter a number now...\n";
				std::cin >> guess;
				if (guess > answer) {
					std::cout << "Too high! Try again...";
					tries++;
				}
				else if (guess < answer) {
					std::cout << "Too low! Try again...";
					tries++;
				}
				else if (guess == answer) {
					std::cout << "Congrats! It took you " << tries << " tries to guess the correct number!\n";
					std::cout << "Would you like to play again? Enter 0 for yes, or enter 1 for no...";
					std::cin >> cont;
					if (cont == 1) {
						win = 1;
					}
					else if (cont == 0) {
						answer = rand() % 10 + 1;
					}
					tries = 1;
				}

			}
			play = 1;
		}
		break;
	case 2:

		while (play != 1) {

			srand(time(NULL));
			answer = rand() % 100 + 1;

			std::cout << "The goal of the game is to guess a number between 1 and 100\n";

			while (win != 1) {

				std::cout << "Please enter a number now...\n";
				std::cin >> guess;
				if (guess > answer) {
					std::cout << "Too high! Try again...";
					tries++;
				}
				else if (guess < answer) {
					std::cout << "Too low! Try again...";
					tries++;
				}
				else if (guess == answer) {
					std::cout << "Congrats! It took you " << tries << " tries to guess the correct number!\n";
					std::cout << "Would you like to play again? Enter 0 for yes, or enter 1 for no...";
					std::cin >> cont;
					if (cont == 1) {
						win = 1;
					}
					else if (cont == 0) {
						answer = rand() % 100 + 1;
					}
					tries = 1;
				}

			}
			play = 1;
		}
		break;
	case 3:

		while (play != 1) {

			srand(time(NULL));
			answer = rand() % 1000 + 1;

			std::cout << "The goal of the game is to guess a number between 1 and 1000\n";

			while (win != 1) {

				std::cout << "Please enter a number now...\n";
				std::cin >> guess;
				if (guess > answer) {
					std::cout << "Too high! Try again...";
					tries++;
				}
				else if (guess < answer) {
					std::cout << "Too low! Try again...";
					tries++;
				}
				else if (guess == answer) {
					std::cout << "Congrats! It took you " << tries << " tries to guess the correct number!\n";
					std::cout << "Would you like to play again? Enter 0 for yes, or enter 1 for no...";
					std::cin >> cont;
					if (cont == 1) {
						win = 1;
					}
					else if (cont == 0) {
						answer = rand() % 1000 + 1;
					}
					tries = 1;
				}

			}
			play = 1;
		}
		break;
	}


	return 0;
}
int switchRoles() {
	int compGuess = 0, userInput;
	int tries = 1;
	srand(time(NULL));

	std::cout << "Enter a number between 1 and 100 to have the computer guess it...\n";
	std::cin >> userInput;

	while (compGuess != userInput) {
		compGuess = rand() % 100 + 1;
		std::cout << "Computer guess: " << compGuess << "\n";
		tries++;
	}
	std::cout << "The computer took " << tries << " tries to guess your number!";

	return 0;
}
int rng() {

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		int random = rand() % 10000 + 1;
		std::cout << random << "\n";
	}
	return 0;
}
int roShamBo() {

	int wins = 0;
	int ties = 0;
	int losses = 0;
	int play = 0;
	int userInput;
	int replay;

	while (play < 1) {
		srand(time(NULL));
		int compChoice = rand() % 3 + 1;
		std::cout << "Make your choice: 1 - Rock, 2 - Paper, 3 - Scissors\n";
		std::cin >> userInput;

		if (userInput == 1) {
			if (compChoice == 1) {
				std::cout << "You both threw rock, you tied!\n";
				ties++;
			}
			else if (compChoice == 2) {
				std::cout << "Computer chose paper, you lose!\n";
				losses++;
			}
			else if (compChoice == 3) {
				std::cout << "Computer chose scissors, you win!\n";
				wins++;
			}
		}
		else if (userInput == 2) {
			if (compChoice == 1) {
				std::cout << "Computer chose rock, you win!\n";
				wins++;
			}
			else if (compChoice == 2) {
				std::cout << "You both threw paper, you tie!\n";
				ties++;
			}
			else if (compChoice == 3) {
				std::cout << "Computer chose scissors, you lose!\n";
				losses++;
			}
		}
		else if (userInput == 3) {
			if (compChoice == 1) {
				std::cout << "Computer chose rock, you lose!\n";
				losses++;
			}
			else if (compChoice == 2) {
				std::cout << "Computer chose paper, you win!\n";
				wins++;
			}
			else if (compChoice == 3) {
				std::cout << "You both threw scissors, you tie!\n";
				ties++;
			}
		}
		std::cout << "Would you like to play again? 1 for yes, 2 for no\n";
		std::cin >> replay;
		if (replay == 1) {
			compChoice = rand() % 3 + 1;
		}
		else if (replay == 2) {
			play++;
		}
		
	}

	std::cout << "Wins: " << wins << ", Losses: " << losses << ", ties: " << ties << "\n";
	return 0;
}