/*
 * sethu.cpp
 *
 *  Created on: Sep 4, 2020
 *      Author: sethu
 */
#include<map>
#include<iostream>
#include<iterator>
#include"lru.h"
#include"link.h"

using namespace std;
void map_delete(lru *L1,node_t *m);


lru::lru()
{
	this->size=10;
}


lru::lru(int n)
{
	this->size=n;

}

int lru::read(string s1)
{

	node_t *n;
	n=m1[s1];


	if( n == NULL )
	{
		return -1;
	}

	else
	{
		 l1.link_read(n);
		 return  n->data;
	}

}

void lru::write(string s1,int a)
{
	node_t * n1;
	string   t1;

	n1=this->l1.link_insert(a,s1);
	pair<string,node_t *> p2(s1,n1);
	m1.insert(p2);

	if( l1.link_count() > size )
	{
		t1=this->l1.link_delete();
		this->m1.erase(t1);
	}

}

void map_delete(lru *L1,node_t *m)
{

	cout <<  "map_delete has been called" <<  endl;
	cout << m <<endl;


	map<string,node_t *>::iterator  it3;

	it3=L1->m1.begin();
	while( it3 != L1->m1.end())
	{
		cout << it3->second << endl;
		if( it3->second == m )
		{
			cout << " the value has been matched" << endl;
 			cout << it3->first << endl;
			L1->m1.erase(it3->first);
			return;
		}

		it3++;
	}


}






















