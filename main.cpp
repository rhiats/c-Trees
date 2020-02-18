/*
Rhia Singh 
Use this file to test implementation in HW2Q1.cc
*/

//#include "HW2Q1.cc"
#include "sequence_map.h"
#include <iostream> //std::cout
#include <iterator> //std::iterator
#include <vector> // std::vector 
#include <fstream> //std::ifstream
using namespace HwTwo;
int main(){
	/*
	TEST PT 1 of HW
	//Create a vector, v, that holds integers.
	std::vector<int> v;

	//Instantiate an ifstream object to store the data from the text file. 
	//Instantiate an int object to store the value that is being searched for. 
	std::ifstream inFile;
	int value;

	//Open the txt file: "numbers.txt."
	inFile.open("numbers.txt");

	//If the inFile object does not open, then return 0.
	if(!inFile){return 0;}

	//Push each data elemetent from inFile to value and then push_back value to vector, v.
	while (inFile >> value){
		v.push_back(value);
	}
	inFile.close();

	//Instantiate and initialize start and end objects to store the begining and ending location of the vector. 
	std::vector<int>::iterator start = v.begin();
	std::vector<int>::iterator end = v.end();
	int val = 1;

	//Instantiate val_loc to store the location of value.  
	std::vector<int>::iterator val_loc = my_find(start,end,val);

	//Instantiate val_loc t store the location of value.
	*val_loc = 5000;

	std::ofstream outFile;
	outFile.open("numbers.txt");
	for (int i = 0; i < v.size(); i++) {
		outFile << v.at(i) << ' ';
	}
	*/

	std::string rec_site = "AarI";
	std::string restriction_enzyme = "CACCTGCNNNN'NNNN";
	SequenceMap enz_a(rec_site,restriction_enzyme); 

	std::string rs = "AarI";
	std::string re = "'NNNNNNNNGCAGGTG";
	SequenceMap enz_b(rs,re);

	/*std::cout << "Enzyme A: "  << enz_a << std::endl;

	std::cout << "Enzyme B: " << enz_b << std::endl;*/

	//std::cout << enz_a.operator<(enz_b) << std::endl;

	enz_a.Merge(enz_b);

	std::cout << "After merge: " << std::endl;

	std::cout << "Enzyme A: "  << enz_a << std::endl;

	std::cout << "Enzyme B: " << enz_b << std::endl;

}