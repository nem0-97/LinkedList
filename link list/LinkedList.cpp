//
//  LinkedList.cpp
//  link list
//
//  Created by neoman nouiouat on 8/15/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

template<class T> LinkedList<T>::LinkedList(){
    head=nullptr;
    tail=nullptr;
    size=0;
}

template<class T> void LinkedList<T>::addFirst(T data){
    Node<T>* use=new Node<T>(data);
    size++;
    
    if (head==nullptr){
        head = use;
        tail=use;
        return;
    }
    use->setNext(head);
    head->setPrev(use);
    head = use;
}

template<class T> void LinkedList<T>::addLast(T data){
    if (head==nullptr){
        addFirst(data);
        return;
    }
   
    Node<T>* use=new Node<T>(data);
    use->setPrev(tail);
    tail->setNext(use);
    tail = use;
    size++;
}

template<class T> void LinkedList<T>::insert(T data){
    if (head==nullptr){
        addFirst(data);
        return;
    }
    Node<T>* cur=head;
    while(cur->getData() < data && cur!=tail){       //if the data is the same as a node already there just add it again before that node
        cur=cur->getNext();
    }
    if(cur==tail){
        addLast(data);
        return;
    }
        Node<T>* add=new Node<T>(data);
        add->setNext(cur);
        add->setPrev(cur->getPrev());
        cur->setPrev(add);
        size++;
}

template<class T> int LinkedList<T>::getSize(){//either keep track of size in private variable?
    return size;
}

template<class T> void LinkedList<T>::printCount(){//or count it out when you want it?
    int count=0;
    Node<T>* cur=head;
    while(cur!=tail){
        count++;
        cur=cur->getNext();
    }
    count++;
    cout<<count<<endl;
}

template<class T> void LinkedList<T>::printAll(){
    if(head==nullptr){
        cout<<"The list is empty"<<endl;
        return;
    }
    Node<T>* cur=head;
    while(cur!=tail){
        cout<<cur->getData()<<endl;
        cur=cur->getNext();
    }
    cout<<cur->getData()<<endl;
}

template<class T> void LinkedList<T>::remove(T data){
    if(head==nullptr){
        cout<<"The list is empty"<<endl;
        return;
    }
    if(tail==head){ //if 1 item in list
        delete head;
        tail=nullptr;
        head=nullptr;
        size--;
        return;
    }
    Node<T>* cur=head;
    while(cur->getData() < data && cur!=tail){   //just search up until where data should be not to end always
        cur=cur->getNext();
    }
    if(cur->getData()==data){ //check head before doing all this so if it is not as much code run through? but when it is not 1 more line gets run?
        if(cur!=head){
            cur->getPrev()->setNext(cur->getNext());
        }
        else{
            head=cur->getNext();
        }
        if(cur!=tail){
            cur->getNext()->setPrev(cur->getPrev());
        }
        else{
            tail=cur->getPrev();
        }
        delete cur;
        size--;
        return;
    }
    else{
        cout<<data<<" was not found"<<endl;
    }
    
}

template<class T> void LinkedList<T>::removeAll(){
    if(head==nullptr){
        cout<<"The list is empty"<<endl;
        return;
    }
    Node<T>* cur=head;
    Node<T>* nex=head->getNext();
    while(nex!=nullptr){
        delete cur;
        cur=nex;
        nex=cur->getNext();
    }
    delete cur;
    head=nullptr;
    tail=nullptr;
}

template<class T> LinkedList<T>::~LinkedList(){
    removeAll();
}
