/*Rhia Singh
This creates an AVL tree that stores sequence_map objects. 
February 18, 2020
*/

#include "sequence_map.h"
#include <fstream> //std::ifstream
#include <iostream> //std::cout

//This needs to be a template file 
//Change name of the class to match 2a pseudocode

namespace HwTwo{

	template< class T>
	class Tree{
	public:
		
		//construct the tree.
		Tree(){
			root_ = nullptr;
		}
		
		/*
		//1 parameter constructor
		avlTree();

		//Big 5 - 1: Copy constructor
		avlTree(const avlTree& some_tree);
		//Big 5 - 2: Move Constructor
		avlTree(avlTree&& tree);
		//Big 5 - 3: Copy Assigntment
		avlTree& operator=(const avlTree& t);
		//Big 5 - 4: Move Assigntment
		avlTree& operator=(avlTree&& other_tree);
		//Big 5 - 5: Destructor
		~avlTree(); */
		//GetNextLineFromDatabaseFile(db_line)
		std::string GetEnzymeAcronym(std::string& db_line){
			std::string enzyme = "";
			for (int i = 0; i < db_line.length(); i++){
				if (db_line.at(i) == '/'){
					return enzyme;
				}else{
					enzyme += db_line.at(i);
				}
			}
			return enzyme;
		}
		std::string GetNextRecognitionSequence(std::string& db_line, std::string& enzyme){
			std::string rec_site = "";
			int j = enzyme.length();
			for (int i = j; i < db_line.length(); i++){
				if (db_line.at(i) == '/'){
					return rec_site;
				}else{
					enzyme += db_line.at(i);
				}
			}
			std::cout << db_line << std::endl;
			return rec_site;
		}
		

		//Read the input file and construct sequence_map objects
		const SequenceMap& readFile(std::string file_name){
			//Instantiate an ifstream object to store the data from the text file. 
			//Instantiate an string object to store each line in the file. 
			std::ifstream inFile;
			std::string heading;
			std::string data;

			//Open the txt file
			inFile.open(file_name);

			//If the inFile object does not open, then return 0 to terminate function.
			if(!inFile){SequenceMap();}

			//Store the heading of the file (first 27 lines of the file) in heading string.
			for(int i = 0; i < 27; i++){
				inFile >> heading;
			}
			Tree<SequenceMap> a_tree;
			std::string db_line;

			//Store the information about enzymes and restriction sites in data.
			// Read the file line-by-line:
			while (inFile >> db_line) {
				//std::cout << db_line << std::endl;
			 	// Get the first part of the line:
			 	std::string an_enz_acro = GetEnzymeAcronym(db_line);
			 	//std::cout << an_enz_acro << std::endl;
			 	std::string a_reco_seq;
			 	GetNextRecognitionSequence(db_line);
			 	//while (GetNextRecognitionSequence(db_line, a_rego_seq)){
					//SequenceMap new_sequence_map(a_reco_seq, an_enz_acro);
					//a_tree.insert(new_sequence_map);
			 	//} // End second while.
			} // End first while.
			inFile.close();
		}
	private:
		Tree<T> *root_;
	};//end avlTree
} // end namespace HwTwo