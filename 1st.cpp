/* Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
 

Example 1:

Input: 
5
1 0 1 1 0

Output: 
0 0 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.

Example 2:

Input:
10
1 0 1 1 1 1 1 0 0 0

Output: 
0 0 0 0 1 1 1 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be 
0 0 0 0 1 1 1 1 1 1.

*/
class solution{
public:
  void binSort (int A[],int N){
           int i=0,j=N-1;
           while(i<j){
               while(i<j && (A[i]==0))
                    i++;
            
               while(i<j && (A[j]==1))
                    j--; 
               
            if (i<j){
                swap(A[i],A[j]);
                i++;
                j--;
                
            }
           
        }
           
       }
       
