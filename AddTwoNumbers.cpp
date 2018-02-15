#include <iostream>
#include <algorithm>
#include <list>


using namespace std;



/**
 * Definition for singly-linked list.
 *    struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        
        if (l1==NULL && l2 == NULL)
            return NULL;
        
        
        int v1 = 0;
        int v2 = 0;
        
        if (l1!=NULL)
            v1= l1->val;
        
        if(l2!=NULL)
            v2=l2->val;
        
        cout<<"l1.val:"<<v1<<"l2.val:"<<v2<<endl;
        
        int sumDigit = (v1+v2)%10;
        int carry = (v1+v2)/10;
        cout<<"carry:"<<carry<<endl;
        
        if (l1->next !=NULL){
            l1->next->val = l1->next->val+carry;
            
        }
        else
        {
            if (l2->next !=NULL)
            l2->next->val = l2->next->val+carry;
            
        }
     
        ListNode* pnode = new ListNode(sumDigit);
        
        if (l1->next ==NULL && l2->next ==NULL && carry>0)
        {
            ListNode* pNext = new ListNode(carry);
            pnode->next = pNext;
        }
        
            
         if (l1->next !=NULL && l2->next !=NULL)   
            pnode->next = addTwoNumbers(l1->next, l2->next);
         
         if (l1->next ==NULL && l2->next !=NULL)   
            pnode->next = l2->next;
         
         
         if (l2->next ==NULL && l1->next !=NULL)   
            pnode->next = l1->next;
         
         
         
        return pnode;     
        
        
        
        
        
    }
};







int main(){
    
    
   ListNode l1(1);
    
  //ListNode v2(8);
   //  l1.next = &v2;
     
    
   // ListNode v3(3);
   // v2.next = &v3;
    
    
   ListNode l2(9);
    
   ListNode v22(9);
     l2.next = &v22;
     
    
    ListNode v32(4);
  //  v22.next = &v32;
    
    Solution s;
    
    ListNode *res = s.addTwoNumbers(&l1,&l2);
    
    
    ListNode *runner = res;
    while (runner !=NULL)
    {
        cout<<(*runner).val<<endl;
        runner =(*runner).next;
    }
    
  /* ListNode *runner = &l2;
    while (runner !=NULL)
    {
        cout<<(*runner).val<<endl;
        runner =(*runner).next;
    }
  */
    
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    