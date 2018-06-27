#include<iostream>
using namespace std;

class Circle
{
	private:
		double radius;

	public:
		double compute_area(int r)
		{
		        radius = r;	
			return 3.14*radius*radius;
	}
};

int main()
{
	Circle obj;
	int r = 9;
	cout << "Area is:" << obj.compute_area(r);
	return 0;
}
	
