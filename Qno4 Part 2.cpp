#include <iostream>
using namespace std;
int main() {

	int i, n;
	cout << " Enter the Maximum value to Print Natural Numbers Reversed " << '\n';
	cin >> n;
	i = n;
	
	do {

		cout << i << " ";
		i--;
	} while (i >= 1);

	return 0;
}
