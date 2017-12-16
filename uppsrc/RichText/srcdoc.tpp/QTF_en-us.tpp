topic "QTF";
[2 $$0,0#00000000000000000000000000000000:Default]
[@(128.0.255)2 $$1,0#65874547464505293575048467215454:QTF Chr]
[*/+117 $$2,0#07143242482611002448121871408047:title]
[*C@3+75 $$3,3#36268203433472503231438721581057:code]
[{_}%EN-US 
[s0;= [*8 QTF]&]
[s0; &]
[s0; QTF is the native format of Ultimate`+`+ rich texts (formatted 
texts).&]
[s0; &]
[s0; It is byte oriented format. Bytes with values 2`-31 are ignored. 
Other values are interpreted as characters or formatting commands.&]
[s0; &]
[s0; Letters ([@4 a]`-[@4 zA]`-[@4 Z]), numbers ([@4 0]`-[@4 9]), space (32) 
and characters&]
[s0; &]
[s0; [*@4 . , ; ! ? % ( ) / < > #]&]
[s0; &]
[s0; and bytes greater than 127 are guaranteed to be never used as 
command characters (not even in future versions of QTF). Other 
characters should be prefixed with escape character `` (reverse 
apostrophe). Group of characters can be escaped using byte 1. 
Example:&]
[s0; &]
[s3; `"`\1a`[x`]`\1`[`* bold`]`"&]
[s0; &]
[s0; Byte 0 represents the end of input sequence.&]
[s0; &]
[s0; Dimension units of QTF are dots `- one dot is defined as 1/600 
of inch.&]
[s0; &]
[s0; Colors are described as either number [@(128.0.255) 0]`-[@(128.0.255) 9], 
with meaning&]
[s0; &]
[ {{1000:1000:1000:1000:1000:1000:1000:1000:1000:1000<96;>96;f4; [s0;%- [* 0]]
:: [s0;%- [* 1]]
:: [s0;%- [* 2]]
:: [s0;%- [* 3]]
:: [s0;%- [* 4]]
:: [s0;%- [* 5]]
:: [s0;%- [* 6]]
:: [s0;%- [* 7]]
:: [s0;%- [* 8]]
:: [s0;%- [* 9]]
::l/0r/0t/0b/0@0 [s0; ]
::@1 [s0; ]
::@2 [s0; ]
::@3 [s0; ]
::@4 [s0; ]
::@5 [s0; ]
::@6 [s0; ]
::@7 [s0; ]
::@8 [s0; ]
::@9 [s0; ]
::l/25r/25t/15b/15@2 [s0;%- [1 Black]]
:: [s0; [1 LtGray]]
:: [s0; [1 White]]
:: [s0;%- [1 Red]]
:: [s0;%- [1 Green]]
:: [s0;%- [1 Blue]]
:: [s0;%- [1 LtRed]]
:: [s0;%- [1 WhiteGray]]
:: [s0;%- [1 LtCyan]]
:: [s0;%- [1 Yellow]]}}&]
[s0; &]
[s0; or letters&]
[s0; &]
[ {{1109:1109:1109:1109:1109:1109:1109:1109:1128<96;>96;f4; [s0;%- [*C@(128.0.255) b]]
:: [s0;%- [*C@(128.0.255) c]]
:: [s0;%- [*C@(128.0.255) g]]
:: [s0;%- [*C@(128.0.255) k]]
:: [s0;%- [*C@(128.0.255) l]]
:: [s0;%- [*C@(128.0.255) m]]
:: [s0;%- [*C@(128.0.255) o]]
:: [s0;%- [*C@(128.0.255) r]]
:: [s0;%- [*C@(128.0.255) y]]
::l/0r/0t/0b/0@5 [s0; ]
::@(0.128.128) [s0; ]
::@4 [s0; ]
::@0 [s0; ]
::@1 [s0; ]
::@(128.0.255) [s0; ]
::@(128.128.0) [s0; ]
::@3 [s0; ]
::@9 [s0; ]
::l/25r/25t/15b/15@2 [s0;%- [1 Blue]]
:: [s0;%- [1 Cyan]]
:: [s0;%- [1 Green]]
:: [s0;%- [1 Black]]
:: [s0;%- [1 LtGray]]
:: [s0;%- [1 Magenta]]
:: [s0;%- [1 Brown]]
:: [s0;%- [1 Red]]
:: [s0;%- [1 Yellow]]}}&]
[s0; &]
[ {{1109:1109:1109:1109:1109:1109:1109:1109:1128<96;>96;f4; [s0;%- [*@(128.0.255) B]]
:: [s0;%- [*@(128.0.255) C]]
:: [s0;%- [*@(128.0.255) G]]
:: [s0;%- [*@(128.0.255) K]]
:: [s0;%- [*@(128.0.255) L]]
:: [s0;%- [*@(128.0.255) M]]
:: [s0;%- [*@(128.0.255) W]]
:: [s0;%- [*@(128.0.255) R]]
:: [s0;%- [*@(128.0.255) Y]]
::l/0r/0t/0b/0@(0.0.255) [s0; ]
::@8 [s0; ]
::@(0.255.0) [s0; ]
::@(128) [s0; ]
::@(238) [s0; ]
::@(255.0.255) [s0; ]
::@2 [s0; ]
::@6 [s0; ]
::@(255.255.180) [s0; ]
::l/25r/25t/15b/15@2 [s0;%- [1 LtBlue]]
:: [s0;%- [1 LtCyan]]
:: [s0;%- [1 LtGreen]]
:: [s0;%- [1 Gray]]
:: [s0;%- [1 WhiteGray]]
:: [s0;%- [1 LtMagenta]]
:: [s0;%- [1 White]]
:: [s0;%- [1 LtRed]]
:: [s0;%- [1 LtYellow]]}}&]
[s0; &]
[s0; or as the RGB value in form&]
[s0; &]
[s0; [@(128.0.255) (][/@(0.0.255) number][@(128.0.255) .][/@(0.0.255) number][@(128.0.255) .][/@(0.0.255) n
umber][@(128.0.255) )]&]
[s0;@(128.0.255) &]
[s0; where [/@(0.0.255) number] is 0`-255.&]
[s0; &]
[s0; Form with single [/@(0.0.255) number]&]
[s0; &]
[s0; [@(128.0.255) (][/@(0.0.255) number][@(128.0.255) )]&]
[s0;@(128.0.255) &]
[s0; specifies grays.&]
[s0; &]
[s0; Letter&]
[s0; &]
[s0; [@(128.0.255) N]&]
[s0;@(128.0.255) &]
[s0; used in place of color designates transparent color.&]
[s0; &]
[s0; &]
[s2; Basic QTF codes&]
[s0; &]
[s0; &]
[ {{2003:7997<96;>96; [s0; [C@(128.0.255) `_]]
:: [s0; Hard`-space `- space that cannot be divided at the end of line.]
:: [s0; [C@(128.0.255) `&]]
:: [s0; New paragraph.]
:: [s0; [C@(128.0.255) `-`|]]
:: [s0; Tabulator]
:: [s0;%- [%%C@(128.0.255) `@`$][%%*C@(0.0.255) hex][C@(128.0.255) ;]]
:: [s0; Unicode character as hexadecimal number.]}}&]
[s0; &]
[s0; &]
[s2; Character and paragraph formatting&]
[s0; &]
[s0; Character and paragraph formatting starts with&]
[s0;@(128.0.255) &]
[s0; [@(128.0.255) `[]&]
[s0;@(128.0.255) &]
[s0; character followed by [*/ character/paragraph formating][/  sequence] 
ended with single space character and applies to the text until 
matching&]
[s0; &]
[s0; [@(128.0.255) `]]&]
[s0;@(128.0.255) &]
[s0; is encountered.&]
[s0; &]
[ {{1879:8121^@(229.229.248)-1 [s0; [*/ Character/paragraph formating sequence]]
::=@2 [s0;%- ]
::^ [s0;%- [C@(128.0.255) /]]
::= [s0; Italic.]
::^ [s0;%- [C@(128.0.255) `*]]
::= [s0; Bold.]
::^ [s0;%- [C@(128.0.255) `_]]
::= [s0; Underline.]
::^ [s0;%- [C@(128.0.255) `-]]
::= [s0; Strikeout.]
::^ [s0;%- [C@(128.0.255) c]]
::= [s0; Capitals.]
::^ [s0;%- [C@(128.0.255) ``]]
::= [s0; Superscript.]
::^ [s0;%- [C@(128.0.255) ,]]
::= [s0; Subscript.]
::^ [s0;%- [C@(128.0.255) d]]
::= [s0; Dashed underline.]
::^ [s0;%- [C@(128.0.255) T]]
::= [s0; Non anti aliased font.]
::^ [s0;%- [C@(128.0.255) `^][/C@(0.0.255) text][C@(128.0.255) `^]]
::= [s0; Hyperlink.]
::^ [s0;%- [C@(128.0.255) I][/C@(0.0.255) text][C@(128.0.255) ;]]
::= [s0; Index entry.]
::^ [s0;%- [C@(128.0.255) `+][/C@(0.0.255) number]]
::= [s0; Font height in dots.]
::^ [s0;%- [C@(128.0.255) 0]]
::= [s0; Font height 50 dots (6 points).]
::^ [s0;%- [C@(128.0.255) 1]]
::= [s0; Font height 67 dots (8 points).]
::^ [s0;%- [C@(128.0.255) 2]]
::= [s0; Font height 84 dots (10 points).]
::^ [s0;%- [C@(128.0.255) 3]]
::= [s0; Font height 100 dots (12 points).]
::^ [s0;%- [C@(128.0.255) 4]]
::= [s0; Font height 134 dots (16 points).]
::^ [s0;%- [C@(128.0.255) 5]]
::= [s0; Font height 167 dots (20 points).]
::^ [s0;%- [C@(128.0.255) 6]]
::= [s0; Font height 200 dots (24 points).]
::^ [s0;%- [C@(128.0.255) 7]]
::= [s0; Font height 234 dots (28 points).]
::^ [s0;%- [C@(128.0.255) 8]]
::= [s0; Font height 300 dots (36 points).]
::^ [s0;%- [C@(128.0.255) 9]]
::= [s0; Font height 400 dots (48 points).]
::^ [s0;%- [C@(128.0.255) `@][/C@(0.0.255) color]]
::= [s0; Text color.]
::^ [s0;%- [C@(128.0.255) `$][/C@(0.0.255) color]]
::= [s0; Text background color.]
::^ [s0;%- [C@(128.0.255) A]]
::= [s0; Arial font.]
::^ [s0;%- [C@(128.0.255) R]]
::= [s0; Times New Roman font.]
::^ [s0;%- [C@(128.0.255) C]]
::= [s0; Courier font.]
::^ [s0;%- [C@(128.0.255) G]]
::= [s0; Standard GUI font.]
::^ [s0;%- [C@(128.0.255) g]]
::= [s0; Standard GUI font with standard height.]
::^ [s0;%- [C@(128.0.255) S]]
::= [s0; Symbol font.]
::^ [s0;%- [C@(128.0.255) .][/C@(0.0.255) number]]
::= [s0; Font with specified font [/@(0.0.255) number].]
::^ [s0;%- [C@(128.0.255) !][/C@(0.0.255) text][C@(128.0.255) !]]
::= [s0; Font with face name equal to [/@(0.0.255) text]. If such font 
does not exist on system, Arial is used.]
::^ [s1;%- [C `{][/C@(0.0.255) charset][C `}]&]
[s0; ]
::= [s0; Character set. It can be defined as either single character&]
[s0; &]
[ {{1840:8160<330;>1757;f4;h1; [s0; [C@(128.0.255) `_]]
:: [s0; utf`-8]
:: [s0; [C@(128.0.255) 0]]
:: [s0; windows`-1250]
:: [s0; [C@(128.0.255) 1]]
:: [s0; windows`-1251]
:: [s0; [C@(128.0.255) 2]]
:: [s0; windows`-1252]
:: [s0; [C@(128.0.255) 3]]
:: [s0; windows`-1253]
:: [s0; [C@(128.0.255) 4]]
:: [s0; windows`-1254]
:: [s0; [C@(128.0.255) 5]]
:: [s0; windows`-1255]
:: [s0; [C@(128.0.255) 6]]
:: [s0; windows`-1256]
:: [s0; [C@(128.0.255) 7]]
:: [s0; windows`-1257]
:: [s0; [C@(128.0.255) A]]
:: [s0; iso`-8859`-1]
:: [s0; [C@(128.0.255) B]]
:: [s0; iso`-8859`-2]
:: [s0; [C@(128.0.255) C]]
:: [s0; iso`-8859`-3]
:: [s0; [C@(128.0.255) D]]
:: [s0; iso`-8859`-4]
:: [s0; [C@(128.0.255) E]]
:: [s0; iso`-8859`-5]
:: [s0; [C@(128.0.255) F]]
:: [s0; iso`-8859`-6]
:: [s0; [C@(128.0.255) G]]
:: [s0; iso`-8859`-7]
:: [s0; [C@(128.0.255) H]]
:: [s0; iso`-8859`-8]
:: [s0; [C@(128.0.255) I]]
:: [s0; iso`-8859`-9]
:: [s0; [C@(128.0.255) J]]
:: [s0; iso`-8859`-10]}}&]
[s0; &]
[s0; or as the string designating character set (example: [*C@3 `"`[`{`_`}_...`]`"][* , 
][*C@3 `"`[`{windows`-1250`}_...`]`"]).]
::^ [s0;%- [C@(128.0.255) %][/C@(0.0.255) lang]]
::= [s0; Language. It is defined in form [@(0.0.255) XX]`-[@(0.0.255) YY], 
according to ISO 639 and ISO 3166 standards. (example: [*C@3 `"`[%EN`-US_...`]`"]). 
[*C@3 `"`[%00`-00_`"] represents `"none`" language. As special 
optimization, [*@(128.0.255) %`-] is equivalent to [@(128.0.255) %][@(0.0.255) 00`-00] 
(no language) and&]
[s0; [@(128.0.255) %%] is equivalent to [@(128.0.255) %][@(0.0.255) EN`-US].]
::^ [s0;%- [C@(128.0.255) :][/C@(0.0.255) text][C@(128.0.255) :]]
::= [s0; Paragraph label.]
::^ [s0;%- [C@(128.0.255) <]]
::= [s0; Align paragraph left.]
::^ [s0;%- [C@(128.0.255) `=]]
::= [s0; Center paragraph.]
::^ [s0;%- [C@(128.0.255) >]]
::= [s0; Align paragraph right.]
::^ [s0;%- [C@(128.0.255) #]]
::= [s0; Justify paragraph.]
::^ [s0;%- [C@(128.0.255) l][/C@(0.0.255) number]]
::= [s0; Left margin in dots.]
::^ [s0;%- [C@(128.0.255) r][/C@(0.0.255) number]]
::= [s0; Right margin in dots.]
::^ [s0;%- [C@(128.0.255) i][/C@(0.0.255) number]]
::= [s0; Indent in dots.]
::^ [s0;%- [C@(128.0.255) pn]]
::= [s0; Line spacing 1.0.]
::^ [s0;%- [C@(128.0.255) ph]]
::= [s0; Line spacing 1.5.]
::^ [s0;%- [C@(128.0.255) pd]]
::= [s0; Line spacing 2.0.]
::^ [s0;%- [C@(128.0.255) H][/C@(0.0.255) number]]
::= [s0; Horizontal ruler height (if zero, there is no ruler).]
::^ [s0;%- [C@(128.0.255) h][/C@(0.0.255) color]]
::= [s0; Color of horizontal ruler (default is black).]
::^ [s0;%- [C@(128.0.255) L][/C@(0.0.255) number]]
::= [s0; Style of horizontal ruler line, 0 `- solid color, 1 `- dots, 
2 `- dashes]
::^ [s0;%- [C@(128.0.255) b][/C@(0.0.255) number]]
::= [s0; Space before paragraph in dots.]
::^ [s0;%- [C@(128.0.255) a][/C@(0.0.255) number]]
::= [s0; Space after paragraph in dots.]
::^ [s0;%- [C@(128.0.255) P]]
::= [s0; Page break before paragraph.]
::^ [s0;%- [C@(128.0.255) k]]
::= [s0; Keep paragraph on single page.]
::^ [s0;%- [C@(128.0.255) K]]
::= [s0; Keep paragraph on same page as next one. Only works well for 
binding two paragraphs (does not propagate further). If you need 
to bind more, use organizing table [@(128.0.255) `{`{`*K ][/ text][@(128.0.255) `}`}]]
::^ [s0;%- [C@(128.0.255) Q]]
::= [s0; Orphan control.]
::^ [s0;%- [C@(128.0.255) n][/C@(0.0.255) text][C@(128.0.255) ;]]
::= [s0; Text to insert before paragraph number.]
::^ [s0;%- [C@(128.0.255) m][/C@(0.0.255) text][C@(128.0.255) ;]]
::= [s0; Text to insert after paragraph number.]
::^ [s0;%- [C@(128.0.255) N]]
::= [s0; Numbering. It is followed by up to 8 characters defining numbering 
style of each level&]
[s0; &]
[ {{864:9136<342;>861;f4; [s0; [C@(128.0.255) `-]]
:: [s0; Level is not used.]
:: [s0; [C@(128.0.255) 1]]
:: [s0; Numbers, starting with 1.]
:: [s0; [C@(128.0.255) 0]]
:: [s0; Numbers, starting with 0.]
:: [s0; [C@(128.0.255) a]]
:: [s0; Lowercase letters, starting with a.]
:: [s0; [C@(128.0.255) A]]
:: [s0; Uppercase letters, starting with A.]
:: [s0; [C@(128.0.255) i]]
:: [s0; Lowercase roman numbers, starting with i.]
:: [s0; [C@(128.0.255) I]]
:: [s0; Uppercase roman numbers, starting with I]}}&]
[s0; &]
[s0; If after 8 numbering style characters there is a `'[@(128.0.255) !]`' 
suffix, the reset is performed for those numbering levels that 
are used. If all levels are not used, reset is performed for 
the top`-level.]
::^ [s0;%- [C@(128.0.255) o]]
::= [s0; Bullet style.]
::^ [s0;%- [C@(128.0.255) O`_]]
::= [s0; No bullet.]
::^ [s0;%- [C@(128.0.255) O0]]
::= [s0; Bullet style.]
::^ [s0;%- [C@(128.0.255) O1]]
::= [s0; Bullet style.]
::^ [s0;%- [C@(128.0.255) O2]]
::= [s0; Bullet style.]
::^ [s0;%- [C@(128.0.255) O3]]
::= [s0; Bullet style.]
::^ [s0;%- [C@(128.0.255) O9]]
::= [s0; Text bullet style.]
::^ [s0;%- [C@(128.0.255) t][/C@(0.0.255) number]]
::= [s0; Default tab size.]
::^ [s0;%- [C@(128.0.255) `~]]
::= [s0; Tabulator setting. Can be followed by character designating 
type of tabulation&]
[s0; &]
[ {{864:9136<342;>861;f4; [s0; [C@(128.0.255) >]]
:: [s0; Normal tabulation.]
:: [s0; [C@(128.0.255) <]]
:: [s0; Left tabulation.]
:: [s0; [C@(128.0.255) `=]]
:: [s0; Centered tabulation.]}}&]
[s0; &]
[s0; (default is normal) and by filler character &]
[s0; &]
[ {{3312:3436:3252<342;>861;f4; [s0; [C@(128.0.255) .]]
:: [s0; [C@(128.0.255) `-]]
:: [s0; [C@(128.0.255) `_]]}}&]
[s0; &]
[s0; and is followed by number specifying tabulator position in dots. 
The number can be preceded by [C@(128.0.255) >] `- in that case, 
position is relative to the right side.&]
[s0; &]
[s0; When followed by [C@(128.0.255) `~] ([*C@3 `"`~`~`"]), clears all 
current tab settings (including those inherited from paragraph 
style).]
::^ [s0;%- [C@(128.0.255) ;]]
::= [s0; NOP  separator. In some cases it is needed to separate command 
code. Example: [*C@3 `"`[l200;4 `"]]
::^ [s1; [%-C s][/C@(0.0.255) number]&]
[s0; [%-C@(128.0.255) s][/C@(0.0.255) `"text`"]]
:: [s0; Paragraph style, either defined by style number, or style name.]
:: [s0;%- [C tP][/C@(0.0.255) qtf][C@(128.0.255) `^`^][/C@(0.0.255) qtf][C@(128.0.255) `^`^]]
:: [s0; New text header  / footer, [%-/C@(0.0.255) qtf] is complete embeded 
QTF representing header/footer. This QTF can contain field[@5  
`{:VALUE:PAGENUMBER:`} ]to represent page number and[@5  `{:VALUE:PAGECOUNT:`}] 
to represent total number of pages.]}}&]
[s0;3 &]
[s0;3 &]
[s2; Styles&]
[s0; &]
[s0; Paragraph styles are defined using normal character/paragraph 
formatting sequence with&]
[s0; &]
[s0; [@(128.0.255) `$`$][/@(0.0.255) number][@(128.0.255) ,][/@(0.0.255) nnumber][@(128.0.255) #
][/@(0.0.255) uuid][@(128.0.255) :][/@(0.0.255) name]&]
[s0; &]
[s0; instead of text, where&]
[s0; &]
[ {{1879:8121^ [s0;%- [@(0.0.255) number]]
:: [s0; Number of style `- can be used with [@(128.0.255) s] paragraph 
format command code.]
:: [s0;%- [@(0.0.255) nnumber]]
:: [s0; Number of style of next paragraph `- used by RichText editor 
when inserting paragraphs.]
:: [s0;%- [@(0.0.255) uuid]]
:: [s0; 32 digit unique hexadecimal identifier of style.]
:: [s0;%- [@(0.0.255) name]]
:: [s0; Name of style, displayed by editors. Can also be used with [@(128.0.255) s] 
paragraph format command code.]}}&]
[s0; &]
[s0; Style with [@(0.0.255) number] `= 0 and [@(0.0.255) uuid `= ]00000000000000000000000
000000000 is [*/ default] style.&]
[s0; &]
[s0; Example:&]
[s0; &]
[s0; [C@3 `"`[`*/`+117 `$`$2,0#07143242482611002448121871408047:title`]`"]&]
[s0;@(0.0.255) &]
[s0;@(0.0.255) &]
[s2; Objects&]
[s0;@(0.0.255) &]
[s0; Object plays the role of the single character and is displayed 
according to its type. It is started with a header in the form&]
[s0; &]
[s0; [@(128.0.255) `@`@][/@(0.0.255) format][@(128.0.255) :][/@(0.0.255) cx][@(128.0.255) `&][/@(0.0.255) c
y]&]
[s0;@(0.0.255) &]
[s0;%- or&]
[s0;%- &]
[s0; [@(128.0.255) `@`@][/@(0.0.255) format][@(128.0.255) :][/@(0.0.255) cx][@(128.0.255) `*][/@(0.0.255) c
y]&]
[s0;%- &]
[s0;%- where&]
[s0; &]
[ {{1879:8121^ [s0; [@(0.0.255) format]]
:: [s0; Format of objects. This format must be recognized by the application. 
By default, RichText recognizes the PNG format and [*/ iml] format 
(see bellow).]
:: [s0; [@(0.0.255) cx]]
:: [s0; Width of object in dots.]
:: [s0; [@(0.0.255) cy]]
:: [s0; Height of object in dots.]}}&]
[s0;@(0.0.255) &]
[s0; First form with `'[@(128.0.255) `&]`' activates `"keep aspect 
ratio`" for the object, second form with `'[@(128.0.255) `*]`' 
leaves this option inactive.&]
[s0; &]
[s0; Optionally, there can be 3rd number, separated by `'[@(128.0.255) /]`' 
character. This number represent vertical placement of object, 
default value 0 means that bottom border of object is aligned 
with baseline of text.&]
[s0; &]
[s0; If header is followed by `'```' character, object data are in 
text format. In that case, object data are terminated with another 
`'```' character. If there needs to be `'```' in the text, `'`````' 
can be used as escape sequence.&]
[s0; &]
[s0; If header is followed by `'(`', it countains BASE64 encoded 
binary data, ending with `')`'. [* This is default format for binary 
data].&]
[s0; &]
[s0; If there is no `'```' nor `'(`', header is in binary 7 bit format. 
Bit 7 of data bytes is always 1, so that actual data bytes are 
in range 128`-255. First byte in range 32`-127 ends data sequence. 
Data are encoded in 7 byte groups, which corresponds to 8 bytes 
of encoded format. First byte of this 8 bytes block always contains 
eight bits of following bytes, LSB (that is bit 0) being the 
eight bit for first byte in block. [/ This format is deprecated.]&]
[s0; &]
[s0; [*/3 iml][*3  format]&]
[s0;* &]
[s0; [*/ iml][*  ]format is text format of rich object where text data 
reference existing .iml based Image as pair [@(0.0.255) iml`_class`_name]:[@(0.0.255) i
mage`_name]. Example of full object definition in [*/ iml] format:&]
[s0; &]
[s0; [*C@3 `"`@`@iml:400`*400``CtrlImg:exclamation```"]&]
[s0;@(0.0.255) &]
[s0;@(0.0.255) &]
[s2; Fields&]
[s0;@(0.0.255) &]
[s0; Fields are special elements of text that are evaluated by client 
code into rich text. QTF format for fields is&]
[s0;@(0.0.255) &]
[s0; [@(128.0.255) `{:][/@(0.0.255) field`_type`_id][@(128.0.255) :][/@(0.0.255) parameter][@(128.0.255) :
`}]&]
[s0;@(128.0.255) &]
[ {{1879:8121^ [s0; [@(0.0.255) field`_type`_id]]
:: [s0; Type of field. Field types are represented by RichPara`::FieldType 
derived instances and registred using RichPara`::Register function.]
:: [s0; [@(0.0.255) parameter]]
:: [s0; Additional string parameter that gets passed to FieldType`::Evaluate 
method]}}&]
[s0;@(128.0.255) &]
[s0;@(0.0.255) &]
[s0;3 &]
[s2; Tables&]
[s0; &]
[s0; Table definition starts with&]
[s0;3 &]
[s0; [@(128.0.255) `{`{]&]
[s0;@(128.0.255) &]
[s0; pair, followed by set of numbers separated with&]
[s0; &]
[s0; [@(128.0.255) :]&]
[s0;@(128.0.255) &]
[s0; Numbers represent ratios of column widths; count of numbers 
is equivalent to count of columns. Next there is [/ table/cell 
formatting sequence] ended with single space character. Cells 
are separated with&]
[s0; &]
[s0; [@(128.0.255) `::]&]
[s0;@(128.0.255) &]
[s0; characters and another table/cell formating sequence (to setup 
format for each individual cell). Formating of cells is inherited 
from previous cells. Table ends with&]
[s0; &]
[s0; [@(128.0.255) `}`}]&]
[s0;@(128.0.255) &]
[s0; pair.&]
[s0; &]
[ {{1993:8007^@(229.229.248)-1 [s0; [*/ Table/cell formating sequence]]
::=@2 [s0;%- ]
::^ [s0;%- [C@(128.0.255) <][/C@(0.0.255) number]]
:: [s0; Left margin of table in dots.]
:: [s0;%- [C@(128.0.255) >][/C@(0.0.255) number]]
:: [s0; Right margin of table in dots.]
:: [s0;%- [C@(128.0.255) B][/C@(0.0.255) number]]
:: [s0; Space before table in dots.]
:: [s0;%- [C@(128.0.255) A][/C@(0.0.255) number]]
:: [s0; Space after table in dots.]
:: [s0;%- [C@(128.0.255) f][/C@(0.0.255) number]]
:: [s0; Frame thickness in dots. Frame is outer border of table. Default 
value is 10.]
:: [s0;%- [C@(128.0.255) F][/C@(0.0.255) color]]
:: [s0; Color of the frame.]
:: [s0; [%-C@(128.0.255) g][/C@(0.0.255) number]]
:: [s0; Grid thickness in dots. Grid are lines dividing cells inside 
table. Default value is 4.]
:: [s0;%- [C@(128.0.255) G][/C@(0.0.255) color]]
:: [s0; Color of the grid.]
:: [s0;%- [C@(128.0.255) k]]
:: [s0; Keep the cell on single page.]
:: [s0;%- [C@(128.0.255) K]]
:: [s0; Keep the table on single page.]
:: [s0;%- [C@(128.0.255) `~]]
:: [s0; Sets grid and frame thickness to zero. Useful when using tables 
to organize text.]
:: [s0; [%-C@(128.0.255) h][/C@(0.0.255) number]]
:: [s0; Number of header rows. Header rows are repeated at the beginning 
of every page.]
:: [s0;%- [C@(128.0.255) `^]]
:: [s0; Cell aligns to top.]
:: [s0;%- [C@(128.0.255) `=]]
:: [s0; Cell aligns to center (vertical). Default.]
:: [s0;%- [C@(128.0.255) v]]
:: [s0; Cell aligns to bottom.]
:: [s1; [%-C l][/C@(0.0.255) number/number]&]
[s0; [%-C@(128.0.255) l][/C@(0.0.255) number]&]
[s0; [%-C@(128.0.255) l][/C@(0.0.255) /number]]
:: [s0; Sets left cell border (first [/@(0.0.255) number]) and margin 
in dots. If any of numbers is missing, sets only the one present. 
Default is border: 0, margin: 25.]
:: [s1; [C r][/C@(0.0.255) number/number]&]
[s0; [C@(128.0.255) r][/C@(0.0.255) number]&]
[s0; [C@(128.0.255) r][/C@(0.0.255) /number]]
:: [s0; Sets right cell border (first [/@(0.0.255) number]) and margin 
in dots. If any of numbers is missing, sets only the one present. 
Default is border: 0, margin: 25.]
:: [s1; [C t][/C@(0.0.255) number/number]&]
[s0; [C@(128.0.255) t][/C@(0.0.255) number]&]
[s0; [C@(128.0.255) t][/C@(0.0.255) /number]]
:: [s0; Sets top cell border (first [/@(0.0.255) number]) and margin in 
dots. If any of numbers is missing, sets only the one present. 
Default is border: 0, margin: 15.]
:: [s1; [C b][/C@(0.0.255) number/number]&]
[s0; [C@(128.0.255) b][/C@(0.0.255) number]&]
[s0; [C@(128.0.255) b][/C@(0.0.255) /number]]
:: [s0; Sets bottom cell border (first [/@(0.0.255) number]) and margin 
in dots. If any of numbers is missing, sets only the one present. 
Default is border: 0, margin: 15.]
:: [s1; [C a][/C@(0.0.255) number/number]&]
[s0; [C@(128.0.255) a][/C@(0.0.255) number]&]
[s0; [C@(128.0.255) a][/C@(0.0.255) /number]]
:: [s0; Sets all cell borders (first [/@(0.0.255) number]) and margins 
in dots. If any of numbers is missing, sets only the one present.]
:: [s0; [C@(128.0.255) `*]]
:: [s0; Same as f0g0a0/0 `- sets everything to zero to use table as 
organizing element.]
:: [s0; [C@(128.0.255) o]]
:: [s0; Sets round border.]
:: [s0; [C@(128.0.255) `@][/C@(0.0.255) color]]
:: [s0; Cell background color. Default is White.]
:: [s0; [C@(128.0.255) R][/C@(0.0.255) color]]
:: [s0; Cell border color. Default is Black.]
:: [s0; [C@(128.0.255) !]]
:: [s0; Resets cell formatting to default values.]
:: [s0; [C@(128.0.255) H][/C@(0.0.255) number]]
:: [s0; Sets the minimal height of cell (and therefore also of row) 
in dots.]
:: [s0; [C@(128.0.255) `-][/C@(0.0.255) number]]
:: [s0; Horizontal cell span.]
:: [s0; [C@(128.0.255) `|][/C@(0.0.255) number]]
:: [s0; Vertical cell span.]
:: [s0; [C@(128.0.255) ;]]
::= [s0; NOP  separator. In some cases it helps to separate command code.]
::^ [s0; [C@(128.0.255) P]]
::= [s0; Page break before table.]
::^ [s0;%- [%%C@(128.0.255) T][/C@(0.0.255) qtf][C@(128.0.255) `^`^][/C@(0.0.255) qtf][C@(128.0.255) `^
`^]]
:: [s0; New text header  / footer, [%-/C@(0.0.255) qtf] is complete embeded 
QTF representing header/footer. This QTF can contain field[@5  
`{:VALUE:PAGENUMBER:`} ]to represent page number and[@5  `{:VALUE:PAGECOUNT:`}] 
to represent total number of pages.]}}&]
[s0;3 &]
[s0; Note: There is also legacy support for old table format (from 
previous QTF version) that is based on [@(128.0.255) `+`+ ]pair 
as table start/stop and [@(128.0.255) `|`| `-`-] to divide cells/lines. 
&]
[s0;3 &]
[s0;3 &]
[s2; Global Header and Footer&]
[s0; &]
[s0; Global text header is defined using [%-C@(128.0.255) `^H][%-/C@(0.0.255) qtf`_text][%-C@(128.0.255) `^
`^], footer [%-C@(128.0.255) `^F][%-/C@(0.0.255) qtf`_text][%-C@(128.0.255) `^`^], 
where [%-/C@(0.0.255) qtf`_text] is complete embeded QTF representing 
header/footer. This QTF can contain field[@5  `{:VALUE:PAGENUMBER:`} 
]to represent page number and[@5  `{:VALUE:PAGECOUNT:`}] to represent 
total number of pages. Global page header and footer can be changed 
by paragraph attributes.&]
[s0;3 &]
[s0;3 &]
[s0;3 &]
[s2; [3 Examples]&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"Normal `[`* bold`] `[/ italic`] `[`_ underline`] `[`` 
superscript`] `[, subscript`]`"]]
:: [s0; Normal [* bold] [/ italic] [_ underline] [` superscript] [, subscript]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"```[ ```] `\1`[escaped`]`\1 `[`* bold`]`"]]
:: [s0; `[ `] `[escaped`] [* bold]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[A Arial (Sans`-Serif)`] `[R Times New Roman (Serif)`] 
`[C Courier (Monospace)`]`"]]
:: [s0; Arial (Sans`-Serif) [R Times New Roman (Serif)] [C Courier (Monospace)]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[0 6pt `]`[1 8pt `]`[2 10pt `]`[3 12pt `]`[4 16pt `]`[5 
20pt `]`[6 24pt `]`[7 28pt `]`[8 36pt `]`[9 48pt `]`"]]
:: [s0; [0 6pt ][1 8pt ]10pt [3 12pt] [4 16pt ][5 20pt ][6 24pt ][7 28pt ][8 36pt ][9 48pt 
]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[!Tahoma! Tahoma`]`"]]
:: [s0; Tahoma]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[`+500 500dots`]`"]]
:: [s0; [+500 500dots]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[`@4 Green text`] `[`$(255.220.200) Pink background`]`"]]
:: [s0; [@4 Green text] [$(255.220.200) Pink background]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[%EN`-US English language`] `[%CS`-CZ Czech language`]`"]]
:: [s0;%CS-CZ [%% English language ]Czech language]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[`^upp.sf.net`^ Hyperlink`] `[Icompiler, linker; Index 
entry`]`"]]
:: [s0; [^upp`.sf`.net^ Hyperlink] [Icompiler`, linker; Index entry]]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[:label: Labeled paragraph`]`"]]
:: [s0; Labeled paragraph]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[< Left paragraph alignment`]`"]]
:: [s0; Left paragraph alignment]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[`= Center paragraph alignment`]`"]]
:: [s0; Center paragraph alignment]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[> Right paragraph alignment`]`"]]
:: [s0; Right paragraph alignment]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[# Justify alignment. Just some text to demosntrate 
it... Just some text to demonstrate it... Just some text to demonstrate 
it...`]`"]]
:: [s0; Justify alignment. Just some text to demosntrate it... Just 
some text to demonstrate it... Just some text to demonstrate 
it...]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[l1000 Left margin 1000dots`]`"]]
:: [s0; Left margin 1000dots]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[i1000 Indent 1000 dots.Just some text to demonstrate 
it... Just some text to demonstrate it...`]`"]]
:: [s0; Indent 1000 dots.Just some text to demonstrate it... Just some 
text to demonstrate it...]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[r1000 Right margin 1000 dots.Just some text to demonstrate 
it... Just some text to demonstrate it...`]`"]]
:: [s0; Right margin 1000 dots.Just some text to demonstrate it... Just 
some text to demonstrate it...]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"Paragraph`&`[b200 Before 200dots`]`"]]
:: [s0; Paragraph&]
[s0; Before 200dots]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[a200 After 200dots`]`&Paragraph`"]]
:: [s0;a200; After 200dots&]
[s0; Paragraph]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[i200 `[O0 bullet`&`]`[O1 bullet`&`]`[O2 bullet`&`]`[O3 
bullet`]`]`"]]
:: [s0;i200;O0; bullet&]
[s0;i200;O1; bullet&]
[s0;i200;O2; bullet&]
[s0; bullet]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[O9i500 text bullet`-`|Just some text to demonstrate 
it... Just some text to demonstrate it...Just some text to demonstrate 
it... Just some text to demonstrate it...`]`"]]
:: [s0; text bullet-|Just some text to demonstrate it... Just some text 
to demonstrate it...Just some text to demonstrate it... Just 
some text to demonstrate it...]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[O9i200 `[N1m.; `-`|level 1`&`]`[N1a `-`|level 2`&`]`[N1a 
`-`|level 2`&`]`[N1 `-`|level 1`&`]`[N1a `-`|level 2`]`]`"]]
:: [s0;i200;O9;m`.;N1; -|level 1&]
[s0;i200;O9;N1a; -|level 2&]
[s0;i200;O9;N1a; -|level 2&]
[s0;i200;O9;N1; -|level 1&]
[s0; -|level 2]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`[`~300`~`=.2000`~>`-3000 `-`|Normal tab`-`|Centered 
tab`-`|Right tab`]`"]]
:: [s0; -|Normal tab-|Centered tab-|Right tab]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`{`{1:2 A1`|`|A2`|`|B1`|`|B2`}`}`"]]
:: [ {{3333:6667 [s0; A1]
:: [s0; A2]
:: [s0; B1]
:: [s0; B2]}}]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`{`{2:1G4g100F5f50 A1`:: A2`:: B1`:: B2`}`}`"]]
:: [ {{6666:3334f50;F5g100;G4 [s0; A1]
:: [s0; A2]
:: [s0; B1]
:: [s0; B2]}}]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`{`{1:2 A1`::l40/60R6`@3 A2`::! B1`:: B2`}`}`"]]
:: [ {{3333:6667 [s0; A1]
::l40/60@3R6 [s0; A2]
::l0/25@2R0 [s0; B1]
:: [s0; B2]}}]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`{`{1:1:1`|2 A1`::`-2 A2`:: A3`:: B1`:: B2`:: B3`}`}`"]]
:: [ {{3333:3333:3334|1 [s0; A1]
::-1 [s0; A2]
:: [s0;%- ]
:: [s0;%- ]
:: [s0; B2]
:: [s0; B3]}}]}}&]
[s0; &]
[ {{10000 [s0; [*C@3;1 `"`{`{1:2 A1`:: A2`:: B1`:: `{`{1:2 a1`:: a2`:: a1`:: a2`}`}`}`}`"]]
:: [ {{3333:6667 [s0; A1]
:: [s0; A2]
:: [s0; B1]
:: [ {{3333:6667 [s0; a1]
:: [s0; a2]
:: [s0; a1]
:: [s0; a2]}}]}}]}}&]
[s0;*_@3%- &]
[s0;3%- &]
[ {{10000 [s0;%- [*C@3;1 `"`{`{1`~a30/50o Round border`}`}`"]]
:: [ {{10000f0;Kg0;l30/50r30/50t30/50b30/50o [s0;%- Round border]}}]}}&]
[s0;*_@3%- ]]