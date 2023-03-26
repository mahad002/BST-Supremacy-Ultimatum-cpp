#include"BSTS.h"
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>

using namespace std;

int maxValue(struct node* ptr)
{
	if (ptr == NULL) {
		return -1;
	}
	int value = ptr->data;
	int leftMax = maxValue(ptr->left);
	int rightMax = maxValue(ptr->right);

	return max(value, max(leftMax, rightMax));
}

int minValue(struct node* ptr)
{
	if (ptr == NULL) {
		return -1;
	}
	int value = ptr->data;
	int leftMax = minValue(ptr->left);
	int rightMax = minValue(ptr->right);

	return min(value, min(leftMax, rightMax));
}

bool isBST(node* ptr) {
	if (!ptr) {
		return true;
	}
	if (ptr->left && maxValue(ptr->left) > ptr->data) {
		return false;
	}
	if (ptr->right && minValue(ptr->right) < ptr->data) {
		return false;
	}
	if (!isBST(ptr->left) || !isBST(ptr->right)) {
		return false;
	}
	return true;
}

Bsts::Bsts() {
	count = 0;
	root = NULL;
}

void Bsts::insert(int i) {
	node* newptr = new node;
	newptr->left = newptr->right = NULL;
	newptr->data = i;
	if (root == NULL) {
		root = newptr;
		count++;
		return;
	}
	node* curr = root;
	while (curr) {
		//cout<<curr->value<<endl;
		if (curr->data > i) {
			if (curr->left == NULL) {
				curr->left = newptr;
				count++;
				return;
			}
			else {
				curr = curr->left;
			}
		}
		else if (curr->data < i) {
			if (curr->right == NULL) {
				curr->right = newptr;
				count++;
				return;
			}
			else {
				curr = curr->right;
			}
		}
		else if (curr->data == i) {
			cout << "Duplicate\n";
			return;
		}
	}
}

void Bsts::print(node* temp) {
	if (!temp) return;

	//cout<<temp->value<<" ";

	print(temp->right);
	cout << " " << temp->data;
	print(temp->left);
	//cout << endl;

}

void Bsts::display(node* temp) {
	if (!temp) return;

	//cout<<temp->value<<" ";

	display(temp->left);
	cout << " " << temp->data;
	display(temp->right);
	//cout << endl;

}

void Bsts::printLessThan(struct node* ptr, int k) {
	if (ptr != NULL) {
		printLessThan(ptr->left, k);
		if (ptr->data < k)
			cout << " " << ptr->data;
		printLessThan(ptr->right, k);
	}
}

void Bsts::readfile(Bsts& b)
{
	fstream file;
	file.open("bst.txt",ios::in);
	if (!file) {
		cout << "No file!\n";
	}
	int bst;
	while (file >> bst)
	{
		b.insert(bst);
	}
	file.close();
}

void Bsts::writefile(fstream& file1, node* b) {
	if (!b) { return; }

		writefile(file1, b->left);
		file1 << b->data << endl;
		writefile(file1, b->right);

}

void Bsts::copy(node* A, node* B) {
	if (!B) return;
	if (!A) { A = new node; A->data = B->data; }

	A->left = new node;
	copy(A->left, B->left);
	A->data = B->data;
	A->right = new node;
	copy(A->right, B->right);
}

Bsts* Bsts::operator=(Bsts* B){
	copy(root, B->root);

	return B;
}

