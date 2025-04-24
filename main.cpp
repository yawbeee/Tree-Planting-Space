#include <iostream>

using namespace std;

int main () {
    double space_per_tree,length,floor,tree_diameter;
    double radius,required_space,total_occupied_space;
    int no_of_trees;

    cout << "Enter Yard Length: " << endl;
    cin >> length ;
    cout << endl;

    cout <<"Enter radius of Tree: " << endl;
    cin >> radius;
    cout << endl;

    cout << " Required Space Between Space: " << endl;
    cin >> required_space ;
    cout << endl;

tree_diameter = 2 * radius ;
no_of_trees = (length + required_space) / (tree_diameter + required_space) ;
    total_occupied_space = (no_of_trees * tree_diameter ) + ( no_of_trees - 1 ) * required_space;

cout <<"Number Of Tree: " << no_of_trees << endl;
cout <<"Total Space: " << total_occupied_space << endl;


return 0;


}
