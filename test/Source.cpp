#include <iostream>

using namespace std;

class Reptile
{
public:
	int age;
	string name;
	float lenght;
	void Print()
	{
		cout << "NAME: " << name << "\nAGE: " << age << "\nLENGHT: "<< lenght << "\n<()()()()()()()()()()()()(  ')-<" << endl;
	}
};

int main()
{
	float cof = 1.5; // age lenght modifier 
	Reptile Snake;
	Snake.age = 10;
	Snake.name = "Anakonda_ANANANAKONDA";
	Snake.lenght = Snake.age*cof;
	Snake.Print();
	cout << "___________________________" << endl;
	return 0;
}