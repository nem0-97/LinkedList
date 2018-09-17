//
//  main.cpp
//  link list
//
//  Created by neoman nouiouat on 8/15/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#include <iostream>
#include "Node.cpp"
#include "LinkedList.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    LinkedList<int> test;
    for(int i=0; i<100;i++){
        test.insert(i);
    }
    test.printAll();
    test.remove(99);
    test.remove(99);
    test.remove(1);
    test.remove(1);
    test.addFirst(1);
    test.addLast(99);
    test.printAll();
    test.removeAll();
    test.printAll();
    return 0;
}
