#include "class.h"

int main() {
	Person person(19, "tzz");
	person.Introduce();
	Student student(19,"tzz",7);
	student.Introduce(); 
	Worker worker(19,"tzz");
	worker.Introduce();  
	return 0;
}
