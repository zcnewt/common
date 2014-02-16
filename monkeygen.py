#!/usr/bin/python
import random
import datetime
import time

def numToChar(x):
	return {
		1: 'a',
		2: 'b',
		3: 'c',
		4: 'd',
		5: 'e',
		6: 'f',
		7: 'g',
		8: 'h',
		9: 'i',
		10: 'j',
		11: 'k',
		12: 'l',
		13: 'm',
		14: 'n',
		15: 'o',
		16: 'p',
		17: 'q',
		18: 'r',
		19: 's',
		20: 't',
		21: 'u',
		22: 'v',
		23: 'w',
		24: 'x',
		25: 'y',
		26: 'z',
	}[x]

targetSequence = 'monkey'
myTry = ''
startTime = time.time()
st = datetime.datetime.fromtimestamp(startTime).strftime('%Y-%m-%d %H:%M:%S')
print st
count = 0
while (myTry != targetSequence):
	myTry = ''
	v1 = numToChar(random.randint(1,26))
	v2 = numToChar(random.randint(1,26))	
	v3 = numToChar(random.randint(1,26))
	v4 = numToChar(random.randint(1,26))
	v5 = numToChar(random.randint(1,26))
	v6 = numToChar(random.randint(1,26))
	myTry = v1 + v2 + v3 + v4 + v5 + v6
	print myTry
	count = count + 1
endTime = time.time()
et = datetime.datetime.fromtimestamp(endTime).strftime('%Y-%m-%d %H:%M:%S')
print et
print "final count: " + str(count)
