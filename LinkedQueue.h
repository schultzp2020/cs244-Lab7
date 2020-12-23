#pragma once
#include "Queue.h"
#include "LinkedList.h"

template <typename T>
class LinkedQueue : public Queue<T>
{
public:
    // Gets the number of elements in the collection.
    virtual unsigned int getSize() const override;

    // Performs the specified accept() function on each element in the collection (read-only).
    virtual void forEach(const std::function<void(const T&)>& accept) const override;

    // Performs the specified accept() function on each element in the collection, 
    // potentially making changes to elements as they’re visited.
    virtual void forEach(const std::function<void(T&)>& accept) override;

    // Returns true if there are no items in the queue.
    virtual bool isEmpty() const override;

    // Peek at the element at the front of the queue.
    virtual const T& peek() const override;

    // Peek at the element at the front of the queue 
    // and possibly make changes.
    virtual T& peek() override;

    // Add another item at the back of the queue.
    virtual void enqueue(const T& item) override;

    // Remove an item from the front of the queue.
    virtual void dequeue() override;

private:
    // TODO: add any private variables here.
    LinkedList<T> base;
};

template<typename T>
unsigned int LinkedQueue<T>::getSize() const
{
    // TODO: Implement this function (one line).
    return base.getSize();
}

template<typename T>
void LinkedQueue<T>::forEach(const std::function<void(const T&)>& accept) const
{
    base.forEach(accept);
}

template<typename T>
void LinkedQueue<T>::forEach(const std::function<void(T&)>& accept)
{
    base.forEach(accept);
}

template<typename T>
bool LinkedQueue<T>::isEmpty() const
{
    // TODO: Implement this function (one line).
    return base.getSize() == 0;
}

template<typename T>
const T& LinkedQueue<T>::peek() const
{
    // TODO: Implement this function (one line).
    return base.getFirst();
}

template<typename T>
T& LinkedQueue<T>::peek()
{
    // TODO: Implement this function (one line).
    return base.getFirst();
}

template<typename T>
void LinkedQueue<T>::enqueue(const T& item)
{
    // TODO: Implement this function (one line).
    base.addLast(item);
}

template<typename T>
void LinkedQueue<T>::dequeue()
{
    // TODO: Implement this function (one line).
    base.removeFirst();
}
