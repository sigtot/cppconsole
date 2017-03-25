#include "io.h"

void writeLineToFile(std::string line, std::ofstream &file){
	file << line;
}

void writeInputToFile(std::ofstream &file){
	int lineNumber = 1;
	std::string line;
	std::cout << lineNumber << " ";
	while(std::getline(std::cin, line)){
		if(line.empty()) break;
		writeLineToFile('\t' + line + '\n', file);
		std::cout << ++lineNumber << " ";
	}
}

void writeIncludes(std::ofstream &file){
	std::ifstream includesFile("includes");
	for(std::string line; std::getline(includesFile, line);){
		file << line << std::endl;
	}
}