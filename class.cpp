#include "class.h"
#include <iostream>

void Person :: Introduce() {
	cout << " My name is " << name << ".I am " << age << "years old" << endl ;
}

void Student :: Introduce() {
	cout << " I am a Student. I am at Class " << _class << endl ; 
}   

void Worker :: Introduce() {
	cout << " I am a Worker. I have a job " << endl ;
}   
