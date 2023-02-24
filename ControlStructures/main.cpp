#include<iostream>
#include <conio.h>

/*
-------------------
Цикл (Loop) - это управляющая структура, которая позволяет многократно выполнить определенную часть кода,
			  а именно, зациклить выполнение определенного кода.
while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций;
-------------------
*/
//#define TERMOMETR
//#define WHILE_1
//#define WHILE_2
//#define PRIMER1
//#define MINUTE
//#define MINUTE2
//#define MINUTE3
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
#ifdef TERMOMETR
	cout << "Hello Controls!" << endl;
	int t;
	cout << "Введите температуру воздуха: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно " << endl;
	}
#endif  TERMOMETR
#ifdef PRIMER1
	int number;
	int revers = 0;
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		revers *= 10;
		revers += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << revers << endl;
#endif PRIMER1

#ifdef WHILE_1
	int i = 0;	//Счетчик цикла
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello" << endl;
		//i++;
	}
#endif WHILE_1

#ifdef WHILE_2
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif  WHILE_2


#ifdef MINUTE
	char key;
	do
	{
		key = _getch(); // функция _getch() ожидает нажатия клавиши б 
		//и возвращает ASCII-код нажатой клавиши
		// функция _getch()  в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;

	} while (true);
		//(int)key - явное преобразование переменной  "key" в тип данных
		//для того что бы увидеть код нажатой клавиши.

#endif  MINUTE

#ifdef MINUTE2 
	int i = 0;
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << "Hello" << endl;
	}
#endif MINUTE2 


#ifdef MINUTE3
	char a;
	do
	{
		a = _getch();
		if (a == 'w' || a == 'W')
			cout << "Вперёд" << endl;
		else if (a == 'a' || a == 'A')
			cout << "Влево" << endl;
		else if (a == 'd' || a == 'D')
			cout << "Вправо" << endl;
		else if (a == 's' || a == 'S')
			cout << "Назад" << endl;
		else if ((int)a == 13)
			cout << "Прыжок" << endl;

	} while (true);
#endif MINUTE3
	
}