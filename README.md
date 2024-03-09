# TIC-TAC-TOE-GAME-USING-C
This repository hosts a classic implementation of the timeless Tic Tac Toe game written in C. Featuring a simple yet intuitive command-line interface, players can engage in the ultimate battle of X's and O's. With clean, well-commented code, this project serves as a great resource for beginners learning C programming or anyone seeking to delve into game development fundamentals.

### Requirements:
##### To run this Tic Tac Toe game in C, you will need a C compiler and a text editor to write and edit the code. Here are some options:
1. **C Compiler:** You can use any C compiler to run this code. Some popular options include GCC (GNU Compiler Collection), Clang, and Microsoft Visual C++.
2. **Text Editor:** You can use any text editor to write and edit the code. Some popular options include Visual Studio Code, Sublime Text, Atom, and Vim.

Additionally, this code uses the system() function to clear the console screen after each move. This function is specific to certain operating systems and compilers. If you are using a different compiler or operating system, you may need to replace the system("cls") function with a different command to clear the console screen.
For example, if you are using a Unix-based operating system such as Linux or macOS, you can replace system("cls") with system("clear") to clear the console screen.

### Key Features:
1. Pure C implementation for portability and simplicity
2. Command-line interface for straightforward gameplay
3. Extensively commented codebase for easy comprehension and learning

### Code Overview:
This is a simple implementation of the Tic Tac Toe game in C. The program uses a 2D character array to represent the game board and provides functions for displaying the board, moving the players, and checking the result of the game.

##### Displaying the Board
The showboard() function displays the current state of the game board.

##### Moving Players
The move_player1() and move_player2() functions prompt the respective players to enter the index of the box where they want to place their marker and then update the board accordingly.

##### Checking the Result
The result() function checks if the game has been won or if it is a tie.

##### Playing the Game
The main() function initializes the board, displays the initial board, and then enters a loop where it alternates between moves for player 1 (X) and player 2 (O). After each move, it checks the result of the game. If player 1 or player 2 has won, the game ends and the winner is declared. If all boxes on the board have been filled and no player has won, the game ends in a tie.
