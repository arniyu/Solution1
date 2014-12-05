#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <iostream>

using namespace std;

class Computer
{
public:
    Computer();
    Computer(string name, string buildyear, string cmptype, string cmpbuild);
    string name() const;
    string buildyear() const;
    string cmptype() const;
    string cmpbuild() const;


private:
    string name;
    string buildyear;
    string cmptype;
    string cmpbuild;

};

#endif // COMPUTER_H
