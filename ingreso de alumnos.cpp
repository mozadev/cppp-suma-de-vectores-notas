// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;
void vector1(int *n, int*num1)
{
	cout << "numero 1 " << endl;
	for (int i = 0; i < *n; i++)
	{
		

		cout << "ingrese  " << i + 1 <<" digito: ";
		cin>> num1[i];
		if (num1[i] < 0 || num1[i]>9)
		{
			cout<< "ingrese  " << i + 1 << " digito: ";
			cin >> num1[i];
		}
	}
	
}

void salidavector1(int *n, int*num1)
{
	cout << "numero 1: " ;
	for (int i = 0; i < *n; i++)
		cout << " " << num1[i] <<" " ;

}


void vector2(int *n, int*num2)
{
	cout << "numero 2 " << endl;
	for (int i = 0; i < *n; i++)
	{


		cout << "ingrese  " << i + 1 << " digito: ";
		cin >> num2[i];
		if (num2[i] < 0 || num2[i]>9)
		{
			cout << "ingrese  " << i + 1 << " digito: ";
			cin >> num2[i];
		}
	}

}

void salidavector2(int *n, int*num2)
{
	cout << "numero 2: " ;
	for (int i = 0; i < *n; i++)
		cout << " " << num2[i] << " ";

}





void vectorsuma(int *n, int*num1, int *num2, int *num3)
{
	cout << "la suma es: ";
	for (int i = 0; i < *n; i++)
	{
		cout << num1[i] + num2[i] << " ";
		
	}
	

}




int main()
{


	//ingreso de numero de alumnos
	int n;
	cout << "ingrese numero de digitos de los numeros:   "; cin >> n;
	while (n <= 0 || n > 9 )
	{
		cout << "ingresa cantidad de alumnos "; cin >> n;
	}
	int*num1;
	num1 = new int[n];

	int*num2;
	num2 = new int[n];

	int*num3;
	num3 = new int[n];

	vector1(&n, num1);
	salidavector1(&n, num1);
	cout << endl;
	vector2(&n, num2);
	salidavector2(&n, num2);
	cout << endl;
	vectorsuma(&n, num1, num2, num3);
		_getch();
}