#include <iostream>
using namespace std;
int main()
{
	//Create an array of strings
	string cars[5] = { "volvo", "BMW", "ford", "mazda ", "tesla" };

	// loop through strings 
	for (int i = 0; i < 5; i++) {
		cout << cars[i] << "\n";
	}
}