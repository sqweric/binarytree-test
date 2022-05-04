#ifndef MAIN_CPP_BTNODE_H
#define MAIN_CPP_BTNODE_H
#include <iostream>
using namespace std;
static const int m = 3;  //定义最小度为3
static const int key_max = 2*m-1;//关键字最大个数
static const int key_min = m - 1;//关键字最小个数
static const int child_max = key_max + 1;//子节点最大个数(这里可以看出子节点数与关键字数有关)
static const int child_min = key_min + 1;//子节点最小个数


template <class T>
class BTree;//前置声明
/*
类名:BTnode
*/

template <class T>
class BTnode
{
    friend class BTree<T>;//友元函数
public:
    BTnode()
    {
        keyNum = 0;
        parent = nullptr;//父节点初始化
        isleaf = true;
        int i ;
        for (i = 0;i < child_max;i++)//子树指针数组初始化
        {
            pchild[i] = nullptr;
        }
        for (i = 0;i < key_max;i++)//关键字数组初始化
        {
            keyvalue[i] = '\0';
        }
    }
//private:
    bool isleaf;//判断节点是否是叶子节点
    int keyNum;//关键字个数
    BTnode<T>* parent;//指向父节点
    BTnode<T>* pchild[child_max];//子树指针数组
    T   keyvalue[key_max];//关键字数组
};



#endif
