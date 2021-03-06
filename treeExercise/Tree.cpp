#include "Tree.h"
#include <math.h>
#include <stdlib.h>

Tree::Tree()
{
}

Tree::Tree(int lvls)
{
	levels = lvls;
	int length = pow(2, levels) - 1;
	int* tree;
	tree = (int *)malloc(sizeof(int) * length);
	tree[0] = 1;

	bool loopDone;
	while (!loopDone)
	{
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
	}
		

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
	int pt = floor((index - 1) / 2);
	return pt;
}

int Tree::leftNeighbor(int index)
{
	//if parent exists, return parent's left child
	if (parent(index) > 0)
	{
		//left child is 2i + 1
		int nb = (2*parent(index) + 1);
		return nb;
	}
	//if doesnt exist return -1
	else return -1;
}

int Tree::rightNeighbor(int index)
{
	//if parent exists, return  parent's right child
	if (parent(index) > 0)
	{
		//right child is 2i + 2
		int nb = (2 * parent(index) + 1);
		return nb;
	}
	//if doesnt exist return -1
	else return 0;
}
