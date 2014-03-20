filename="$(basename $1)"
filename="${filename%.*}"
f1="$filename.dia"
f2="$filename.svg"
f3="$filename.png"

dia --verbose -e "$f2" -t svg "$f1"
rsvg-convert "$f2" -o "$f3"
rm "$f2"
