/****************************************************
 * File Name: deque.h
 * Author: Kristen Qako
 * Course: CSCI 132
 * Purpose: Header file for Deque, extends queue. Includes all functions for deque.
 * Date: 02/21/2019
 *****************************************************/
#include "queue.h"

class Deque : private Queue {
public:
    Error_code append_front(const Queue_entry &item);
    Error_code append_rear(const Queue_entry &item);
    Error_code serve_front();
    Error_code serve_rear();
    Error_code retrieve_front(Queue_entry &item) const;
    Error_code retrieve_rear(Queue_entry &item) const;
};
    
