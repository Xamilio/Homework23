#include <iostream>
using namespace std;

//1
//int main()
//{
//	int x;
//	int* px = &x;
//	cout << "Введите число ";
//  cin << *px;
//
//
//	if (*px >= 0)
//	{
//		cout << "Знак +";
//	}
//	else cout << "Знак -";
//	
//}


//2
//int main()
//{
//	int x;
//	int n;
//	int* px = &x;
//	int* pn = &n;
//	char* py;
//	cout << "Введите 1 число";
//	cin >> *px;
//	cout << "Введите 2 число";
//	cin >> *pn;
//	cout << "Введите знак";
//	cin >> *py;
//
//
//
//	if (py == "+")
//	{
//	 	cout << *px + *pn;
//	}
//	if (py == "-")
//	{
//		cout << *px - *pn;
//	}
//	if (py == "*")
//	{
//		cout << *px * *pn;
//	}
//	if (py == "/")
//	{
//		cout << *px / *pn;
//	}
//  
//}

int main()
{
	setlocale(LC_ALL, "");
	int x = 4;
	int* px = &x;
	int y = 8;
	int* py = &y;
	int u;
	int* pu = &u;




	cout << "До замены местами " << *px << " " << *py << "\n";

	*pu = *px;
	*px = *py;
	*py = *pu;

	cout << *px << " " << *py << "\n";

}
