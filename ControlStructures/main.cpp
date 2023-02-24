#include<iostream>
#include <conio.h>

/*
-------------------
���� (Loop) - ��� ����������� ���������, ������� ��������� ����������� ��������� ������������ ����� ����,
			  � ������, ��������� ���������� ������������� ����.
while - ���� � ������������;
do...while - ���� � ������������;
for - ���� �� �������� ����� ��������;
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
	cout << "������� ����������� �������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� ������� " << endl;
	}
#endif  TERMOMETR
#ifdef PRIMER1
	int number;
	int revers = 0;
	cout << "������� �����: "; cin >> number;
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
	int i = 0;	//������� �����
	int n;		//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello" << endl;
		//i++;
	}
#endif WHILE_1

#ifdef WHILE_2
	int n;		//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
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
		key = _getch(); // ������� _getch() ������� ������� ������� � 
		//� ���������� ASCII-��� ������� �������
		// ������� _getch()  � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;

	} while (true);
		//(int)key - ����� �������������� ����������  "key" � ��� ������
		//��� ���� ��� �� ������� ��� ������� �������.

#endif  MINUTE

#ifdef MINUTE2 
	int i = 0;
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
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
			cout << "�����" << endl;
		else if (a == 'a' || a == 'A')
			cout << "�����" << endl;
		else if (a == 'd' || a == 'D')
			cout << "������" << endl;
		else if (a == 's' || a == 'S')
			cout << "�����" << endl;
		else if ((int)a == 13)
			cout << "������" << endl;

	} while (true);
#endif MINUTE3
	
}