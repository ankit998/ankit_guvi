try:
  stl = input()
  n= len(stl)
  a=''
  for i in range(n-1,-1,-1):
    a = a[:] + stl[i]
  print(a)
except:
  print("0")
