//BST.h
class BST{
	private:
		struct node{
			int key;
			node* left;
			node* right;
		};
	
	node* root; //top of the tree
	node* CreateLeaf(int key);
	node* ReturnNode(int key);
	node* ReturnNodePrivate(int key, node* Ptr);
	void AddLeafPrivate(int key, node* Ptr);
	void PrintInOrderPrivate(node* Ptr);
	void RemoveNodePrivate(int key, node* parent);
	void RemoveRootMatch();
	void RemoveMatch(node* parent, node* match, bool left);
	void RemoveSubtree(node* Ptr);
	int FindSmallestPrivate(node* Ptr);
		
	public:
		BST();
		~BST(); //when a BST goes out of scope
		void AddLeaf(int key);
		void PrintInOrder();
		void PrintChildren(int key);
		void RemoveNode(int key);
		int ReturnRootKey();
		int FindSmallest();
};
