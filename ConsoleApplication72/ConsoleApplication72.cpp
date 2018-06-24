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
	/* 	Задание 1: Используя стандартную реализацию. #include <list>	// Стандартная реализация из stl
	Реализовать шаблонный класс "Очередь" на основе двусвязного списка. */
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Line();
	cout << "Реализовать шаблонный класс \"Очередь\" на основе двусвязного списка используя стандартную реализацию #include <list>" << endl;
	Line();

	list <int> queue1;
	queue1.clear();

	list <int>::iterator queue1_Iter;
	int queueSize = 5;

	cout << "Задаем размер очереди равным " << queueSize << endl;
	Line();

	cout << "Заполняем очередь: " << endl;

	for (int j = 0; j<queueSize; j++)
	{
		queue1.push_back(rand() % 20);
	}

	cout << "Элементы очереди: " << endl;

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "Первый элемент очереди: " << queue1.front() << endl;
	cout << "Последний элемент очереди: " << queue1.back() << endl;
	cout << "Количество элементов в очереди: " << queue1.size() << endl;
	Line();

	Line();
	int queuePopNumber = 2;
	cout << "Удаляем " << queuePopNumber << " элементов из очереди: " << endl;

	for (int i = 0; i<queue1.size() - queuePopNumber; i++)
	{
		queue1.pop_front();
	}

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "Первый элемент очереди: " << queue1.front() << endl;
	cout << "Последний элемент очереди: " << queue1.back() << endl;
	cout << "Количество элементов в очереди: " << queue1.size() << endl;
	Line();

	Line();
	cout << "Заполняем очередь с превышением размера: " << endl;
	cout << "Вводим 3 элемента: " << endl;
	int number = 0;
	cout << "Вводимый элемент: " << endl;

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

	cout << "Элементы очереди: " << endl;

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "Первый элемент очереди: " << queue1.front() << endl;
	cout << "Последний элемент очереди: " << queue1.back() << endl;
	cout << "Количество элементов в очереди: " << queue1.size() << endl;
	Line();

	Line();
	cout << "Увеличиваем размер очереди на 1" << endl;
	queueSize++;
	cout << "Размер очереди: " << queueSize << endl;
	cout << "Заполняем очередь с измененным размером" << endl;
	cout << "Вводим 3 элемента: " << endl;

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

	cout << "Элементы очереди: " << endl;

	for (queue1_Iter = queue1.begin(); queue1_Iter != queue1.end(); queue1_Iter++)
	{
		cout << *queue1_Iter << " ";
	}

	cout << endl;

	cout << "Первый элемент очереди: " << queue1.front() << endl;
	cout << "Последний элемент очереди: " << queue1.back() << endl;
	cout << "Количество элементов в очереди: " << queue1.size() << endl;
	Line();
	cout << endl;

	return 0;
}

void Line()
{
	cout << "---------------------------------------------------" << endl;
}