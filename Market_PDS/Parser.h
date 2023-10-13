#pragma once
#include <iostream>
#include <vector>
#include "seller.h"
#include "customer.h"
#include "product.h"
#include <sstream>
using namespace std;
class parser
{

public:
	static vector<string> split(string line);
	static seller parserToSeller(string line);
	static customer parserToCustomer(string line);
	static product parserToProduct(string line);

};

