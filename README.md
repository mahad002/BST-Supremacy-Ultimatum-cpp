# BST-Supremacy-cpp
covering basic functions of a Binary Search Tree

Task 1

    You have seen the basic BST and its operations in the class lectures
    Your first task is to augment this basic implementation with the following functions (or
    functionalities):
        1.Print the elements in descending order
        2.isBST(node): A global (friend) function that checks if a tree (or subtree) is a BST (by
          returning a Boolean). You may have to include another function in the class to call this one with
          the tree’s root.
        3.printLessThan(key): Prints all the elements in order that are less than the key. The key need
          not be in the tree.
        4. Overload the assignment operator for the Tree class. The new tree should have the same
          structure and contain elements in the similar order.
      
      
      
Task 2

    Marks Include the functionality to write and read your BST to and from a text file. You have to
    write your BST in a way that preserves the tree’s structure. Note that reading an already built tree
    is different from generating (or building) a BST. While building a tree from scratch you calculate
    the correct position of each element through comparisons. Contrarily while reading a tree from a
    file you already know the position of each element based on its position in the file. You can take
    hints from the array based implementation of the Binary Tree from the lecture presentations. You
    may have to use some other primitive data structure to make the write/read systematic and easy!
    Use the isBST() function implemented in the previous question to verify the validity of the read /
    write processes.
