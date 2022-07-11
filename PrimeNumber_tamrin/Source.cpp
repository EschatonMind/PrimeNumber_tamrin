#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i;
	for ( i = 2; i <= n-1; i++)
	{
		if (n%i==0)
		{
			cout << n << " Is Not a Prime Num " << endl;
			break;
		}
	}
	if (i==n)
	{
		cout << n << " Is a Prime Num " << endl;
	}

	return 0;
}