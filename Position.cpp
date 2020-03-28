/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Position.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * Project 4: Battleship
 *
 * <#description#>
 */

#include "Position.h"
#include "utility.h"


Position::Position() {
    // TODO: write implementation here.

    row = 0;
    col = 0;
}

Position::Position(int row_in, int col_in) {
    // TODO: write implementation here.
    if (check_range(row_in) == row_in) {
        row = row_in;
    }
    else {
        row = check_range(row_in);
    }
    if (check_range(col_in) == col_in) {
        col = col_in;
    }
    else {
        col = check_range(col_in);
    }
}

Position::Position(char row_in, char col_in) {
    // TODO: write implementation here.
    char Alpha[8] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
    char Nums[8] = { '1', '2', '3', '4', '5', '6', '7', '8' };
    col = 0;
    row = 0;
    while (Nums[row] != row_in) {
        row++;
    }
    while (Alpha[col] != toupper(col_in) ){
        col++;
    }
}

int Position::get_row() {
    // TODO: write implementation here.
    return row;
}

void Position::set_row(int row_in) {
    // TODO: write implementation here.
    row = row_in;
    return;
}

int Position::get_col() {
    // TODO: write implementation here.
    return col;
}

void Position::set_col(int col_in) {
    // TODO: write implementation here.
    col = col_in;
    return;
}

void Position::read(istream& is) {
    // TODO: write implementation here.
    char num;
    char let;
    while ( !(is.fail()) ){
        cout << "winning" << endl;
        is >> num;
        is >> let;

        return;
    }
}

void Position::write(ostream &os) {
    // TODO: write implementation here.
    char Alpha[8] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
    char Nums[8] = { '1', '2', '3', '4', '5', '6', '7', '8' };
    os << "(" << Nums[row] << "," << Alpha[col] << ")";
    return;
}

int Position::check_range(int val) {
    // TODO: write implementation here.
    for (int i = 0; i < MAX_GRID_SIZE; i++) {
        if (i == val) {
            return val;
        }
    }
    if (val > (7 - val)) {
        return 7;
    }
    else {
        return 0;
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream &operator>>(istream &is,  Position &pos) {
    pos.read(is);
    return is;
}

ostream &operator<<(ostream &os, Position pos) {
    pos.write(os);
    return os;
}

