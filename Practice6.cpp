#include <iostream>
#include <string>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
  Person();
  Person(string firstNameGiven, string lastNameGiven);
};
Person::Person() {
	firstName = "unknown";
	lastName = "unknown";
}
Person::Person(string firstNameGiven, string lastNameGiven){
  firstName = firstNameGiven;
  lastName = lastNameGiven;
}

void printPerson(Person n, string flag){
  cout << "The name of Person " << flag << " is " << n.firstName << " " << n.lastName << endl;
}

void changeLastName(Person &reference, string lastName){
  reference.lastName = lastName;
}



int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.firstName = "Dorian";
  a.lastName = "Gray";
  Person b("Linus", "Van Pelt");
  

  printPerson(a, "a");
  printPerson(b, "b");


  changeLastName(b, "Torvalds");
  printPerson(b, "b");
	return 0;
}
