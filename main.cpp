#include <iostream>
#include "Student.h"
using namespace std;

int getInput()
{
    int input;

    cout << "1 - Enter new student data" << endl
         << "2 - View the data of all students." << endl
         << "3 - Search for a student using the student id" << endl
         << "4 - Exit" << endl
         << "-> ";


    cin >> input;

    return input;
}

int main() {

    int userInput;

    const int ONE = 1;
    const int TWO = 2;
    const int THREE = 3;
    const int FOUR = 4;

    userInput = getInput();

    while( userInput != FOUR )
    {

        if ( userInput == ONE )  { Student obj1; }
        else if ( userInput == TWO ) {  }


        userInput = getInput();

    }



    return 0;
}
