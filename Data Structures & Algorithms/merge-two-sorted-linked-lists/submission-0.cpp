/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector <int> a;
        ListNode* cur = list1;
        while( cur != nullptr) {
            a.push_back(cur->val);
            cur=cur->next;
        }
        ListNode* cur2 = list2;
        while( cur2 != nullptr) {
            a.push_back(cur2->val);
            cur2=cur2->next;
        }
        sort(a.begin(), a.end());
        ListNode* res = nullptr;   
        ListNode* tail = nullptr; 
        for(int i = 0; i < a.size(); ++i) {
            int x = a[i];
            ListNode* temp = new ListNode(x);
            temp->val = x;
            if (res == nullptr) {
                res = temp;          
            } else {
                tail->next = temp;   
            }
            tail = temp;             
        }
        return res;
    }
};
