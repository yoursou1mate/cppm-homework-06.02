//
//  counter.hpp
//  cppm-homework-06.02
//
//  Created by a1ex on 11/22/23.
//

#pragma once

class Counter
{
private:
    int num;
        
public:
    Counter (int num);
    Counter ();
    
    void counter_plus ();
    void counter_minus ();
    int counter_value ();
};
