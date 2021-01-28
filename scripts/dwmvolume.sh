#!/bin/bash 

volume="$(pactl list sinks | grep '^[[:space:]]Volume:' | \
    head -n $(( $SINK + 1 )) | tail -n 1 | sed -e 's,.* \([0-9][0-9]*\)%.*,\1,')"
icon=""
printf " %s  %s" "$icon" "$volume%"


case $BLOCK_BUTTON in
    1) echo "Please work =( ";;
esac