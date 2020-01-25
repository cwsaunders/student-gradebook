#include <iostream>
#include <string>
#include <vector>
#include "Gradebook.h"
#include "Student.h"

using namespace std;

string tempName;
Student s;

Gradebook::Gradebook()
{

}

void Gradebook::setName(string settingGradebookName)
{
	tempName = settingGradebookName;
}

void Gradebook::getName(string gradebookName)
{
	setName(gradebookName);
}

void Gradebook::displayName()
{
	cout << tempName;
}

void Gradebook::addStudent(string addStudentName)
{
	s.getStudentName(addStudentName);
	s.setGrades();
}
void Gradebook::grabStudentGrades()
{
	s.displayStudents();
}