#pragma once
#include<iostream>

using namespace std;

struct node {
	int data;
	node* left;
	node* right;
	node() {
		data = -1;
		left = NULL;
		right = NULL;
	}
};

bool isBST(node* ptr);

class Bsts {
public:
	node* root;
	int count;


	Bsts();
	void insert(int);
	void print(node*);
	void display(node*);
	
	void printLessThan(node*, int);
	void readfile(Bsts&);
	void writefile(fstream& file, node*);
	void copy(node*, node*);
	Bsts* operator=(Bsts*);

	friend bool isBST(node*);
};



