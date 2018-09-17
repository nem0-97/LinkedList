//
//  LinkedList.h
//  link list
//
//  Created by neoman nouiouat on 8/15/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"
template<class T> class LinkedList{
private:
    int size;
    Node<T>* head;
    Node<T>* tail;
    
public:
    LinkedList();
    void addFirst(T data);
    void addLast(T data);
    void insert(T data);
    void printAll();
    void remove(T data);
    void removeAll();
    void printCount();
    int getSize();
    ~LinkedList();
    
    
};


#endif /* LinkedList_h */
