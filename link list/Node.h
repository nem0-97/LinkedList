//
//  Node.h
//  link list
//
//  Created by neoman nouiouat on 8/15/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#ifndef Node_h
#define Node_h

 template<class T> class Node{
    private:
     Node<T>* prev;
     T data;
     Node<T>* next;
    
    public:
     Node(T dat);
     Node<T>* getNext();
     Node<T>* getPrev();
     void setNext(Node<T>* nex);
     void setPrev(Node<T>* pre);
     T getData();
     void setData(T dat);
 };

#endif /* Node_h */
