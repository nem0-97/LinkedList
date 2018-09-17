//
//  Node.cpp
//  link list
//
//  Created by neoman nouiouat on 8/15/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#include <iostream>
#include "Node.h"

using namespace std;

template<class T> Node<T>::Node(T dat){
    data=dat;
    prev=nullptr;
    next=nullptr;

}

template<class T> Node<T>* Node<T>::getNext(){
    return next;
}

template<class T> Node<T>* Node<T>::getPrev(){
    return prev;
}

template<class T> void Node<T>::setNext(Node<T>* nex){
    next=nex;
    
}

template<class T> void Node<T>::setPrev(Node<T>* pre){
    prev=pre;
}

template<class T> T Node<T>::getData(){
    return data;
}

template<class T> void Node<T>::setData(T dat){
    data=dat;
}
