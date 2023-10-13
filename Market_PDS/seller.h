#pragma once
#include <iostream>
#include "person.h"
#include<iomanip>
#include<map>
using namespace std;
class seller : public person
{
	
	int ratcount = 0;
	float rate = 0;
public:

	seller(int id, string name, string email);
	static map <string, seller> allseller;
	static  map <string, seller>::iterator itSeller;
	void IncrementCountRate();
	void setrate(float rate);
	void setCountRate(int ratcount);
	int getratnum();
	float getRate();
	
};


