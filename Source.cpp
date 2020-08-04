#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

	//явное указание файла
	/*
	ifstream csvFile;
	csvFile.open("test.csv");
	//csvFile.open("lng.csv");

	while (csvFile.good()) {
		string line;
		getline(csvFile, line, ';');
		cout << line + ",";
	} 
	*/
	//„ерез аргументы main
	
	if (1 < argc) {
		for(int i = 0; i < argc; i++)
		std::cout << argv[i] << std::endl;
	}

	ifstream csvFile;

	csvFile.open(argv[1]);
	while (csvFile.good()) {
		string line;
		getline(csvFile, line, ';');
		cout << line + ",";
	} 
} 