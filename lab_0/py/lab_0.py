file = open("lab_0.txt", "r")
mySet = set()
while True:
    a =file.readline()
    if not a:
        break
    mySet.add(int(a))
    print ("For packets", min(mySet), "-", max(mySet)," there are not packets: ", 
           [x for x in range(min(mySet),max(mySet)) if x not in mySet] )
file.close()