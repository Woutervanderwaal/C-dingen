#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
private:

	string _name;
	int _age;

public:

	Person(string name, int age){
		_name = name;
		_age = age;
	}

	string Name()
	{
		return _name;
	};

	int Age()
	{
		return _age;
	}
};

void Print(vector<Person> personList)
{
	for (vector<Person>::iterator it = personList.begin(); it != personList.end(); ++it)
	{ 
		cout << (*it).Name() << " " << (*it).Age() << endl;
	}
}

int main()
{
	cout << "Hello World!\n";

	int a = 3;
	Person p1("wouter", 16);
	
	string b = p1.Name();
	int c = p1.Age();

	Person p2("Henk", 73);
	string d = p2.Name();

	

	vector<Person> personList;
	personList.push_back(p1);
	personList.push_back(p2);

	Print(personList);
}