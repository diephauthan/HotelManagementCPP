/*
* File: employee.h
* Author: Hau Than Diep
* Date: 11/05/2024
* Description: This file is a Employee header file which manages employees of hotel
*/

#ifndef _EMPLOYEE_H
#define	_EMPLOYEE_H

#include<iostream>
#include<string>
#include<list>
using namespace std;

typedef enum Time {
	Morning,
	Afternoon,
	Evening,
	NoShift
};

typedef struct Shift {
	Time Mon[2];
	Time Tue[2];
	Time Wed[2];
	Time Thu[2];
	Time Fri[2];
};

/*
*Class: Employee
*Description: This class contains basic properties and methods of a Employee object
*/
class Employee {
private:
	int ID;
	string Name;
	string Title;
	int Phone;
	//Shift Shift;
public:
	Employee() {
		static int _ID = 1;
		this->ID = _ID;
		_ID++;

		this->Name = "";
		this->Title = "";
		this->Phone = 0;
	}

	void setID(int _ID);
	int getID();

	void setName(string _name);
	string getName();

	void setTitle(string _title);
	string getTitle();

	void setPhone(int _phone);
	int getPhone();

	void setData();
	void setShift(Shift _shift);
	Shift getShift();
};

/*
*Class: ManageEmployee
*Description: This class contains basic properties and methods that manage employees of hotel
*/
class ManagerEmployee {
private:
	list<Employee> employeelist ;

public:
	ManagerEmployee(){}

	void addEmployee();

	void editEmployee();

	void deleteEmployee();

	void ShiftSchedule();

	void SetTimePerDay(Time day[2]);

	void ListofEmployee();

	void TableShift();

	void menuManageEmployee();

};

#endif // !_EMPLOYEE_H_
