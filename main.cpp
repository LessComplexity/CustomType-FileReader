// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CustomType_FileReader.h"

void get_file() {
	// Get file and load it
	std::string file_name;
	std::cout << "Enter file name: ";
	std::cin >> file_name;
	MyElement_Collection data = CustomType_FileReader(file_name);

	// Print data
	for (MyElement e : data)
	{
		std::cout << e << std::endl;
	}
	
	// Stop application to view data
	int t;
	std::cin >> t;
}

int main()
{
	get_file();
    return 0;
}

