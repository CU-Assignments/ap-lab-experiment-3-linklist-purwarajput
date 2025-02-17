class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
             ListNode* current = head;
            //  NAME: PURWA UID:22BCS13241
            
              while (current != nullptr && current->next != nullptr) {
                  if (current->val == current->next->val) {
                    // duplicate
                     current->next = current->next->next;
                     } else { 
                         current = current->next;
                }
            }
             return head;
        }
    };
