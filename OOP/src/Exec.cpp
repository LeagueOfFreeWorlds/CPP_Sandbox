/*
 * Exec.cpp
 *
 *  Created on: Aug 16, 2021
 *      Author: nathan-host
 */
/*
 * Exec.cpp
 *
 *  Created on: Aug 16, 2021
 *      Author: nathan-host
 */
#include <iostream>
using namespace std;

class AbstractEmployee{
	virtual void AskForPromotion() = 0;

};

class Employee:AbstractEmployee{
	// Private encapsulation:
private:
	string Name;
	string Company;
	int Age;
	// Public (visible to the entire program:
public:
	void setName(string name){ // setter
		Name = name;
	}
	string getName(){ // getter
		return Name;
	}
	void setCompany (string company){
		Company = company;
	}
	string setCompany(){
		return Company;
	}
	void setAge(int age){
		Age = age;
	}
	int getAge(){
		return Age;
	}

	void introduceYourself(){
		cout << "Name - " << Name << endl;
		cout << "Company " << Company << endl;
		cout << "Age - " << Age << endl;
	}
public:
	Employee(string name, string company, int age){
		Name  = name;
		Company = company;
		Age = age;
	}
	virtual void AskForPromotion(){
		if(Age > 30){
			cout << Name << " Got promoted" << endl;

		} else{
			cout << Name << " Sorry, NO promotion for you! " << endl;
		}
	}
};
int main(){
	Employee employee1 = Employee("Nathan", "Autonomous Research Corporation", 26);
	Employee employee2 = Employee("Dima", "Thunder Aerospace", 27);
	employee1.AskForPromotion();
	employee2.AskForPromotion();
}


