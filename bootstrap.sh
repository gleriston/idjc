#!/bin/sh

function missing {
	echo "$1, is missing - please install it and try again"
	exit 1
}

function check {
	for i in $* ; do
		which $i > /dev/null || missing $i
	done
}

check autoreconf libtool autopoint convert


echo "remaking missing files in build environment"

# Directory exists in git source only.
if [ -d docsrc ]; then
  cd docsrc
  make && make doc
  cd ..
fi

cd libshout-idjc
autoreconf -ifs
cd ..
autoreconf -ifs
