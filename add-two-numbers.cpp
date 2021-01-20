
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        bool flag = false;
        ListNode *L3, *cur, *pre;
        L3 = cur = new ListNode(0);
        while (l1 || l2)
        {
            if (l1)
            {
                cur->val = l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                cur->val += l2->val;
                l2 = l2->next;
            }
            if (flag)
            {
                cur->val += 1;
                flag = false;
            }
            if (cur->val >= 10)
            {
                cur->val -= 10;
                flag = true;
            }
            pre = cur;
            pre->next = new ListNode(0);
            cur = pre->next;
        }
        if (flag)
        {
            cur->val = 1;
            cur->next = nullptr;
        }
        else
        {
            pre->next = nullptr;
        }
        return L3;
    }
};