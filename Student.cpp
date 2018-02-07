//Student.cpp
#include "Student.h"
#include <string> 
 

Student::Student(){};
Student::Student(double i, string n)
{
id = i;
name = n;
}

void Student:: setA(double i)
{
id = i;
}
double Student::getA()
{
return id;
}


void Student:: setB( string n)
{
name = n;

}
 string Student::getB()
{
return name;
}


