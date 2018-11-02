# Toll-Plaza---CPP-class
Defining class in C++

## Problem Statement

Imagine a toll-plaza at a bridge. Cars passing by the toll-plaza are expected to pay **Rs.30/-** as toll-tax. Mostly they do, but sometimes a car goes by without paying. The toll-plaza keeps track of the number of cars that have gone by, and the total amount of money collected.

Recall the OOP concepts and model this toll-plaza with the help of a class called **toll-plaza**. The two data items of the class are a type **int** to hold the total number of cars, and a type **double** to hold the total amount of money collected. For the class implement:
  * A constructor that initializes both of data items to 0.
  * A member function called payingCar() that increments the car total and adds 30 to the cash total.
  * Another function, called nopayCar() that increments the car total but adds nothing to the cash total.
  * Finally, a member function called display() should displays the total cars and the total cash collected.
  
Include the main() to test this class by allowing the user to press one key (for example C) to count the paying cars, and another key (for example N)to count a nonpaying car. Pushing the T key should cause the program to display the total cars and total cash. When user presses E the program should exit.
