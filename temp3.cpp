#include<iostream>
using namespace std;
class Geeks

{
	public:
	int id;
	
	Geeks()
	{
		cout << "Default constructor is called" << endl;
		id  = -1;
	}

	Geeks(int x)
	{
		cout << "Paramterized constructor is called" << endl;
		id  = x;
	}
};

int main(){
	Geeks obj1;
	cout << "Geek id is"<< obj1.id << endl;
	Geeks obj2(21);
	cout << "Geeks id is: " << obj2.id << endl;
	return 0;
}
