#! /usr/bin/bash

echo "Enter a Number: "
read a

for((i=0; i<a; i++))
do
	b=$((a*i))
	echo "$a x $i = $b"
done
