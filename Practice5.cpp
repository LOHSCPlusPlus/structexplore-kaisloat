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




int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.firstName = "Dorian";
  a.lastName = "Gray";
  Person b("Linus", "Van Pelt");
  
  /*
  cout << "The name of Person A is " << a.firstName << " " << a.lastName << ", and the name of Person B is " << b.firstName << " " << b.lastName << "." << endl;
  */

  printPerson(a, "a");
  printPerson(b, "b");


	return 0;
}
