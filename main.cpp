//============================================================================
// Name        : LRUcache.cpp
// Author      : sethu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
#include "link.h"
#include "lru.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	//	a=read("ramu");
	//	cout << a << endl;
	int a;
	lru l1(10);

	l1.write("ramu",10);
	l1.write("somu",20);
	l1.write("pickle",30);
	l1.write("vada",40);
	l1.write("kesari",50);
	l1.write("pongal",60);
	l1.write("kithadi",70);
	l1.write("poori",80);
	l1.write("kilangu",90);
	l1.write("chapathi",100);

	a=l1.read("ramu");
	a=l1.read("somu");
//	a=l1.read("pickel");
//
//
//
	l1.write("soya",110);
	l1.write("ladu",120);
//	l1.write("sonbapodi",130);
//	l1.write("basundhi",140);

	a=l1.read("ramu");
	if( a != 10)
	{
		cout << "failure\ttc1\\t10\t" << a << endl;
	}

	a=l1.read("somu");
	if( a != 20)
	{
		cout << "failure\ttc1\t20\t" << a << endl;
	}
	a=l1.read("pickle");
	if( a != 30)
	{
		cout << "failure\ttc1\t30\t" << a << endl;
	}
	a=l1.read("vada");
	if( a != 40)
	{
		cout << "failure\ttc1\t40\t" << a << endl;
	}

	a=l1.read("kesari");
	if( a != 50)
	{
		cout << "failure\ttc1\t50\t" << a << endl;
	}
	a=l1.read("pongal");
	if( a != 60)
	{
		cout << "failure\ttc1\t60\t" << a << endl;
	}
	a=l1.read("kithadi");
	if( a != 70)
	{
		cout << "failure\ttc1\t70\t" << a << endl;
	}
	a=l1.read("poori");
	if( a != 80)
	{
		cout << "failure\ttc1\t80\t" << a << endl;
	}
	a=l1.read("kilangu");
	if( a != 90)
	{
		cout << "failure\ttc1\t90\t" << a << endl;
	}
	a=l1.read("chapathi");
	if( a != 100)
	{
		cout << "failure\ttc1\t100\t" << a << endl;
	}


	cout << "this is the end" << endl;

}

















































































































































































































































































































































































































































