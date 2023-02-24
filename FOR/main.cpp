#include <iostream>
#include <Windows.h>

//#define TABLICA
//#define TABLICA_2

using namespace std;

void main()
{
	setlocale(LC_ALL, "");



#ifdef TABLICA
#ifdef 
	cout << "Таблица умножения на " << "/:n";
	for (int j = 0; j < 10; j++)
	{
		cout << i << "\t" << j << endl;
	}
}
#endif // Ta  
#endif  TABLICA

#ifdef TABLICA_2
for (int i = 0; i < 10; i++)
{
	for (int j = 1; j <= 10; j++)
	{

		cout.width(5);
		cout << i * j;
	}
	cout << endl;
}
#endif  TABLICA_2



}