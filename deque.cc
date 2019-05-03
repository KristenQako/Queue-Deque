/****************************************************
 * File Name: deque.cc
 * Author: Kristen Qako
 * Course: CSCI 132
 * Purpose: Implements the functions for the deque class
 * Date: 02/21/2019
 *****************************************************/
#include "deque.h"


Error_code Deque :: append_front(const Queue_entry &item)

//Pre: None.
//Post: takes an item and puts in into the first position of the deque. Checks if the deque is full, and if it is, returns an overflow.
{
    if(count >= maxqueue) return overflow;
    count++;
    if(front - 1 < 0){
        front = maxqueue - 1;
        entry[front] = item;
        return success;
    }else{
        front = front - 1;
        entry[front] = item;
        return success;
    }
} // end of append front


Error_code Deque :: append_rear(const Queue_entry &item)
//Pre: None.
//Post: takes an items and puts it into the last position of the deque. If the deque is full, the functions returns an overflow message.
{
    return append(item);
}


Error_code Deque :: serve_front()
//Pre: None
//Post: Removes the first item of the deque. Conditional checks if the deque is empty, then return underflow.
{
    return serve();
    
}//end of serve front.


Error_code Deque :: serve_rear()
//Pre: None.
//Post: Removes the last item of the deque. Conditional checks if the deque is empty, then returns underflow if it is.
{
    if(count <= 0) return underflow;
    count--;
    if(rear - 1 == -1){
        rear = maxqueue -1;
        return success;
    }else{
        rear = rear - 1;
        return success;
    }
} //end of serve rear

Error_code Deque :: retrieve_front(Queue_entry &item) const
//Pre: None.
//Post: Retrieves the first value at the front of the deque.
{
    return retrieve(item);
    
} //end of retrieve front

Error_code Deque :: retrieve_rear(Queue_entry &item) const
//Pre: None.
//Post: Retrieves the last value at the rear of the deque.
{
    if(count <= 0) return underflow;
    item = entry[rear];
    return success;
} //end of retrieve rear

