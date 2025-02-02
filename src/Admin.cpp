#include "Admin.h"
#include<iostream>
#include"Employee.h"
class Admin : public Employee {
public:
	Admin() {

	}

	Admin(string name, string password, int id, double salary) : Employee(name, password, id, salary) {

	}
	void display() {
		Employee::display();

	}
	~Admin() {

	}

};

