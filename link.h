/*
  link.h
 *
 *  Created on: Sep 2, 2020
 *      Author: sethu
 */

#ifndef LINK_H_
#define LINK_H_

#include<string>

using namespace std;

typedef struct node node_t;

struct node
{
	int data;
    node_t *naddr;
    node_t *prevaddr;
    string  s1;

};


class link
{
public:
	node_t *head;
	node_t *tail;
	int     count;
public:
link();
node_t * link_insert(int a,string m);
string link_delete();
int  link_count();
void  link_read(node_t *n);



};





#endif /* LINK_H_ */
