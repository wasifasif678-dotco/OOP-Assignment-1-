#include "Student.h"

Student::Student() {    //initialize defualt values
	name = "Danial";
	age = 19;
	rollno = 45;
	gpa = 3.9;
}

Student::Student(string n, int a, int rol,float g) {   //Initilize Default Arguments
	name = n;  
	age = a;
	rollno = rol;
	gpa = g;
}

Student::Student(string na, int ag, int roll, double gp) {  //Initialize Parameter Constructor
	name = na;
	age = ag;
	rollno = roll;
	gpa = gp;
}

void Student::show() {
	cout << "Name: " << name << ", Age: " << age << ", Rollno: " << rollno
		<< ", GPA: " << gpa << ", ";
	if (gpa >= 3.8 && gpa <= 4.0) {
		cout << "Grade: A" << endl;
	}
	else if (gpa >= 3.0 && gpa <= 3.8) {
		cout << "Grade: B" << endl;
	}
	else if (gpa >= 2.5 && gpa <= 3.0) {
		cout << "Grade: C" << endl;
	}
	else if (gpa >= 2.0 && gpa <= 2.5) {
		cout << "Grade: D" << endl;
	}
	else {
		cout << "Grade: F" << endl;
	}
}

Student::~Student() {
	cout << "Destructor deleted Object!" << endl;
}