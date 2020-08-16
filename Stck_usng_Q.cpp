class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q2,q1; 
    int size;
    MyStack(){
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int m=q1.size();
        int n=q2.size();
        if(q1.size()==0)
            q2.push(x);
        else
            q1.push(x);
        
        
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x;
        
        if((q1.size()==0)&&(q2.size()==0))
            return -1;
        int m=q1.size();
        int n=q2.size();
        if(q1.size()==0){
            if(q2.size()==0)
                return -1;
            else{
                while(q2.size()!=1){
                    x=q2.front();
                    q2.pop();
                    q1.push(x);
                }
                x=q2.front();
                q2.pop();
                return x;
            }
                
        }
        else{
            while(q1.size()!=1){
                x=q1.front();
                q1.pop();
                q2.push(x);
            }
            x=q1.front();
            q1.pop();
            return x;
        } 
    }
    
    /** Get the top element. */
    int top() {
        
        int m=q1.size();
        int n=q2.size();
        if((q1.size()==0)&&(q2.size()==0))
            return -1;
        else if(m>n)
            return q1.back();
        else
            return q2.back();
        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
     if((q1.size()==0)&&(q2.size()==0))
         return true;
     else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
