#include "system.h"

void compileFileAndRun(std::string fileName){
	// Remove old output
	std::string rm("rm -f");
	std::string output("/tmp/tempBinary");
	std::string command = rm + ' ' + output;
	std::system(command.c_str());

	// Compile
	std::string compiler("g++");
	std::string flag("--std=c++11 -o");
	command = compiler + ' ' + flag + ' ' + output + ' ' + fileName;
	std::system(command.c_str());

	// Run
	if(std::ifstream(output))
		std::system(output.c_str());
	
}