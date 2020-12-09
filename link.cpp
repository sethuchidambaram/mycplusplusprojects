/*
 * link.cpp
 *
 *  Created on: Sep 2, 2020
 *      Author: sethu
 */

#include<iostream>
#include<stdio.h>
#include<map>
#include"link.h"
using namespace std;

map<string,int> m2;
pair<string,int> p2("ram",31);
//m1.insert(p1);

link::link()
{
	this->head=NULL;
	this->tail=NULL;
	this->count=0;
}

node_t * link::link_insert(int a,string m)
{

	node_t *pn=new node_t[1];

	pn->data=a;
	pn->naddr=NULL;
	pn->s1=m;

	if( this->head == NULL || this -> tail == NULL)
	{
		this->head=pn;
		this->tail=pn;
		this->head->prevaddr=NULL;
		this->head->naddr=NULL;
	}
	else
	{
		this->tail->naddr=pn;
		pn->prevaddr=this->tail;
		this->tail=this->tail->naddr;
	}
	this->count++;
	return pn;


}

int  link::link_count()
{
	return this->count;
}


void  link::link_read(node_t *n)
{

	node_t *p1=n;
	node_t  *p0=p1->prevaddr;
	node_t  *p2=p1->naddr;

//	if(this->head == NULL && this->tail == NULL )
//	{
//		return -1;
//	}
//
//	else if(p1->prevaddr == NULL && p1->naddr == NULL )
//	{
//		return	p1->data;
//	}
//
//	else if( p2 == NULL  && p0 != NULL )
//	{
//		return p1->data;
//
//	}

	if( p0 == NULL &&  p2 != NULL )
	{
		this->head=p2;
		p2->prevaddr=NULL;


		this->tail->naddr=n;
		this->tail=n;
		this->tail->naddr=NULL;
	}
	else
	{
		p0->naddr=p2;
		p2->prevaddr=p0;
		this->tail->naddr=n;
		p1->prevaddr=this->tail;
		p1->naddr=NULL;
		this->tail=n;
	}

}

string  link::link_delete()
{
	node_t *pn;
	string s2;
	pn=this->head;
	s2=pn->s1;
	this->head=pn->naddr;
	cout << pn << endl;
	delete [] pn;
	this->count--;
	return s2;


}



