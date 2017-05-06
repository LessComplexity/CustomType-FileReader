#pragma once

#include <cstdint>
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <bitset>

#pragma pack(1)
/*
 * This is the element we want to define our data with, if you don't know what pack(1) means
 * then google it, it's part of the proccess :)
 */ 
struct MyElement {
	uint8_t code;
	uint8_t val;
	int32_t len;
};

#pragma pack()

// Define vector to stream data in from file
using MyElement_Collection = std::vector<MyElement>;

/*
 * Overload the operator >> for input streams, so that your element can be used in certain streaming
 * functions.
 */
inline std::istream& operator >> (std::istream& stream, MyElement& data)
{
	stream.read((char *)&data, sizeof(MyElement));
	return stream;
}

// I redifined this operator just to show the output the way I want it to
inline std::ostream& operator<<(std::ostream& os, MyElement& obj)
{
	// read obj to stream
	os << "\tOper - " << int(obj.code) << "\tParam - " << int(obj.val) << "\tOp Length - " << obj.len << ";";
	return os;
}

/*
 * The function that loads the data you your type
 */
MyElement_Collection CustomType_FileReader(std::string& file_name);
