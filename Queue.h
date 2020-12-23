#pragma once
#include "Collection.h"

template <typename T>
class Queue : public Collection<T>
{
public:
    virtual ~Queue() = 0;

    // Returns true if there are no items in the queue.
    virtual bool isEmpty() const = 0;

    // Peek at the element at the front of the queue.
    virtual const T& peek() const = 0;

    // Peek at the element at the front of the queue 
    // and possibly make changes.
    virtual T& peek() = 0;

    // Add another item at the back of the queue.
    virtual void enqueue(const T& item) = 0;

    // Remove an item from the front of the queue.
    virtual void dequeue() = 0;
};

template<typename T>
Queue<T>::~Queue()
{
}
