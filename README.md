# Fibonacci Solitaire

Fibonacci Solitaire is a C++ program that lets you play an engaging card game centered around creating piles and identifying Fibonacci sequences. The program guides you through the game, automatically performing calculations and checking for Fibonacci numbers.

## Game Objective

The objective of Fibonacci Solitaire is to create piles using a standard deck of cards and determine if any of the piles form Fibonacci sequences. The goal is to identify the Fibonacci piles and achieve a winning outcome.

## How to Play

1. Start by running the program and following the instructions on the screen.
2. The program will simulate drawing cards from the deck and building piles on the table.
3. Each card's value corresponds to the following: Ace = 1, 2 = 2, ..., 10 = 10, Jack = 10, Queen = 10, King = 10.
4. The program will calculate the sum of the cards in each pile and check if it forms a Fibonacci number.
5. If a Fibonacci sequence is found, that pile is discarded, and the game continues with the next card.
6. If the sum does not form a Fibonacci number, the program will add the next card to the pile.
7. The game continues until the last card is drawn from the deck.

## Winning and Losing Conditions

- If the last card drawn completes a Fibonacci sequence in any of the piles, you win the game.
- If the last card does not form a Fibonacci sequence in any of the piles, you lose the game.

The program will display "Winner" or "Loser" based on the outcome and show the count of Fibonacci piles created.

## Execution

To play Fibonacci Solitaire, follow these steps:

1. Make sure you have a C++ compiler installed on your system.
2. Open the terminal or command prompt and navigate to the directory where the program file is located.
3. Compile the C++ source code using the appropriate compiler command. For example: `g++ Solitaire.cpp -o Solitaire`.
4. Run the compiled program by executing the command: `./Solitaire`.
5. Follow the instructions displayed on the screen to navigate through the game menu and make your selections.
6. When playing the game, follow the rules outlined earlier to create Fibonacci piles.
7. Once the last card is drawn, the program will display the result and the count of Fibonacci piles created.

Menu Options:
- New Deck: Create an unshuffled deck in the order of Spades, Hearts, Diamonds, and Clubs, followed by Ace through King.
- Display Deck: Show all the cards in a grid format of 13 columns and 4 rows.
- Shuffle Deck: Randomly shuffle all the cards in the deck.
- Play Solitaire: Begin playing Fibonacci Solitaire.
- Exit: Terminate the program.
