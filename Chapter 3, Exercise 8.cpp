/******************************************************************************
8. Write a program to test an integer value to determine if it is odd or
even. As always, make sure your output is clear and complete. In other
words, don’t just output yes or no. Your output should stand alone,
like The value 4 is an even number. Hint: See the remainder (modulo)
operator in §3.4.
*******************************************************************************/
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Maharaj
 */

#include <iostream>

using namespace std;

int main()
{
	/*Declaring varibles and promting use for input*/
    int num;
    cout<<"Enter a number: ";
    cin >> num;
    /*If the remainder of the given number is zero when divided b2, the number is even*/
    if(num % 2 == 0){
        cout<< num<< " is even" <<endl;
    }
    else{
        cout<< num<<" is odd" <<endl;
    }

    return 0;
}
