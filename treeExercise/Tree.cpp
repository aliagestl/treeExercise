#include "Tree.h"



Tree::Tree()
{
}

Tree::Tree(int lvls)
{
	levels = lvls;
	//int* tree[2^levels - 1];
	//tree[0] = 1

	//while !done
		//if leftneighbor(index) == -1
			//left child (2*index + 1) = 1
		//else
			//left child(2*index + 1) = leftneighbor + tree[index]


		//if rightneighbor(index) == -1
			//right child (2*index + 2) = 1
		//else
			//right child(2*index + 2) = rightneighbor + tree[index]
		
		//index+=2

	//if(index = 2^levels-1)
	//done

	//printTree
}

void Tree::printTree()
{
}


Tree::~Tree()
{
}

int Tree::parent(int index)
{
	//parent is math.floor((index-1)/2)
	return 0;
}

int Tree::leftNeighbor(int index)
{
	//if parent's parent exists, return parent's parent's left child
	//if doesnt exist return -1
	return 0;
}

int Tree::rightNeighbor(int index)
{
	//if parent's parent exists, return parent's parent's left child
	//if doesnt exist return -1
	return 0;
}
