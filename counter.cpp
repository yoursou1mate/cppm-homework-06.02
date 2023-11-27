//
//  counter.cpp
//  cppm-homework-06.02
//
//  Created by a1ex on 11/22/23.
//

#include "counter.hpp"


Counter::Counter (int num) {
    this->num = num;
}

Counter::Counter ()
{
    num = 1;
}

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
