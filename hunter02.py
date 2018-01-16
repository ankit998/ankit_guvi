n = int (input())
f=0
if n<=20 and n>0:
  f=1
  for i in range(2,n+1):
    f=f*i
elif n==0:
  f=1
print(f)
    
