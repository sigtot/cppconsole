#include "io.h"
#include "system.h"

int main(){
	// Create file object
	std::string fileName = "/tmp/tempFile.cpp";

	while(true){
		std::ofstream file(fileName);
		writeIncludes(file);
		writeLineToFile("using namespace std;\n", file);
		writeLineToFile("int main(){\n", file);
		writeInputToFile(file);
		writeLineToFile("return(0);}\n", file);

		std::cout << std::endl;

		file.close();
		compileFileAndRun(fileName);

		std::cout << std::endl;
	}

	return 0;
}