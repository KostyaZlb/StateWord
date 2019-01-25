# StateWord
|Digit|15|14|13|12|11|10|9|8|7|6|5|4|3|2|1|0|
|-----|--|--|--|--|--|--|-|-|-|-|-|-|-|-|-|-|
|Value|D |D |D |D |D |D |D|D|C|C|C|C|E|S|S|S|

D - bus data.  
C - bus state.  
E - bus error.  
S - bus select.  

#### Sector mask:  
D - max value: 255 -> 8 bit -> mask: 0xFF.  
C - max value: 15 -> 4 bit -> mask: 0x0F.  
E - value: 0 or 1 -> 1 bit -> mask: 0x01.  
S - max value: 7 -> 3 bit -> mask: 0x07.  

[Link online compiler project](https://onlinegdb.com/HJFPeoum4).
