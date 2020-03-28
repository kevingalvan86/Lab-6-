/**
 * test.cpp
 *
 * EECS 183
 * Lab 6: Classes and File I/O
 *
 * <#Name#>Kevin Felipe Galvan
 * <#uniqname#> kevgal
 *
 * <#Description#>
 */

#include <iostream>
#include <fstream>
using namespace std;

#include "Position.h"
#include "utility.h"

void test_position();

int main() {
    test_position();
    return 0;
}

void test_position() {
    // testing Position default constructor here
    Position start_pos;
    Position end_pos;    
    cout << "Testing Position::Position() - default constructor\n";
    cout << "start_pos, expected output: (1,A) actual output: " << start_pos << endl;
    cout << "end_pos, expected output: (1,A) actual output: " << end_pos << endl;
    
    // testing Position setters here
    start_pos.set_row(4);
    start_pos.set_col(5);    
    cout << "\nTesting Position::set_row() and Position::set_col()\n";
    cout << "start_pos, expected output: (5,F) actual output: " << start_pos << endl;
    
    // testing Position read
    ifstream input_file;
    input_file.open("grid1.txt");
    if (input_file.good()) {
        cout << "KKEVINNNNNNNN";
        // can use the Position::read() function directly
        start_pos.read(input_file);

        // or use the extraction operator
        input_file >> end_pos;

        cout << "\nTesting Position::read()\n";
        cout << "start_pos, expected output: (1,A) actual output: " << start_pos << endl;
        cout << "end_pos, expected output: (4,A) actual output: " << end_pos << endl;
    }
    else {
        cout << "\nError opening grid1.txt\n";
    }
  
    return;
}
