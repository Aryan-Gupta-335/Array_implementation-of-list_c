# Array_implementation-of-list_c
This is a C program that implements a simple array-based list with the following operations:

1. Add element to the end of the list
2. Insert element at a specific position
3. Remove element by value
4. Remove element by position
5. Search for an element
6. Display the list
7. Exit the program

The program uses a fixed-size array a with a maximum size of 100 elements. It keeps track of the current size of the list using the variable size.

The program presents a menu-driven interface for the user to interact with the list. Based on the user's choice, it calls the corresponding function to perform the desired operation.

Here's a brief description of each function:

- addElement: Adds an element to the end of the list if there's space available.
- addatpositionElement: Inserts an element at a specific position in the list if there's space available.
- removeElement: Removes the first occurrence of an element by value.
- removeposElement: Removes an element at a specific position.
- search: Searches for an element in the list and prints its index if found.

Note that this program has some limitations, such as:

- Fixed-size array with a maximum size of 100 elements
- No error handling for invalid user input
- No sorting or ordering of elements in the list

This program can be enhanced by adding more features, such as dynamic memory allocation, error handling, and sorting.
