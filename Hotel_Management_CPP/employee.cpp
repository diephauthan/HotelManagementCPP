/*
* File: employee.cpp
* Author: Hau Than Diep
* Date: 11/05/2024
* Description: This file contains all the functions/methods to manage employees of hotel
*/
#include"employee.h"


void Employee::setID(int _ID) {
	ID = _ID;
}

int Employee::getID() {
	return ID;
}

void Employee::setName(string _name) {
	Name = _name;
}

string Employee::getName() {
	return Name;
}

void Employee::setTitle(string _title) {
	Title = _title;
}

string Employee::getTitle() {
	return Title;
}

void Employee::setPhone(int _phone) {
	Phone = _phone;
}

int Employee::getPhone() {
	return Phone;
}

void Employee::setData() {
	cout << "Enter Name: ";
	cin.ignore();
	string _name;
	cin >> _name;
	setName(_name);

	cout << "Enter Phone Number: ";
	cin.ignore();
	int _phone;
	cin >> _phone;
	setPhone(_phone);

	cout << "Enter Work Position: ";
	cin.ignore();
	string _title;
	cin >> _title;
	setTitle(_title);
}


void Employee::setShift(Shift _shift) {

}

Shift Employee::getShift() {

}

void ManagerEmployee::addEmployee() {
	Employee NewEmployee;

	NewEmployee.setData();
	employeelist.push_back(NewEmployee);
}

void ManagerEmployee::editEmployee() {
	int ID_Input;
	string newposition;
	ListofEmployee();
	cout << "Enter the Employee ID to edit the information: ";
	while (!(cin >> ID_Input)) {
		cout << endl;
		cout << "Invalid choice. Please try again." << endl;
		cout << "Enter ID from List: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (list<Employee>::iterator it = employeelist.begin(); it != employeelist.end(); ++it) {
		if (it->getID() == ID_Input) {
			cout << "Employee is found" << endl;
			cout << "ID" << "\t\t\tName" << "\t\t\Title" << endl;
			cout << it->getID() << "\t\t\t" << it->getName() << "\t\t" << it->getTitle();
			cout << "\n-------------------------------------------------------------------------------------------------------" << endl;

			cout << "Enter the Employee Position: ";
			cin >> newposition;
			it->setTitle(newposition);
			cout << "The Title updated successfully!" << endl;
			cout << endl;
			return;
		}
	}

	cout << "No Employee with" << ID_Input << "found in the List" << endl;
}

void ManagerEmployee::deleteEmployee() {
	int ID_Input;
	ListofEmployee();
	cout << "Enter the Employee ID to delete Employee: ";
	while (!(cin >> ID_Input)) {
		cout << endl;
		cout << "Invalid choice. Please try again." << endl;
		cout << "Enter ID from List: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (list<Employee>::iterator it = employeelist.begin(); it != employeelist.end(); ++it) {
		if (it->getID() == ID_Input) {
			cout << "Employee is found" << endl;
			cout << "ID" << "\t\t\tName" << "\t\t\Title" << endl;
			cout << it->getID() << "\t\t\t" << it->getName() << "\t\t" << it->getTitle();
			cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
			employeelist.erase(it);
			cout << "The Employee" << ID_Input << "has been deleted sucessfully" << endl;
			cout << endl;
			return;
		}
	}

	cout << "No Employee with" << ID_Input << "found in the List" << endl;
}

void ManagerEmployee::ShiftSchedule() {

}

void ManagerEmployee::SetTimePerDay(Time day[2]) {

}

void ManagerEmployee::ListofEmployee() {
	int Oridinals = 0;
	if (employeelist.empty()) {
		cout << endl;
		cout << "The Employee List is empty." << endl;
		return;
	}
	cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\Employee List" << endl << endl;
	cout << "No" << "\t\tOridinals" << "\t\tID" << "\t\tName" << "\t\Phone Number" << "\t\Title" << endl;
	for (auto i : employeelist) {
		Oridinals++;
		cout << Oridinals << "\t\t" << i.getID() << "\t\t" << i.getName() << "\t\t" << i.getPhone() << "\t\t" << i.getTitle() << endl;
	}
	cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
}

void ManagerEmployee::TableShift() {

}

void ManagerEmployee::menuManageEmployee() {

}