# CSE310_Project1_Kaodilichi_Nwuda

🛑Before beginning, make sure you read and understand this page!

This programming project will be graded on general.asu.edu, a Linux machine. Using GitHub Classroom, you will create a repository in the CSE 310 Github organization (Links to an external site.)Links to an external site.. Using this repository, write and push the necessary code to complete your programming project. You will perform modular design and provide a Makefile to compile the various modules to generate the executable file named run.

You need to have a module that provides required services such as command line interpretation.
You need to have a module that implements the min-heap data structure.
You are required to complete this project using the C++ programming language.
You are not allowed to use any other programming languages.
Your program should be based on the g++ compiler on general.asu.edu.
You will submit your code by committing and pushing to Github, see Git Setup.
To grade your project, we will git pull on general.asu.edu and run your makefile.
Be sure you test your code where it will be graded!
❗️If you program does not compile and work on general.asu.edu, you will receive 0 on this project. ❗️
 

Project Description
Your program will need to define the following data types:

ELEMENT is a data type that contains a field named key.
key is of type int.
Note: ELEMENT itself is not of type int.
HEAP is a data type that contains three fields:
capacity is of type int.
size is of type int.
H is an array of type ELEMENT, with an index ranging from 1 to capacity.
The functions that you are required to implement are:

initialize(n): returns an object of type HEAP with capacity=n and size=0.
This function requires you to perform dynamic memory allocation.
buildHeap(heap, A, n): where heap is a HEAP object, A is an array of type ELEMENT, n is an int which represents the size of the array A.
This function copies the elements of A into heap→H (starting from H[1]), and then uses the linear time "build heap algorithm" to obtain a min heap of size n from the given array A (see lecture 05_heaps_heapsort.pptx and Section 6.3 in the book for a max-heap version).
insert(heap, flag, k): inserts an ELEMENT item with key=k into the min heap heap.
if flag==1, the function does not do any printing.
if flag==2, the function prints out the heap contents before the insertion, and then prints the heap contents after the insertion.
deleteMin(heap, flag): deletes the ELEMENT with the minimum key and returns it to the caller.
if flag==1, the function does not do any printing.
if flag==2, the function prints out the heap contents before the deletion, and then prints out the heap contents after the deletion.
decreaseKey(heap, flag, index, value): decreases the key of the heap element pointed to by index to the value provided by value.
The new key's value will be set by the value parameter, which should not be larger than the current value.
Note that you have to make any necessary adjustments to make sure that the "min heap property" is maintained throughout the heap.
if flag==1, the function does not do any additional printing.
if flag==2, the function prints out the heap contents before the key is decreased, and then prints out the heap contents after the key has been decreased (any any necessary adjustments have been made).
printHeap(heap): prints out the heap information, including capacity, size, and the key fields of the element in the H array, with index going from 1 to heap→size.
You should implement a module that takes the following commands from the keyboard and feeds them to the main program: "S", "C n", "R", "W", "I f k", "D f", "K f i v". Reading these do the following:

S: the program stops.
C n: the program creates an empty heap with capacity equal to n, and waits for the next command.
R: the program reads in the array A from the file HEAPinput.txt, calls the linear time build heap algorithm (which builds the min heap based on A), and waits for the next command.
W: the program writes the current heap information to the screen and waits for the next command. The output should be in the same format as HEAPinput.txt, proceeded by the heap capacity.
I f k: (capital i-f-k) the program inserts an ELEMENT with key equal to k into the current heap with the corresponding flag set to f, and waits for the next command.
D f: the program deletes the minimum element from the heap with the corresponding flag set to f, and prints the key field of the deleted element on the screen, and waits for the next command.
K f i v: the program decreases the key of the element with index i to v with the corresponding flag set to f, and waits for the next command.
The file HEAPinput.txt is a text file. The first line of the file contains an integer n, which indicates the number of array elements. The next n lines contain n integers, one per line. These integers are the key values of the n array elements, from the 1st element to the n'th element.

 

Grading Policies
(Sample test cases and a sample HEAPinput.txt will be posted soon.) See here for test cases and sample HEAPinput.txt files.

Project #1 will be compiled using the Makefile that you submit, and will be run and graded on general.asu.edu. If your program does not compile and execute on general.asu.edu, you will receive 0 points. The last commit prior to the deadline is the one that will be pulled and used for grading.

❗️"My program works on my PC, but not on general.asu.edu." is not a valid excuse. Start working early and test your work well before the due date!

(10 pts) Makefile: Provide a Makefile that can be used to compile your project on general.asu.edu. The executable file should be named run. If you cannot pass this step, you will receive 0 pts on the entire project.
(10 pts) Modular design: You should have a file named util.cpp and its corresponding header file util.h, where the header file defines the prototype of the functions, and the file implementation file implements the functions. You should also have a file named heap.cpp and its corresponding header file heap.h. This module will implement the heap functions.
(10 pts) Documentation and Readable Code: Provide sufficient comments about the variables, algorithms, and logic being executed in your *.h and *.cpp files. In addition, employ good coding practices such as proper indentation, naming variables reasonably (see also Naming Conventions (Links to an external site.)Links to an external site. like camelCase or snake_case), and writing generally easy-to-read code. This article (Links to an external site.)Links to an external site. provides some nice tips.
(10 pts) Your program should correctly use dynamic memory allocation.
(30 pts) Your program should produce the correct output for the posted set of test cases.
(30 pts) Your program should produce the correct output for an unposted set of test cases.
Strive to make your program as robust as possible! A basic principle is that your program can complain about bad input, but it shouldn't crash. When you need to increase the capacity of the heap, try to increase it to the smallest power of 2 that is large enough for your needs. If you can, use the realloc command to avoid copying the array. If that's not successful, allocate a new piece of memory.

 

Getting Started
Clicking on the below link will create your initial repository in the CSE 310 github organization (Links to an external site.)Links to an external site.. You only need to click the link once (i.e., only create one repo):

[ GitHub Classroom Link (Links to an external site.)Links to an external site. ]

Your repository will contain a file called util.cpp and main.cpp which you can use as a starting point for your project (i.e., modify as needed). There will also be a partial Makefile file that you can modify and use.
