//
// Created by Tom Whitworth on 4/9/22.
//

#ifndef CS235_PROJECT_COURSE_H
#define CS235_PROJECT_COURSE_H

#include <iostream>
#include <string>

class Course
{
private:
    std::string courseCode;
    std::string title;
    double grade{};
    int courseCredits = 0;

public:
    Course();
    void Output();


    friend std::ostream &operator << ( std::ostream &out, const Course &c )
    {
        out << "Course Code: " << c.courseCode << std::endl
            << "Title: " << c.title << std::endl
            << "Course Grade: " << c.grade << std::endl;

        return out;
    }


};


#endif //CS235_PROJECT_COURSE_H
