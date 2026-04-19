# include <bits/stdc++.h>
using namespace std;

struct job{
        char id;
        int deadline;
        int profit;

        job(char c,int d,int p){
            id = c;
            deadline = d;
            profit = p;

        }
    };

    bool compare(job a,job b){
        return a.profit>b.profit;
    }

    void jobseq(vector<job> & jobs){
        int maxdeadline = 0;
        for(auto& job:jobs){
            if(job.deadline > maxdeadline){
                maxdeadline = job.deadline;
            }
        }
         sort(jobs.begin(),jobs.end(),compare);
         vector<char> slots(maxdeadline+1,'-');
         int maxprofit=0;  
            for(auto& job:jobs){
                for(int i=job.deadline;i>0;i--){
                    if(slots[i]=='-'){
                        slots[i]=job.id;
                        maxprofit += job.profit;
                        break;
                    }
                }
            }   
            cout<<"slots: ";
            for(char& c:slots){
                if(c!='-'){
                    cout<<c<<" ";
                }

            }
            cout<<"Max profit: $ " << maxprofit << endl;
    }
int main() {
vector<job> jobs={
    {'A',2,100},
    {'B',1,19},
    {'C',2,27},
    {'D',1,25},
    {'E',3,15}
};

jobseq(jobs);
    return 0;
}
    