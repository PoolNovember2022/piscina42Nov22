#! /bin/bash

arg=$#
if [ $arg -ge 1 ]; then 
	for i in $@; do
		mkdir -p ex$i
	done	
elif [ $arg -eq 0 ]; then
	echo "No arguments supplied"
fi
