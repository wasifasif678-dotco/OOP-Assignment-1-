#pragma once
#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int age, rollno;
	double gpa;

public:
	Student();     //Default Constructor
	Student(string n, int a = 15, int rol = 33, float g = 3.1);    //Declare Default argument
	Student(string na, int ag, int roll, double gp);  //Declare Parameter Constructor 
	~Student();      //Destructor
	void show();   //Function for Show
};
