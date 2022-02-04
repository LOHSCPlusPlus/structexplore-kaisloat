#include <iostream>
#include <string>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
  Person();
};
Person::Person() {
	firstName = "unknown";
	lastName = "unknown";
}




int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  cout << "The name of Person A is " << a.firstName << " " << a.lastName << endl;
  a.firstName = "Dorian";
  a.lastName = "Gray";
  Person b;
  cout << "The name of Person B is " << b.firstName << " " << b.lastName << endl;
  b.firstName = "Charlie";
  b.lastName = "Brown";

  cout << "The name of Person A is " << a.firstName << " " << a.lastName << ", and the name of Person B is " << b.firstName << " " << b.lastName << "." << endl;





	// Add the prints here




	return 0;
}
