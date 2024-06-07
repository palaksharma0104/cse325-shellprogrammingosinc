#! /usr/bin/bash

echo "Enter 1st Number: "
read a 

echo "Enter 2nd Number: "
read b

echo "Which operation do you wanna perform"
echo "1. Addition      2. Subtraction        3. Multiplication       4. Division        5. Exit Calculator Interface"
read c

if [ $c -eq 1 ]
then
	let d=$a+$b
	echo "Sum of these two numbers is: $d"
fi

if [ $c -eq 2 ]
then
	echo " "
	echo "Do you wanna Subtract: "
	echo "1. 1st no. from 2nd no."
	echo "OR"
	echo "2. 2nd no. from 1st no."
	echo "Enter 1 or 2 as per your need."
	read e
	
	if [ $e -eq 1 ]
	then
		let d=$b-$a
		echo " "
		echo "When you subtract 1st no. from 2nd no. you get: $d"
	
	elif [ $e -eq 2 ]
	then
		let d=$a-$b
		echo " "
		echo "When you subtract 2nd no. from 1st no. you get: $d"
	fi
fi

if [ $c -eq 3 ]
then
	let d=$a*$b
	echo "Multiplication of these two numbers is: $d"
fi

if [ $c -eq 4 ]
then
	echo " "
	echo "Do you wanna Divide: "
	echo "1. 1st no. by 2nd no."
	echo "OR"
	echo "2. 2nd no. by 1st no."
	echo "Enter 1 or 2 number as per your need."
	read e
	
	if [ $e -eq 1 ]
	then
		echo " "
		echo "When you divide 1st no. by 2nd no. you get: " 
		echo "scale=2; $a/$b" | bc
	
	elif [ $e -eq 2 ]
	then
		echo " "
		echo "When you divide 2nd no. by 1st no. you get: "
		echo "scale=2; $b/$a" | bc
	fi
fi

