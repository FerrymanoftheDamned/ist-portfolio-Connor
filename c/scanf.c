#include <stdio.h>

int main() {
	int age;
	float gpa;
	char grade;

	printf("type age: ");
	scanf(" %i", &age);

	printf("type gpa: ");
	scanf(" %f", &gpa);

	printf("type letter grade: ");
	scanf(" %c", &grade);

	printf("Age: %i, Gpa: %.1f, Grade: %c \n", age, gpa, grade);

	return 0;
}
