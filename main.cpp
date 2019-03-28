#include <iostream>
#include <string>
#include "person.cpp"

using namespace std;

int main(){
	
	person bob;
	
	bob.setName("Bob");
	bob.setAge(42);
	bob.setRace("Obnoxious");
	bob.setAlive("True");
	bob.setGender("Male");
	
	cout << " Name: " << bob.getName() << endl;
	cout << "Age: " << bob.getAge() << endl;
	
	return 0;
}