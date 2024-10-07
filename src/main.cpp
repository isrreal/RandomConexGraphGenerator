#include "Graph.hpp"
#include <iostream>


int main(int argc, char** argv) {
	if (argc == 3) {
		Graph* graph = new Graph(std::atoi(argv[1]), false, std::stof(argv[2])); 
		std::cout << *graph << std::endl;
		return 0;
	}
	else
		return -1;
}
