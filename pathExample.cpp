#include <iostream>
#include <filesystem>
#include <fstream>
int main()
{
	std::ofstream newfile;
	newfile.open("location.txt");
	newfile << "This is a dummy file";
	newfile.close();

	std::filesystem::path relative = "location.txt";
	std::filesystem::path absolute = std::filesystem::absolute(relative);
	std::cout << "Absolute path for " << relative << " is " << absolute << '\n';

	std::ifstream fileReader;
	std::string line;

	fileReader.open(relative);
	while (!fileReader.eof()) {
		fileReader >> line;
		std::cout << line;
	}
	fileReader.close();


	fileReader.open(absolute);
	while (!fileReader.eof()) {
		fileReader >> line;
		std::cout << line;
	}
	fileReader.close();

}

