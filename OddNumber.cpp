// Your name and class (e.g. CS2235-F24)
//Rohan Shrestha
//CS 2235

#include "OddNumber.h"
#include <math.h>
#include <stdexcept>

// Method implementation goes here
OddNumber::OddNumber()  {    //no arg constructor with value of 1
    number = 1;
}

OddNumber::OddNumber(int num_i) {  //constructor initializing value with specified value
    number = num_i;
    if(num_i % 2==0) {              //taking number%2 because oddNumber never gives remainder of 0
        throw std::invalid_argument("Number must be an odd number");
    }

}
int OddNumber::getValue() const{       //using get value to get the return value of object
    return number;
}

OddNumber OddNumber::getNext() const {      //method to return next odd number
    return OddNumber(number + 2);      // to get next odd number, we need to add by 2. for example : 1+2=3 or 3+2=5
}

OddNumber OddNumber::getPrevious() const {     // method to return previous odd number
    return OddNumber(number - 2);         // to get previous odd number, we need to deduct by 2. for example: 5-2=3 or 3-2 =1
}