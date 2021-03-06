#!/bin/bash

if [ "$1" == "clean" ]; then
    make distclean &>/dev/null
    rm -rf m4 aclocal.m4 autom4te.cache config.guess config.sub configure depcomp INSTALL install-sh ltmain.sh missing config.log  config.status libtool 
    rm -f *.rpm *.gz
    find . -name 'Makefile' -exec rm -f {} \;
    find . -name '.deps' -exec rm -rf {} \;
    find . -name 'Makefile.in' -exec rm -f {} \;
    exit;
fi

aclocal
libtoolize --force
autoconf
automake --add-missing --force --warnings=no-portability
autoheader
make clean
