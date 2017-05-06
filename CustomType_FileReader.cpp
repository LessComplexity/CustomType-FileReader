#include "stdafx.h"
#include "CustomType_FileReader.h"

MyElement_Collection CustomType_FileReader(std::string& file_name)
{
	MyElement_Collection temp_data;

	// Load file streams
	std::ifstream file(file_name, std::ios::in | std::ios::binary);
	// Stop eating new lines in binary mode!!!
	file.unsetf(std::ios::skipws);

	// Open files and load their data
	if (file.is_open())
	{
		// Read data, copy from stream to type
		std::copy(std::istream_iterator<MyElement>(file), std::istream_iterator<MyElement>(), std::back_inserter(temp_data));
		
		// Close files
		file.close();
	}
	else
	{
		std::cout << "[-] Files not found";
		return MyElement_Collection();
	}

	return temp_data;
}
