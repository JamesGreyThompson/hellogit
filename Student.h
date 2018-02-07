//Student.h

#ifndef STUDENT_H
#define STUDENT_H
#include <string> 
using namespace std; 


class Student {
private:

double id;
string name;

public:
  Student ();
  Student (double i , string n);

void setA(double i);

double getA();

void setB(string n);

string getB();

};
#endif

