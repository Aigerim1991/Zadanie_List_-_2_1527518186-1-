// ConsoleApplication72.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <iostream>
#include <clocale>
#include <ctime>


using namespace std;

void Line();

int main()
{
	/* 	������� 1: ��������� ����������� ����������. #include <list>	// ����������� ���������� �� stl
	����������� ��������� ����� "�������" �� ������ ����������� ������. */
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Line();
	cout << "����������� ��������� ����� \"�������\" �� ������ ����������� ������ ��������� ����������� ���������� #include <list>" << endl;
	Line();

	list <int> queue1;
	queue1.clear();

	list <int>::iterator queue1_Iter;
	int queueSize = 5;

	cout << "������ ������ ������� ������ " << queueSize << endl;
	Line();

	cout << "��������� �������: " << endl;

	for (int j = 0; j<queueSize; j++)
	{
		queue1.push_back(rand() % 20);
	}

	cout << "�������� �������: " << endl;

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "������ ������� �������: " << queue1.front() << endl;
	cout << "��������� ������� �������: " << queue1.back() << endl;
	cout << "���������� ��������� � �������: " << queue1.size() << endl;
	Line();

	Line();
	int queuePopNumber = 2;
	cout << "������� " << queuePopNumber << " ��������� �� �������: " << endl;

	for (int i = 0; i<queue1.size() - queuePopNumber; i++)
	{
		queue1.pop_front();
	}

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "������ ������� �������: " << queue1.front() << endl;
	cout << "��������� ������� �������: " << queue1.back() << endl;
	cout << "���������� ��������� � �������: " << queue1.size() << endl;
	Line();

	Line();
	cout << "��������� ������� � ����������� �������: " << endl;
	cout << "������ 3 ��������: " << endl;
	int number = 0;
	cout << "�������� �������: " << endl;

	for (int i = 0; i<3; i++)
	{
		if (queue1.size()<queueSize)
		{
			number = rand() % 20;
			cout << number << " ";
			queue1.push_back(number);
		}
		else
		{
			number = rand() % 20;
			cout << number << " ";
			queue1.pop_front();
			queue1.push_back(number);
		}
	}

	cout << endl;

	cout << "�������� �������: " << endl;

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "������ ������� �������: " << queue1.front() << endl;
	cout << "��������� ������� �������: " << queue1.back() << endl;
	cout << "���������� ��������� � �������: " << queue1.size() << endl;
	Line();

	Line();
	cout << "����������� ������ ������� �� 1" << endl;
	queueSize++;
	cout << "������ �������: " << queueSize << endl;
	cout << "��������� ������� � ���������� ��������" << endl;
	cout << "������ 3 ��������: " << endl;

	for (int i = 0; i<3; i++)
	{
		if (queue1.size()<queueSize)
		{
			number = rand() % 20;
			cout << number << " ";
			queue1.push_back(number);
		}
		else
		{
			number = rand() % 20;
			cout << number << " ";
			queue1.pop_front();
			queue1.push_back(number);
		}
	}

	cout << endl;

	cout << "�������� �������: " << endl;

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "������ ������� �������: " << queue1.front() << endl;
	cout << "��������� ������� �������: " << queue1.back() << endl;
	cout << "���������� ��������� � �������: " << queue1.size() << endl;
	Line();
	cout << endl;

	return 0;
}

void Line()
{
	cout << "---------------------------------------------------" << endl;
}