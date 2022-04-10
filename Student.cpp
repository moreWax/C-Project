#include "Student.h"
#include <iostream>
#include <exception>


void Student::Output()
{
    std::ofstream outFS;
    outFS.open("output.txt");

    outFS << "Full Name: " << fullName << std::endl
          << "ID Number: " << id << std::endl
          << "Number of Courses: " << numCourses << std::endl;

    outFS.close();

}


Student::Student() {


    std::cout << "Full Name: ";
    std::cin.ignore();
    std::getline(std::cin, fullName);

    std::cout << "ID Number: ";

    std::getline(std::cin, id);

    std::cout << "Number of Courses: ";
    std::cin >> numCourses;
    std::cout << std::endl;
    Output();

    for ( int i = 0; i < numCourses; i++ ) {
            course[i] = Course();
    }
}
