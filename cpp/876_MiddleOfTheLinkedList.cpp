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
    ListNode* middleNode(ListNode* head) {
        ListNode* walker = head;
        ListNode* runner = head;

        while (runner != NULL & runner->next != NULL) {
            walker = walker->next;
            runner = runner->next->next;
        }

        return walker;
    }
};