#include "pcc.h"
#include <iostream>
using namespace std;

double PC::getPrice()
{
    return price;
}

void PC::Print()
{
    cout << "Name - " << name << endl << "CPU - " << cpu << endl
        << "GPU - " << gpu << endl << "SSD - " << ssd << endl << "RAM - " << ram << endl;
}