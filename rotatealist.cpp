class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if (!head || !head->next || k == 0) return head;
            
    // NAME:PURWA UID:22BCS13241
    
            ListNode* curr = head;
            int length = 1;  
            while (curr->next) {
                curr = curr->next;
                length++;
            }
    
            k = k % length;
            if (k == 0) return head;
    
            curr->next = head;
    
            for (int i = 0; i < length - k - 1; ++i) {
                head = head->next;
            }
    
            ListNode* newHead = head->next;
            head->next = nullptr;
    
            return newHead;
        }
    };