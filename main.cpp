#include"BSTS.h"
#include <iostream>
#include<fstream>

using namespace std;

int main() {
	
	
	Bsts B;
	Bsts C;
	Bsts D;
	Bsts E;
	int x;

	B.insert(30);
	B.insert(15);
	B.insert(4);
	B.insert(90);
	B.insert(77);
	B.insert(80);
	B.insert(100);
	B.insert(24);
	B.insert(1);

	cout << "PRINT BST: \n";
	B.display(B.root);
	cout << endl << endl;
	cout << "PRINT in descending order: \n";
	B.print(B.root);
	cout << endl << endl;
	cout << "BST or Not:\n ";
	if (isBST(B.root)) {
		cout << "It is a Binary Search Tree!\n";
	}
	else {
		cout << "It is not a Binary Search Tree!\n";
	}
	cout << endl;
	cout << "Enter number to print less than: \n ";
	cin >> x;
	cout << endl;
	B.printLessThan(B.root,x);
	cout << endl;

	cout << "\nCOPY BST\n";
	E = B;
	E.display(E.root);
	cout << endl;

	cout << "-----------------------------------------------\n";
	cout << "-----------------------------------------------\n";
	cout << "                  QUESTION 2\n";
	cout << "-----------------------------------------------\n";
	cout << "-----------------------------------------------\n";


	D.readfile(D);
	D.display(D.root);
	

	cout << endl;
	cout << "-----------------------------------------------\n";
	cout << "-----------------------------------------------\n";
	fstream file1;
	file1.open("bst.txt");
	E.writefile(file1, E.root);
	file1.close();





	C.readfile(C);
	C.display(C.root);
	cout << "\n-----------------------------------------------\n";
	cout << "-----------------------------------------------\n";

	

	return 0;
}