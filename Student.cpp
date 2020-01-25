#include <iostream>
#include <vector>
#include <string>
#include "Student.h"
#include "Gradebook.h"

using namespace std;

string name;
string nameTwo;
string nameThree;
int studentNameCount{ 0 }; //Used to decide if student is 1,2, or 3 (For string names)
int studentVectorCount{ 0 }; //Used to decide if student is 1,2, or 3 (For vectors)
vector<double> student;
vector<double> studentTwo;
vector<double> studentThree;
Student::Student()
{
	 
}

void Student::getStudentName(string inputName)
{
	setStudentName(inputName);
}

void Student::setStudentName(string inputName)
{
	++studentNameCount;
if (studentNameCount == 1)
{
	name = inputName;
}
if (studentNameCount == 2)
{
	nameTwo = inputName;
}
if (studentNameCount == 3)
{
	nameThree = inputName;
}
if (studentNameCount > 3)
{
	cout << "Error! Too many students entered." << endl;
}
}

void Student::setGrades()
{
	++studentVectorCount;
	if (studentVectorCount == 1)
	{
		int x;
		cout << "Enter how many grades you would like to enter for this student: (Must not exceed 5)" << endl; //Prompt
		cin >> x;
		cout << endl;
		while (x > 5 || cin.fail())
		{
			cout << "Error! Input is greater than 5! Enter a new number: " << endl; //Prompt
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> x;
			cout << endl;
		}
		for (int i = 0; i < x; i++)
		{
			double grade;
			cout << "Enter grade(s) one by one: " << endl; //Prompt
			cin >> grade;
			while (cin.fail())
			{
				cout << "Error! A grade must be a number! Enter a new number: " << endl; //Prompt
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> grade;
				cout << endl;
			}
			student.push_back(grade);
			cout << endl;
		}
	}
	if (studentVectorCount == 2)
	{
		int x;
		
		cout << "Enter how many grades you would like to enter for this student: (Must not exceed 5)" << endl; //Prompt
		cin >> x;
		cout << endl;
		while (x > 5 || cin.fail())
		{
			cout << "Error! Input is greater than 5! Enter a new number: " << endl; //Prompt
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> x;
			cout << endl;
		}
		for (int i = 0; i < x; i++)
		{
			double grade;
			cout << "Enter grade(s) one by one: " << endl; //Prompt
			cin >> grade;
			while (cin.fail())
			{
				cout << "Error! A grade must be a number! Enter a new number: " << endl; //Prompt
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> grade;
				cout << endl;
			}
			studentTwo.push_back(grade);
			cout << endl;
		}
	}
	if (studentVectorCount == 3)
	{
		int x;
		
		cout << "Enter how many grades you would like to enter for this student: (Must not exceed 5)" << endl; //Prompt
		cin >> x;
		cout << endl;
		while (x > 5 || cin.fail())
		{
			cout << "Error! Input is greater than 5! Enter a new number: " << endl; //Prompt
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> x;
			cout << endl;
		}
		for (int i = 0; i < x; i++)
		{
			double grade;
			cout << "Enter grade(s) one by one: " << endl; //Prompt
			cin >> grade;
			while (cin.fail())
			{
				cout << "Error! A grade must be a number! Enter a new number: " << endl; //Prompt
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> grade;
				cout << endl;
			}
			studentThree.push_back(grade);
			cout << endl;
		}
	}
}

void Student::getGrades()
{
	setGrades();
}

void Student::displayStudents()
{
	if (name != "")
	{
		cout << name << "'s grades:" << endl;
		for (int i = 0; i < student.size(); i++)
		{
			cout << student[i] << endl;
		}
	}
	if (nameTwo != "")
	{
		cout << nameTwo << "'s grades:" << endl;
		for (int i = 0; i < studentTwo.size(); i++)
		{
			cout << studentTwo[i] << endl;
		}
	}
	if (nameThree != "")
	{
		cout << nameThree << "'s grades:" << endl;
		for (int i = 0; i < studentThree.size(); i++)
		{
			cout << studentThree[i] << endl;
		}
	}
}
