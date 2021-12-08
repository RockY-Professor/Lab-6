#include <iostream>
using namespace std;
int main() {

	int i, n;
	cout << " Enter the Maximum value to Print Natural Numbers Reversed " << '\n';
	cin >> n;
	i = n;
	while (i >= 1) {

		cout << i << " ";
		i--;
	}

	return 0;
}
