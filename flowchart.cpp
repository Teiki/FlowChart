#include "flowchart.h"
#include <iostream>
#include <symbol.h>
using namespace std;

flowchart::flowchart()
{
    symbol_array = new Symbol[20];
}

flowchart::~flowchart()
{
//    for ( auto it = symbol_array.begin(); it != symbol_array.end(); ++it )
//    {
//        delete *it;
//    }
    delete[] symbol_array;
}

void flowchart::addSymbol(my_symbol ms){
    nb_symbol++;
    symbol_array[nb_symbol] = ms;
}
