#include"lab2functions.h"
#include<iostream>

char RandChar(){
#include<cstdlib>
  char alph[33] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','@','#','$','%','&','*'};
  char select;
  int num = rand() % 34;
  select = alph[num];
  return select; 
}

void writeLine(char a, int leg){
  if (leg > 0){
    std::cout<<a;
    writeLine(a, (leg-1));
  }
}

void writeLine(int leg){
  char a = RandChar();
  if(leg>0){
    std::cout<<a;
    writeLine(leg-1);
  }
}

void writeBlock(char a, int leg, int high){
  if (high>0){
    writeLine(a, leg);
    std::cout<<std::endl;
    writeBlock(a, leg, (high-1));
  }
}

void writeBlock(int leg, int high){
  if(high>0){
    writeLine(leg);
    std::cout<<std::endl;
    writeBlock(leg, (high-1));
  }
}

//runs static character pyramid function but initializes and inputs needed
//round variable so the function knows how many times it has looped w/o need of user input
void writePyramid(char a, int high){writePyramid(a,high,0);}

void writePyramid(char a, int high, int round){
  if (high>0){
    writeLine(' ',(high-1));
    writeLine(a,(round+1));
    std::cout<<std::endl;
    writePyramid(a,(high-1),(round+2));
  }
}

//runs random pyramid function but initializes and inputs needed
//round variable so the function knows how many times it has looped w/o need of user input
void writePyramid(int high){writePyramid(high, 0);}

void writePyramid(int high, int round){
 if (high>0){
    writeLine(' ',(high-1));
    writeLine((round+1));
    std::cout<<std::endl;
    writePyramid((high-1),(round+2));
  }
}
