#include<iostream>
using namespace std;

class Geeks
{
	public :
	int id;
	
	~Geeks(){
		cout << "Destructor called for id: " << id << endl;
	}
};
int main(){
	Geeks obj1;
	Geeks obj2;
	int i = 0;
	obj1.id = 7;
	obj2.id = 0;
	while ( i < 5 ) {
		Geeks obj2;
		obj2.id = i;
		i++;
	}
}

		

