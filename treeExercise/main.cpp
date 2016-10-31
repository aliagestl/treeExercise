#include "Tree.h"
#include <iostream>

int main() {
	int levels;
	bool goodInput = false;;
	while (!goodInput)
	{
		std::cout << "How many levels?" << std::endl;
		std::cin >> levels;
	}
	

	Tree t = Tree(levels);
	return 0;
}