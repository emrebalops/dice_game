#include <iostream>
#include <cstdlib> //for rand and strand
#include <ctime> //for time
#include <string> //for string
using namespace std;

// Function Prototype: Tells the compiler about the function
int rollDice();

int main(){
string roll;
int result;

// Initialize random number generator with current time
srand(time(0));
cout << "Welcome to the dice game, please press r to start: ";
cin >> roll;

// Check if user entered "r"
if(roll == "r"){
cout << "Game Starting" << endl;
// Call the function and store the returned value in 'result'
result = rollDice();
// Print the total result
cout << "Total sum: " << result << endl;

}
else{
cout << "You entered the wrong letter, try again.";
return 0;// Exit program
}

return 0;
}
// Function Definition: Simulates rolling two dice
int rollDice(){
int dice1;
int dice2;
int sum;
// Generate random numbers between 1 and 6
dice1 = rand() %6+1;
dice2 = rand() %6+1;
// Calculate total
sum = dice1 + dice2;
// Show individual dice results
cout << "Rolled:" << dice1 << " - " << dice2 << endl;
// Return the total sum to main function
return sum;
}
