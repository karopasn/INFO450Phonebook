// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

const int maxLength = 10;
const int maxKey = 50;
int i = 0;

void addEntry(char myList[maxLength][2][maxKey]);
void displayList(char myList[maxLength][2][maxKey], int numEntered);

int main()
{
	char phoneBook[10][2][50];
	char option = 'A';
	do
	{
		cout << "-----------------------\nWhat do you want to do?\n-----------------------" << endl;
		cout << "[A]dd new entry -- Enter A\n[D]isplay entry -- Enter D\n[Q]uit -- Enter Q" << endl;
		cin >> option;

		if (option == 'A')
		{
			addEntry(phoneBook);
		}
		else if (option == 'D')
		{
			displayList(phoneBook, i);
		}
		else if (option == 'Q')
		{
			break;
		}
	} while (1 == 1);
	return 0;
}
void displayList(char myList[maxLength][2][maxKey], int numEntered)
{
	int i;
	for (i = 0; i < numEntered; i++)
	{
		cout << myList[i][0] << endl;
	}
}	
void addEntry(char myList[maxLength][2][maxKey])
{
	static int i = 0;

	if (i >= maxLength)
	{
		cout << "The phonebook is full. Cannot add anymore entries." << endl;
	}
	else
	{
		cin.clear();
		cin.ignore();
		cout << "Enter your full name please" << endl;
		gets_s(myList[i][0]);

		cout << "Please enter your phone number" << endl;
		gets_s(myList[i][1]);
		i++;
	}

}