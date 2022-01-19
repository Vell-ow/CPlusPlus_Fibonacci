// Programmer:    Andrew Coviello
// Module 10
// Project 2
// Problem Statement: Ask the user to enter a number and a character 
// representing either Fahrenheit or Celsius, then convert using a 
// mathematical formula and print the result.
// 1. Print an initial welcoming message to the screen
// 2. Prompt the user for an integer, representing degrees of some
// temperature, and a character that represents the format
// 3. Use the conversion char to determine which formula to use
// 4. Print the conversion to the screen

#include <iostream>
using namespace std;

void fibonacci(int fiboNum);

int main() {  
  // Print a message to the screen    
  cout << "Hello!" << endl;    
  cout << "I can create a Fibonacci sequence for you" << endl;
  // Variables are declared dynamically no need to pre-define
  cout << "Enter a number:" << endl;
  // fibonacci number given by the user
  int fiboNum;
  // read in the number
  cin >> fiboNum;
  // function definition

  // function call
  fibonacci(fiboNum);
}

  void fibonacci(int fiboNum)
  {
    // Here is the processing that is needed
    double constant = 1.618;
    // if the fibonacci number provided by the user is greater than 0 and
    // less than 26
    if(fiboNum > 0 && fiboNum < 26)
    {
      // Output the results    
      for(int i = 1; i < fiboNum + 1; i++)
      {
        // print the fibonacci sequence, formatted
        cout << "That Fibonacci sequence is: " << (int) i * constant << ", ";
        // no hanging comma
        if(i == fiboNum)
        {
          // prints the last digit of the sequence
          cout << ", " << i;
        }
      }
    }
    // if the number is not legal
    else if(fiboNum <= 0 || fiboNum > 25)
    {
      // print a silly exit message
      cout << "Bogos Binted" << endl;
      // quit
      exit(0);
    }
  }
