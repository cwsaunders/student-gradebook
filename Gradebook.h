#pragma once
#include <iostream>
#include <string>
#include <vector>

class Gradebook
{
	std::string tempName;
public:
	Gradebook();
	void setName(std::string);
	void getName(std::string);
	void displayName();
	void addStudent(std::string);
	void grabStudentGrades();

};