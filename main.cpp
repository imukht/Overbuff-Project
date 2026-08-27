#include <iostream>
#include <fstream>
#include <sstream>
#include "BST.h"
using namespace std;

void loadCSV(string fileName, BST& tree) {
    ifstream readFile(fileName);

//test file
    if (!readFile.is_open()) {
        cout << "Could not open " << fileName << endl;
        return;
    }

    string line;
    getline(readFile, line); // skip the header row

//read csv overbuff file
    while (getline(readFile, line)) {
        stringstream ss(line);
        overbuffRecord record;

        getline(ss, record.hero, ',');

        string winrateText;
        getline(ss, winrateText, ',');
        record.winrate = stod(winrateText);

        getline(ss, record.rank, ',');

        tree.addItem(record); // add this row into the BST
    }
}

int main() {
    BST overbuffTree;

//load csv data into tree
    loadCSV("overbuff_winrates.csv", overbuffTree);

    double minWinrate;
    cout << "Enter minimum winrate: ";
    cin >> minWinrate;

//print greater winrates than user input
    overbuffTree.searchGreater(minWinrate);

    return 0;
}
