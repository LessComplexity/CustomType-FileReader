// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "Encryptor.h"
#include "CustomType_FileReader.h"
/*
static DataBuffer default_conditions = DataBuffer();
void __init__()
{
	// Define default conditions
	std::string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.? ";
	std::copy(str.begin(), str.end(), std::back_inserter(default_conditions));
	// Sort functions
	std::sort(default_conditions.begin(), default_conditions.end());
}

void regular_encryption()
{
	std::string key_file, message_file;
	int is_encrypted;
	std::cout << "Enter key file name: ";
	std::cin >> key_file;
	std::cout << "Enter message file name: ";
	std::cin >> message_file;
	std::cout << "Is the message encrypted? (0 - no, 1 - yes): ";
	std::cin >> is_encrypted;

	Encryptor encryptor(key_file, message_file, (is_encrypted == 1) ? true : false);
	if (encryptor.error != true)
	{
		encryptor.print_data();
	}

	int t;
	std::cin >> t;
}

void bruteforce_finder()
{
	std::string message_file;
	std::cout << "Enter message file name: ";
	std::cin >> message_file;

	Encryptor encryptor(message_file, 3, default_conditions);
	if (encryptor.error != true)
	{
		encryptor.print_data();
	}

	int t;
	std::cin >> t;
}
*/
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

	int t;
	std::cin >> t;
}

int main()
{
	/*
	// Initialize variables
	__init__();

	int operation = 0;
	std::cout << "Choose operation(0 - basic, 1 - bruteforce): ";
	std::cin >> operation;

	if (operation == 0)
	{
		regular_encryption();
	}
	else if (operation == 1)
	{
		bruteforce_finder();
	}
	*/
	get_file();
    return 0;
}

