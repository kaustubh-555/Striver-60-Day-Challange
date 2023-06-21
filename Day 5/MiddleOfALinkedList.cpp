class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast){
            fast=fast->next;
            if(fast){
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }
};