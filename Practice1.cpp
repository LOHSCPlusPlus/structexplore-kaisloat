#include <iostream>
#include <string>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
};





int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.firstName = "Dorian";
  a.lastName = "Gray";
  Person b;
  b.firstName = "Charlie";
  b.lastName = "Brown";

  cout << "The name of Person A is " << a.firstName << " " << a.lastName << ", and the name of Person B is " << b.firstName << " " << b.lastName << "." << endl;





	// Add the prints here




	return 0;
}
