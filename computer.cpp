#include "computer.h"

Computer::Computer()
{
    name = "";
    buildyear = "";
    cmptype = "";
    cmpbuild = "";
}


Computer::Computer(string name, string buildyear, string cmptype, string cmpbuild)
{
    this -> name = name;
    this -> buildyear = buildyear;
    this -> cmptype = cmptype;
    this -> cmpbuild = cmpbuild;
}

string Computer::name() const
{
    return name;
}

string Computer::buildyear() const
{
    return buildyear;
}

string Computer::cmptype() const
{
    return cmptype;
}

string Computer::cmpbuild() const
{
    return cmpbuild;
}


