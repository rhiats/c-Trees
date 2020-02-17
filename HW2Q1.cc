/*
Rhia Singh 
February 17, 2020
CS 335: HW2: Q1: This global function can find the location of the first value, x, within the range [start, end).
If x is not found, then return end.
*/

#ifndef HW2Q1_CC
#define HW2Q1_CC

#include <iostream> //std::cout
#include <iterator> //std::iterator


template <typename Iterator, typename object>

/*Global function my_find within the typename(class) Iterator.
@param: Iterator start - start location of the search.
@param: Iterator end - iterator end location of the search.
@param: pass by constant reference the address of x. This the value my_find is looking for b/w interval[start,end).
@return: iterator - first location of x in the range (start,end]. 
*/
Iterator my_find(Iterator start, Iterator end, const object & x){
	//Search for x begins at start and extends up to but not including end.
	while( start != end ){
		//Return the iterator containing the first occurrence of x in the range.
		if ( *start == x ){
			return start;
		}
		start++;
	}

	//If x is not found, end is returned.
	return end;	//Should this be end-1?
}

#endif //HW2Q1_CC