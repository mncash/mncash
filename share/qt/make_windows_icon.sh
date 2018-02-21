#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/mncash.ico

convert ../../src/qt/res/icons/mncash-16.png ../../src/qt/res/icons/mncash-32.png ../../src/qt/res/icons/mncash-48.png ${ICON_DST}
