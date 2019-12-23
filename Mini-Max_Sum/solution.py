#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr.sort()
    mini=0
    for i in range(len(arr)-1):
        mini=mini+arr[i]
    
    arr.sort(reverse=True)
    maxi=0
    for i in range(len(arr)-1):
        maxi=maxi+arr[i]
    
    print(mini,maxi)

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

