/*
 * sethu.h
 *
 *  Created on: Sep 5, 2020
 *      Author: sethu
 */

#ifndef SETHU_H_
#define SETHU_H_
#include <string>
#include"link.h"

using namespace std;

class lru
{

private:
	int size;
	link l1;


public:
	map<string,node_t *> m1;
	lru();
	lru(int n);
	int read(string s1);
	void write(string s1,int a);

};



#endif /* SETHU_H_ */
