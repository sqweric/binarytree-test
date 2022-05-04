#include <iostream>
#include "BTnode.h"
#include "Btree.h"
#include "Btree.cpp"
#include <gtest/gtest.h>
using namespace std;



/*int main(){
    BTree<int> test;
    /*for(int i=0;i<10;i++) {
        test.BTree_insert(i);
    }
    test.BTree_insert(1);test.BTree_insert(2);  test.BTree_insert(3);
    test.BTree_delete(2);
    cout<<test.root->keyvalue[1]<<endl;
    return 0;
}*/

TEST(test, c1) {
    BTree<int> t;
    t.BTree_insert(1);  t.BTree_insert(2);  t.BTree_insert(3);
    t.BTree_delete(2);
    EXPECT_EQ(t.root->keyvalue[0], 1);

}

GTEST_API_ int main(int argc, char ** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
