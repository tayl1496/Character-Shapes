#pragma once

void writeLine(char,int);//creates line of static character input with set length

void writeLine(int);//creates line of random characters with set length

void writeBlock(char,int,int);//creates block of static character input with set length and height of block

void writeBlock(int,int);//creates block of random characters with set length and height of block

//runs static character pyrampid function and adds round variable so the function knows
//how many times it has ran w/o need of user input
void writePyramid(char, int);

void writePyramid(char,int,int);//creates pyramid with static character

//runs random character pyramid function and adds round variable so the function knows
//how many times it has ran w/o need of user input
void writePyramid(int);

void writePyramid(int,int);//creates pyramid with random characters

char RandChar();//grabs a random character for other functions to use as input
