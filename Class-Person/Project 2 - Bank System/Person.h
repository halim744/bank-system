#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	int id;
	string name, password;
	double balance;
public:
	Person() {
		this->id = 0;
		this->balance = 0;
	}
	Person(int id , string name , string password , double balance) {
		this->id = id;
		this->name = name;
		this->password = password;
		this->balance = balance;
	}

	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		for (int i = 0; i < name.size(); i++) {
			if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z') {
				if (name.size() >= 5 && name.size() <= 20) {
					this->name = name;
				}
				else {
					cout << "The Name Length Must be More than 4 and Less than 21 \n";
					break;
				}
			}
			else {
				cout << "Name Must Be Characters \n";
				break;
			}
		}
		
		
	}
	void setPass(string password) {
		if (password.length() >= 8 && password.length() <= 20) {
			this->password = password;
		}
		else {
			cout << "The Password Length Must be More than 7 and Less than 21 \n";
		}
	} 

	/*virtual void setBal() = 0;*/

	int getId() {
		return this->id;
	}
	string getName() {
		return this->name;
	}
	string getPass() {
		return this->password;
	}
	double getBal() {
		return this->balance;
	}

	void display() {
		cout << "ID = " << id << endl;
		cout << "Name = " << name << endl;
		cout << "Password = " << password << endl;
		cout << "Balance = " << balance << endl;
	}

	
};

