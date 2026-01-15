#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
	string name;
	int age;
	string breed;
public:
	void setName(string dogname) {
		name = dogname;
	}
	void setAge(int dogage) {
		age = dogage;
	}
	void setBreed(string dogbreed)
	{
		breed = dogbreed;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	string getBreed()
	{
		return breed;
	}
	void bark()
	{
		cout << "Woof! Woof!" << endl;
	}
};

int main()
{
	Dog dog1;

	dog1.setName("Bruno");
	dog1.setAge(6);
	dog1.setBreed("Pit Bull");

	cout << "Dog Properties" << endl;
	cout << "Name: " << dog1.getName() << endl;
	cout << "Age: " << dog1.getAge() << endl;
	cout << "Breed: " << dog1.getBreed() << endl << endl;

	dog1.bark();

	return 0;
}
