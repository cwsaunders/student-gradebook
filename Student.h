#pragma once
#include <iostream>
#include <string>
#include <vector>

class Student
{
	std::string name;
	std::string nameTwo;
	std::string nameThree;
	int studentNameCount;
	int studentVectorCount;
	std::vector<double> student;
	std::vector<double> studentTwo;
	std::vector<double> studentThree;
public:
	Student();
	void getStudentName(std::string inputName);
	void setStudentName(std::string inputName);
	void setGrades();
	void getGrades();
	void displayStudents();
};

