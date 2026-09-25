# define SIZE 3

// the used array keeps track of which number is used and which number to be transferred to the perm
// k is number of items fixed in perm array
// n is length of perm array 


// 20:00 for video.




void printPerms(int *perm, int * used, int k, int n){
    // base case
    // (just got 1 permutation)
    if (k == n){
        print(perm, n);
        return;
    }
    for(int i = 0; i < n; i++){
        
        if (!used[i]){ // if i was not used
            used[i] = 1; // mark that it is used
            perm[k] = i; // transfer i to the perm array at kth position

            printPerms(perm, used, k + 1, n);// increase k and grow further

            used[i] = 0; // unmark i for next process

        }
    }
}


int main (void){
    // to build and store the permutation
    int perm[SIZE] ={0};
    // tracking which index is used
    int used[SIZE] = {0};

    printperms(perm, used, 0, SIZE);
}