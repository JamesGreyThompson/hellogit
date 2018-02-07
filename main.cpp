//main.cpp
#include "Student.h"
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
Student st = {44, "Can"}; 
Student st2 = {23,"jhon"};
Student st3 = {418,"carl"};
Student st4 = {231,"james"};


vector <Student> s;
s.push_back(st2);
s.push_back(st);
s.push_back(st3);
s.push_back(st4);

for (int i = 0; i < s.size();i++)
{
cout << s[i].getA()<<" "<<
s[i].getB()<<endl;

}
return 0;
}

