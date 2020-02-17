# c-Trees
Author: Blake (Ralph) Vente 
You will use this exact Makefile for your Homework 2. If you need to change it, please consult with me first.

You can compile everything by typing 

make clean
make all

You can compile one program individually by just typing make <Program Name>, for example

make query_tree

By typing 

make clean

You delete all .o files and executables.

--Note that file avl_tree_modified.h is not provided.

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Added: Rhia Singh
1. Pt1: To compile, pass 2 iterators to denotate the range of search. [start, end). Also, pass by constant reference the value that is needs to be found within the [start,end) range. If value is found, then the iterator to its location is returned and if it is not found, then the iterator to end is returned. 