// Copyright 2021 NNTU-CS
#include <iostream>
#include <string>

#include "../include/bst.h"

void makeTree(BST<std::string>& tree, const char* filename);
void printFreq(const BST<std::string>& tree);

int main() {
  BST<std::string> tree;
  const char* filename = "war_peace.txt";

  makeTree(tree, filename);
  printFreq(tree);

  return 0;
}
