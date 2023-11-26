//
//  counter.cpp
//  cppm-homework-06.02
//
//  Created by a1ex on 11/22/23.
//

#include "counter.hpp"

void Counter::counter_plus ()
{
   this->num++;
}

void Counter::counter_minus ()
{
    this->num--;
}

int Counter::counter_value ()
{
    return num;
}
