//<CSIS 112 Lab 3 Christian Saunders> -- This program takes user input about students.
//It uses this input to create a gradebook.
//CSIS 112-<002>

//Include statements
#include <iostream>
#include <string>
#include <vector>
#include "Gradebook.h"
#include "Student.h"

using namespace std;

//Global declarations

//Function prototypes

int main()
{

	cout << "Christian Saunders -- Lab 3" << endl << endl;
	//Variable declarations
	Gradebook g;
	string gradebookName;
	char userListInput;
	int switchInput = 0;
	string inputStudentName;

	//Program logic
	cout << "Enter gradebook name: " << endl; //Prompt
	cin >> gradebookName;
	cout << endl;
	cout << "Gradebook name: " << gradebookName << endl << endl;
	g.getName(gradebookName);

	while (1 == 1)
	{
		cout << "1. A to add" << endl << "2. L to list" << endl << "3. Q to quit" << endl; //Prompt
		cin >> userListInput;
		switch (userListInput) {
		case 'A': 
			cout << "Input name for student: " << endl; //Prompt
			cin >> inputStudentName;
			cout << endl;
			g.addStudent(inputStudentName);
			break;
		case 'L':
			cout << "Gradebook name: ";
			g.displayName();
			cout << endl << endl;
			g.grabStudentGrades();
			cout << endl;
			break;
		case 'Q': return 0;
		default:
			cout << "Error! Must enter A, L, or Q" << endl;
			break;
		}
	}

	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

