import sys
n=int(sys.stdin.readline())
stacks=[] 

for i in range(n):
    stacks=list(map(list,input().split())) 
    
    for j in stacks: 
        for k in range(len(j)): 
            print(j.pop(),end='')
        print(end=' ') 
