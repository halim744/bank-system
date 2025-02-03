#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include<string>
#include"Employee.h"
using namespace std;

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

#endif // ADMIN_H
