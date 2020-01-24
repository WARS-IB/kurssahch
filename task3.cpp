#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Введите строку: " << endl;
	
	string a;
	getline(cin,a);
	cout << "Введите 3 символа"<<endl;
	char sym[3];
	for (int i = 0; i < 3; i++) cin >> sym[i];
	int n = 0;
	for (int i = 0; i < a.size() - 2; i++)
	{
		bool equal = true;
		for (int z = 0; z < 3; z++)
		{
			if (a[i+z] != sym[z])
			{
				equal = false;
				break;
			}
		}
		if (equal) n++;
	}
	cout << endl << n;
	return 0;
}
