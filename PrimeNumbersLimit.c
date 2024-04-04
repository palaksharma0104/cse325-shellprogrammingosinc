#! /usr/bin/bash

echo "Enter a Number: " 
read a

for ((i=2; i<=a; i++))
do
	n=0
	for ((j=2; j<i; j++))
	do
		let b=$i%$j
		if [ $b -eq 0 ]
		then 
			n=1
		fi
	done
	
	if [ $n -eq 0 ]
	then
		echo $i
	fi
done 	
