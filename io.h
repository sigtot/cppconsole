#pragma once
#include <iostream>
#include <string>
#include <fstream>

void writeLineToFile(std::string line, std::ofstream &file);

void writeInputToFile(std::ofstream &file);

void writeIncludes(std::ofstream &file);