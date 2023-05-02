#include <iostream>

using namespace std;

int Max(int x, int y)
{
	return (x > y) ? y : x;
}
int Min(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int x, y, resault;
	cin >> x >> y;
	resault = max(x, y);
	resault = min(x, y);
	cout << "resault = " << resault << endl;
	return 0;
}