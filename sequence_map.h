/*
Rhia Singh 
A class object named SequenceMap.
February 18, 2020
*/

#include <string> //std::string
#include <vector> //std::vector
#include <iostream> //std::cout

//namespace HwTwo{
class SequenceMap{
public:
	// Big 5 - 1: Copy constructor - use default
	SequenceMap(const SequenceMap& seqMap) = default;
	// Big 5 - 2: Move Constructor - use default
	SequenceMap(SequenceMap&& sqMp) = default;
	// Big 5 - 3: Copy Assignment - use default
	SequenceMap& operator=(const SequenceMap& seq) = default;
	// Big 5 - 4: Move assignment - use default
	SequenceMap& operator=(SequenceMap&& sqMap) = default;
	// Big 5 - 5: Destructor - use default
	~SequenceMap() = default;

	
	// 2 parameter constructor
	//@param a_rec_seq = pass by constant lvalue reference the recognition site of an enzyme.
	//@param an_enz_acro = pass by constant reference the acronym of the enzyme that cuts @ the a_rec_seq.
	//@return SequenceMap object that contains the paramters in its data. 
	SequenceMap(const std::string & a_rec_seq, const std::string & an_enz_acro){
		recognition_sequence_ = a_rec_seq;
		enzyme_acronyms_.push_back(an_enz_acro);
	}

	//Accessor function operator< overloads the < operator.
	//@param SequenceMap&rhs = pass by constant lvalue reference to the object rhs.
	//@return true if the recognition_sequence is longer than the recognition_sequence passed in the parameter. 
	// @return - returns 0 if the Enzymes are the same (compares whether the first letter is upper case and the length of the string)
	bool operator<(const SequenceMap &rhs) const{
		return this->recognition_sequence_ < rhs.recognition_sequence_;
	}

	//Overload the operator<< for SequenceMap for printing out the sequence.
	//@param &out = pass by constant lvalue reference the output stream object out.
	//@param &some_Map = pass by constant lvalue reference the some_Map object.
	//@return the output object that contains the private data members of some_Map.
	friend std::ostream &operator<<(std::ostream &out, const SequenceMap &some_Map){
	    for (int i = 0; i < some_Map.enzyme_acronyms_.size(); i++){
	    	out << some_Map.enzyme_acronyms_[i];
	    }
	    return out;
	}

	//Modify the current objects's enzyme with other_sequence's enzyme. This does not modify the other sequence's enzyme.
	//@param &other_sequence = pass by constant lvalue reference another sequenceMap object that is assumed to return 0 in the operator< function.
	//@return vector with the restriction sites from other_sequence. The "other_sequence" object is not modified.
	void Merge(const SequenceMap &other_sequence){
		for (int i = 0; i < other_sequence.enzyme_acronyms_.size(); i++){
			enzyme_acronyms_.push_back(" ");
			enzyme_acronyms_.push_back(other_sequence.enzyme_acronyms_[i]);
		}
	}
private:
	std::string recognition_sequence_ ;
	std::vector<std::string> enzyme_acronyms_;
};
//}