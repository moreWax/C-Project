#ifndef CS235_PROJECT_STUDENT_H
#define CS235_PROJECT_STUDENT_H

#include <iostream>
#include <string>
#include <fstream>
#include "Course.h"

class Student
{
private:
    std::string fullName;
    std::string id;
    int numCourses;

    Course *course;


public:
    Student();
    void Output();

    friend std::ostream& operator << ( std::ostream &out, const Student& s )
    {
        out << "Full Name: " << s.fullName << std::endl
            << "ID Number: " << s.id << std::endl
            << "Number of Courses: " << s.numCourses << std::endl;

        return out;
    }


};


#endif //CS235_PROJECT_STUDENT_H
