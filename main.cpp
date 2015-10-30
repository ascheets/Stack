#include <iostream>
#include <ctime>
#include "Map.h"
#include "Tracker.h"

using namespace std;

//void testingStack();

int main()
{
  //create a map from a file
  Map map("map20x20");

  //create a tracker capable of traversing through a map
  Tracker tracker;

  //send the tracker to find a path through the map
  tracker.findPath(map);

  map.printCells();

  map.printRoute();
  
  return 0;

}

/*void testingStack()
{
  //try out stack
  Stack <int> stack;

  for(int i = 0; i < 5; i++){
    
    stack.push(0);
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print();

    int val;

    stack.pop(val);

    cout << "Popped: " << val << endl;

    stack.pop(val);

    cout << "Popped: " << val << endl;

    stack.top(val);

    cout << "Top: " << val << endl;

    stack.print();

  }

  }*/
