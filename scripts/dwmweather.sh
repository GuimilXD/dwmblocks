#!/bin/bash
weather=$(curl -s https://wttr.in/Sao+Goncalo\?format\=%t)
icon=""
printf " %s %s \n" "$icon " "$weather"

