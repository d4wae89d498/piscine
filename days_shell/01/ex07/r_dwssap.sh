cat /etc/passwd | sed '/^#/ d' | awk 'NR%2==0' | awk -F":" '{print $1 }' | rev | sort -dr | cat | tail -n $FT_LINE1 | head -n $(($FT_LINE2-$FT_LINE1+1)) | tr '\n' ',' | sed '$ s/.$/./' | sed '$ s/.$/./' | sed "s/,/, /g" | tr -d '\n'