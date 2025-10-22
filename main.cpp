#include "Student.h"

int main() {
	Student s1;
	Student s2("Numan");
	Student s3("Ramish", 22, 26, 2.7);

	s1.show();
	s2.show();
	s3.show();

	return 0;
}
