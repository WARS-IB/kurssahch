#include<iostream>
#include<string>
using namespace std;

struct Product
{
	string product;
	int plan;
	int fact;
	int precent;
};

int main()
{
	setlocale(0, "ru");
	
	Product* arr = new Product[6];
	arr[5].product = "Итого";
	arr[5].plan = 0;
	arr[5].fact = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите название изделия " << i+1 << endl;
		cin >> arr[i].product;
		cout << "Введите план производства продукта\n";
		cin >> arr[i].plan;
		arr[5].plan += arr[i].plan;
		cout << "Введите фактическое количество\n";
		cin >> arr[i].fact;
		arr[5].fact += arr[i].fact;
	}
	cout << "   Изделие                    план производства продукта                    фактическое количество                    Процент\n";
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i].product << "                                        " << arr[i].plan << "                                        " << arr[i].fact << "                                        " << double(arr[i].fact) / (double)arr[i].plan * 100.0 <<endl;
	}
	
	delete [] arr;
	return 0;
}