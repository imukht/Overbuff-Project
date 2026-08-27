#ifndef BST_H
#define BST_H

#include <string>
using namespace std;

struct overbuffRecord {
    string hero;  //hero name
    double winrate; //hero winrate
    string rank; //rank 
};

//tree node
struct Node {
	
    overbuffRecord info;
    Node* left;
    Node* right;
    
};

class BST {
private:
    Node* root;

    void insert(Node*& tree, overbuffRecord item);
    
    void searchGreater(Node* tree, double minWinrate);


public:
    BST();

    void addItem(overbuffRecord item);
    
    void searchGreater(double minWinrate);
    
};

#endif