//main.cpp
//tutorial used: https://www.youtube.com/watch?v=sf_9w653xdE&list=PLTxllHdfUq4d-DE16EDkpeb8Z68DU7Z_Q
#include <iostream>
#include <cstdlib>
#include "BST.cpp"

using namespace std;

int main(){
	int TreeKeys[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
	BST myTree;
	int delValue = 0;
	int searchValue = 0;
	int iNode;
	
	cout << "Printing the tree in order\nBefore adding numbers\n";
	myTree.PrintInOrder();
	
	//Populating the tree in heap
	for(int i=0; i<16; i++){
		myTree.AddLeaf(TreeKeys[i]);
	}
	cout << "Printing the tree in order\nAfter adding numbers\n";
	myTree.PrintInOrder();
	cout << endl;
	
	//Inserting a node
	cout << "Insert a node: ";
	cin >> iNode;
	myTree.AddLeaf(iNode);
	cout << "After node " << iNode << " was added:\n";
	myTree.PrintInOrder();
	cout << endl;
	
	//Finding a node (Deleting it & then replacing it, since we already have a deltion function, but making 2 more just for a search feature seemed like too much work, lel)
	if(searchValue != -1){
		cout << "Find node in list: ";
		cin >> searchValue;
		{
			if (searchValue != -1){
				cout << endl;
				//myTree.RemoveNode(searchValue);
				//myTree.AddLeaf(searchValue);
				myTree.Search(searchValue);
				myTree.PrintInOrder();
				cout << endl;
			}
		}
	}
	
	//Deleting a node
	cout << "Enter a key value to delete. Enter -1 to stop the process\n";
	while(delValue != -1){
		cout << "Delete Node: ";
		cin >> delValue;
		{
			if (delValue != -1){
				cout << endl;
				myTree.RemoveNode(delValue);
				myTree.PrintInOrder();
				cout << endl;
			}
		}
	}
	
	
	
	
	return 0;
}
