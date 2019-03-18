#!/usr/bin/ruby

########################################
#
#   ANDRIY KALINICHENKO
#   HOMEWORK 8.1
#    CS3560 SOFTWARE TOOLS - MORNING CHAD
#   OHIO UNIVERSITY
#   3/18/2019
#   MILKY WAY - EARTH
#
########################################

puts "enter a valid c++ identifier"

str = $stdin.gets#reads in a string from the user

def reg_ex(str)
    str =~ /[0-9a-zA-Z_]/
end

if !reg_ex(str)
    puts "false"
else
    puts "true" 
end

