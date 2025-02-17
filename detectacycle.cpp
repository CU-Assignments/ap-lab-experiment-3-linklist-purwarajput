class Solution {
    public:
        bool hasCycle(ListNode *head) {
          
            // NAME:PURWA UID:22BCS13241
            
            if (!head || !head->next) return false;
    
            ListNode *slow = head, *fast = head;
    
            while (fast && fast->next) {
                slow = slow->next;           
                fast = fast->next->next;     
    
                if (slow == fast) {          
                    return true;
                }
            }
    
            return false;  
        }
    };
