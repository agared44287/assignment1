// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:Amare Gared
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <iostream>

Array::Array (void)//initialize all varibles
{
  char arr[15]={'a','r','g'};

}

Array::Array (size_t length) : cur_size_(), max_size_()
{
  length = 50;
    
}

Array::Array (size_t length, char fill)
{
  this
   
   

}


Array::Array (const Array & arr):arr()
{

   this->arr = arr;
   

}

Array::~Array (void)
{
  delete [] data_;

}

const Array & Array::operator = (const Array & rhs)
{

}


char & Array::operator [] (size_t index)
{

}

const char & Array::operator [] (size_t index) const
{

}

char Array::get (size_t index) const
{

}

void Array::set (size_t index, char value)
{

}

void Array::resize (size_t new_size)
{
 
    if(new_size == cur_size_){

    }
    else if(new_size >cur_size_){

    }
        

}

int Array::find (char ch) const
{

}

int Array::find (char ch, size_t start) const
{
  ch = 'r';
  start = 0;

}

bool Array::operator == (const Array & rhs) const
{

}

bool Array::operator != (const Array & rhs) const
{

}

void Array::fill (char ch)
{

}

void Array::shrink (void)
{
    for(int i=0;i<cur_size_;i++){
        
        if(arr[i] !=NULL){
            max_size_ = arr[i];
            std::cout<<arr[i];
        }
        
    }
  
}

void Array::reverse (void)
{
  while(begin<end){
            int newArr = arr[begin];
            arr[begin] = arr[end];
            arr[end] = newArr;
            begin++;
            end--;
            
        }
}

Array Array::slice (size_t begin) const
{
  
}

Array Array::slice (size_t begin, size_t end) const
{
  
}
