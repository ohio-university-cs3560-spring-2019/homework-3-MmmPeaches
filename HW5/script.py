#!/usr/bin/python


########################################
#
#   ANDRIY KALINICHENKO
#   CS3560 SOFTWARE TOOLS - MORNING CHAD
#   OHIO UNIVERSITY
#   HOMEWORK 5
#   2/25/2019
#   MILKY WAY - EARTH
#
########################################

import os#lets us use os

path = os.listdir(os.getcwd())#this specifies the currenty working directory, which is the directory this .py will run in

#here's all the stuff which will be counted
lines = 0
words = 0
chars = 0

for x in path:#here's a loop which will through each file(x) in the specified directory(path)

    with open(x) as input:#here in the loop it opens the x it's at and loads it into input
        #right below is the loop which goes through each line in the file and add's it to the previous count of stuff
        for line in input:
            #wordnumber number of words in a line from the file, line.split, sperates it word by word
            wordnumber = line.split()
            #counts the total number of words, adds to previous stuff
            words += len(wordnumber)
            #counts the number of lines, adds to previous stuff
            lines += 1
            #adds the number of characters, adds to previous stuff
            chars += sum(len(words) for words in wordnumber)
#prints total numbers found after the loops
print("TOTAL\n")
print("lines: ", lines,"\n")
print("words: ", words,"\n")
print("Characters: ", chars, "\n")