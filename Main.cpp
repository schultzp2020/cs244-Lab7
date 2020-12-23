#include <iostream>
#include <string>
#include "LinkedQueue.h"

using namespace std;

int main()
{
    LinkedQueue<string> queue{};

    string choice;
    do
    {
        if (queue.isEmpty())
        {
            // Special set of options if the list is empty.
            cout << "Queue is empty." << endl;
            cout << "Type 'enqueue' or 'exit': ";
        }
        else
        {
            // Print out the number of items.
            cout << "Queue contains " << queue.getSize() << " item(s):" << endl;

            // Print out the numbered contents of the queue, from front to back.
            unsigned int number { 1 };
            queue.forEach([&number](const string& item)
            {
                cout << number << ". " << item << endl;
                number++;
            });

            // Standard options.
            cout << "Type 'enqueue', 'dequeue', or 'exit': ";
        }

        cin >> choice;

        if (choice == "enqueue")
        {
            string toIgnore;
            getline(cin, toIgnore); // Ignore anything else in the same line after the choice.

            cout << "What do you want to add to the queue?" << endl;
            string toEnqueue;
            getline(cin, toEnqueue);

            // Add the specified text to the queue
            queue.enqueue(toEnqueue);
        }
        else if (choice == "dequeue" && !queue.isEmpty())
        {
            cout << "Dequeuing: " << queue.peek() << endl;
            queue.dequeue();
        }
        else if (choice != "exit")
        {
            cout << "Invalid option." << endl;
        }

        // Blank line separating distinct operations.
        cout << endl;
    } 
    while (choice != "exit");
}