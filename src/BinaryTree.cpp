#include <iostream>
#include "BinaryTree.h"
using namespace std;

/**
 * find middle node;
*/
TreeNode *Solution::findMiddleNode(ListNode *head, ListNode *boundary)
{
    if (!head) return nullptr;
    if (head->next == boundary) return new TreeNode(head->val);
    ListNode* slow = head;
    ListNode* fast = head;
    // find midle node
    while(fast != boundary && fast->next != boundary) {
        fast = fast->next->next;
        slow = slow->next;
    }
    TreeNode *midNode = new TreeNode(slow->val);
    cout<<"MidNode:"<< slow->val <<endl;
    cout<<"Fast:"<< ((fast != nullptr)? fast->val: INT_MIN) <<endl;
    // draw left branch
    midNode->left = findMiddleNode(head, slow);    
    // draw right branch
    cout<<"Right Head:"<< slow->next->val <<endl;
    if (slow->next != boundary) {
        midNode->right = findMiddleNode(slow->next, boundary);
    }
    return midNode;
}

/**
 * solution
*/
TreeNode *Solution::sortedListToBST(ListNode *head)
{
    return findMiddleNode(head, nullptr);
}