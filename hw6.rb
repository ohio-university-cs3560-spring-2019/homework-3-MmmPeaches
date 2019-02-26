#!/usr/bin/ruby

########################################
#
#   ANDRIY KALINICHENKO
#   CS3560 SOFTWARE TOOLS - MORNING CHAD
#   OHIO UNIVERSITY
#   2/25/2019
#   MILKY WAY - EARTH
#
########################################

str = $stdin.gets#reads in a string from the user

str = str.gsub(/\bf/, 'gh')#replaces f with gh if f is at begining
str = str.gsub(/sh\b/, 'ti')#replaces sh with ti if ti is at the end
str = str.gsub(/\Bi\B/, 'o')#replaces i with o if i is in the middle

puts str#prints out the string