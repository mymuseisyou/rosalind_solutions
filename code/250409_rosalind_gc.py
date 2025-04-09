maxID = ""
maxContent = 0
tempID = ""
dnaLen = 0; gcCount = 0

temp = str(input())

while (temp != "") and (temp != EOFError):
    if temp[0] == '>':
        if(dnaLen == 0):
            pass
        elif(gcCount/dnaLen > maxContent):
            maxID = tempID
            maxContent = gcCount/dnaLen
        tempID = temp
        dnaLen = 0; gcCount = 0
        temp = str(input())
        continue
    
    dnaLen += len(temp)
    gcCount += temp.count('G')
    gcCount += temp.count('C')
    
    temp = str(input())
    
if(gcCount/dnaLen > maxContent):
    maxID = tempID
    maxContent = gcCount/dnaLen

maxID = maxID.replace('>', '')
print(maxID)
print(maxContent*100)