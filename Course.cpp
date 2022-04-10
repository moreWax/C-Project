#include "Course.h"
#include <iostream>
#include <fstream>

Course::Course()
{
    std::cout << "Course Code: ";
    std::cin.ignore();
    std::getline( std::cin, courseCode );

    std::cout << "Title: ";
    std::cin.ignore();
    std::getline( std::cin, title );

    std::cout << "Course Grade: ";
    std::cin >> grade;

    std::cout << "Number of Course Credits: ";
    std::cin >> courseCredits;

    Output();

    std::cout << std::endl;
}

void Course::Output()
{
    std::ofstream outFS;
    outFS.open("output.txt");
    if ( !outFS )
    {
        throw std::runtime_error("Unable to open output.txt");
    }

    outFS << "Course Code: " << courseCode << std::endl
          << "Title: " << title << std::endl
          << "Course Grade: " << grade << std::endl;

    outFS.close();
}
