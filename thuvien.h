#pragma once
#include <iostream>
#include <string>
#include "book.h"

using namespace std;

class Thuvien {
public:
	Thuvien();
	Book list_book[100];
	int number_book = 0;
	int count = 0;
	void add_book();
	void show_list();
	void sapxep();
	void search();
	void delete_book();
};
 
