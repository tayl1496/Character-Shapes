#include"lab2functions.h"
#include<iostream>

int main(){
  int select = -1;
  int leg, high;
  while(select!=3){
  std::cout<<"Would you like to utilize user input"<<std::endl
	   <<"1: Use user character input" <<std::endl
	   <<"2: Use random characters"<<std::endl
	   <<"3: Stop testing"<<std::endl;
  std::cin>>select;
  switch(select){
  case 1:
    char choice;
    std::cout<<"Enter a character, press enter, then input how long the line is desired"
	     <<std::endl;
    std::cin>>choice
	    >>leg;
    writeLine(choice, leg);
    std::cout<<std::endl;
    std::cout<<"Enter a character, then length of block, then height of block"
	     <<std::endl <<"hit the enter key between each input"<<std::endl;
    std::cin>>choice
	    >>leg
	    >>high;
    writeBlock(choice, leg, high);
    std::cout<<std::endl;
    std::cout<<"Enter a character, then the height of the desired pyramid"
	     <<std::endl<<"and press enter between inputs"<<std::endl;
    std::cin>>choice
	    >>high;
    writePyramid(choice, high);
    std::cout<<"Done Testing user generated input" <<std::endl;
    break;
  case 2:
    std::cout<<"Testing Random input"<<std::endl
	     <<"Enter Length of line"<<std::endl;
    std::cin>>leg;
    writeLine(leg);
    std::cout<<std::endl;
    std::cout<<"Enter length, and then height of block, press enter between inputs"
	     <<std::endl;
    std::cin>>leg
	    >>high;
    writeBlock(leg, high);
    std::cout<<std::endl;
    std::cout<<"Enter height of desired pyramid"<<std::endl;
    std::cin>>high;
    writePyramid(high);
    std::cout<<"Done Testing Random Input"<<std::endl;
    break;
  case 3:
    std::cout<<"Done Testing Program Over"<<std::endl;
    break;
  default:
    std::cout<<std::endl<<"INVALID INPUT"<<std::endl;
    break;
  }
  }
}
