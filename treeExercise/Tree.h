#pragma once
class Tree
{
public:
	Tree();
	Tree(int lvls);
	void printTree();
	~Tree();
private:
	int levels;
	int parent(int index);
	int leftNeighbor(int index);
	int rightNeighbor(int index);
	int index = 0;
};

