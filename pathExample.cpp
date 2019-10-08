#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::string path = "location.txt";
	std::ofstream newfile;
	newfile.open(path);
	newfile << "This is a dummy file. \n";
	newfile.close();

	std::ifstream fileReader;
	std::string line;

	fileReader.open(path);
	while (getline(fileReader, line)) {
		std::cout << line << std::endl;
	}
	fileReader.close();
}
