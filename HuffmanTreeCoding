#ifndef A6_HPP
#define A6_HPP

#include <ostream>
#include "symbol.hpp"
#include<queue>

using namespace std;

// MAKE SURE TO UPDATE YOUR INFORMATION IN THE HEADER OF THIS FILE
// IMPLEMENT ALL REQUIRED FUNCTIONS BELOW
// YOU ARE NOT ALLOWED TO ALTER ANY INTERFACE
// INSIDE A FUNCTION YOU CAN DO WHATEVER YOU LIKE
struct compare_nodes {
    bool operator()(bnode<symbol>* b1, bnode<symbol>* b2) {
        if (b1->value.count == b2->value.count){
            return (b2->value.value < b1->value.value);
        }
       else return (b2->value.count < b1->value.count);
    }
};

// IMPLEMENT YOUR FUNCTION huffman_tree
template <typename Iter>
bnode<symbol>* huffman_tree(Iter first, Iter last){
    priority_queue<bnode<symbol>*, vector<bnode<symbol>*>, compare_nodes> ht;

    for(;first<last ; first++){
        bnode<symbol>* next = new bnode<symbol>(*first);
        ht.push(next);
    }

    while(ht.size()>1){

        bnode<symbol>* left = ht.top();
        ht.pop();
        bnode<symbol>* right = ht.top();
        ht.pop();

        char abc = min(right->value.value, left->value.value);

        symbol* retVal = new symbol(abc, left->value.count + right->value.count);
        bnode<symbol>* headNode=new bnode<symbol>(*retVal, left, right);

        ht.push(headNode);
        delete retVal;
    }
    return ht.top();
}

// IMPLEMENT YOUR FUNCTION print_dictionary
void print_dictionary(std::ostream& os, bnode<symbol>* root, string s=""){
    if(!root){
        return;
    }

    if(root->left == nullptr && root->right==nullptr){
        os << root->value.value << " " << s << "\n";
    }

    print_dictionary(os, root->left, s + "0");
    print_dictionary(os, root->right, s + "1");
}

// IMPLEMENT YOUR FUNCTION release_tree
void release_tree(bnode<symbol>* root){
    if (!root){
        return;
    }
    release_tree(root->left);
    release_tree(root->right);
    delete root;
}

#endif // A6_HPP
