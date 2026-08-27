#include <iostream>
#include "BST.h"
using namespace std;

BST::BST() {
    root = nullptr;
}

void BST::addItem(overbuffRecord item) {
    insert(root, item);
}


// inserts csv data into nodes
void BST::insert(Node*& tree, overbuffRecord item) {
  
    if (tree == nullptr) {
        tree = new Node;
        tree->info = item;
        tree->left = nullptr;
        tree->right = nullptr;
    }
   
   //go left for winrates
    else if (item.winrate < tree->info.winrate) {
        insert(tree->left, item);
    }
   
   //go right for larger or equal winrates
    else {
        insert(tree->right, item);
    }
}

void BST::searchGreater(double minWinrate) {
    
	cout << "\nHeroes with winrate greater than " << minWinrate << ":\n\n";
    cout << "Hero,Win Rate,Rank\n";

//recursive function to get greater values
    searchGreater(root, minWinrate);
}


void BST::searchGreater(Node* tree, double minWinrate) {
    
	if (tree == nullptr) {
        return;
    }

    // I started from the right of the tree so they print in descending order
    searchGreater(tree->right, minWinrate);

    if (tree->info.winrate > minWinrate) {
       
	    cout << tree->info.hero << ","
             << tree->info.winrate << ","
             << tree->info.rank << endl;
             
    }

    searchGreater(tree->left, minWinrate);
}