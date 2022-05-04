#ifndef MAIN_CPP_BTREE_H
#define MAIN_CPP_BTREE_H
#include "BTnode.h"
template <class T>
class BTree
{
public:
    BTree();
    bool BTree_insert(T value);
    void SplitBlock(BTnode<T>* node_parent,int child_index,BTnode<T>* node_child);
    void Notfull_insert(BTnode<T>* node,T value);
    bool contain(T value);
    BTnode<T>* BTree_find(BTnode<T>* node,T value);
    void printpoint(BTnode<T>* node,int count);
    void printpoint();
    bool BTree_delete(T value);
    void MergeBlock(BTnode<T>* node_parent,int child_index);
    T getprev(BTnode<T>* node);
    T getnext(BTnode<T>* node);
    void BTree_deletebalance(BTnode<T>* node,T value);


//private:
    BTnode<T>* root;//根节点
};


#endif
