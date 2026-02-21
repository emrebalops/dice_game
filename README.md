# C++ Dice Simulator

## Description
A straightforward C++ console application that simulates the rolling of two six-sided dice. The program prompts the user to initiate the roll, calculates the individual results of each die using a randomized seed, and displays the total sum.

## Features
* **Modular Design:** Utilizes a dedicated `rollDice()` function, separating the randomization and calculation logic from the main execution block.
* **True Randomization:** Implements `<cstdlib>` and `<ctime>` libraries to ensure unique dice rolls upon every execution.
* **Clean Syntax:** Fully documented codebase with English variables, comments, and console outputs.

## How to Run
1. Compile the source code using a standard C++ compiler (e.g., `g++ main.cpp -o dice_simulator`).
2. Run the generated executable in your terminal.
3. Type `r` and press `ENTER` to roll the dice when prompted.
