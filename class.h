#include <string>

using namespace std;

class Person
{
protected:
	int age;
	string name;

public:
	Person(int a, string n): age(a), name(n) { }
	void Introduce ();
};

class Student : public Person
{
	int _class;
	
public:
	Student(int a,string n,int c) : Person(a,n)
	{
		_class=c;
	}
	void Introduce ();
}; 

class Worker : public Person
{
public:
	Worker(int a,string n) : Person(a,n) { }
	void Introduce ();
};   

