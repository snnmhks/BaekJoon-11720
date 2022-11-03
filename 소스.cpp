#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int result = 0;
	int num = 0;
	cin >> num;
	int NumList = 0;
	cin >> NumList;

	for (int i = 0; i < num; i++)
	{
		result += NumList % (10);
		NumList = NumList/ 10;
	}
	cout << result;

}