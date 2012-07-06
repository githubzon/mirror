topic "Witz template language";
[2 $$0,0#00000000000000000000000000000000:Default]
[l288;i1120;a17;O9;~~~.1408;2 $$1,0#10431211400427159095818037425705:param]
[a83;*R6 $$2,5#31310162474203024125188417583966:caption]
[H4;b83;*4 $$3,5#07864147445237544204411237157677:title]
[i288;O9;C2 $$4,6#40027414424643823182269349404212:item]
[b42;a42;2 $$5,5#45413000475342174754091244180557:text]
[l288;b17;a17;2 $$6,6#27521748481378242620020725143825:desc]
[l321;C@5;1 $$7,7#20902679421464641399138805415013:code]
[b2503;2 $$8,0#65142375456100023862071332075487:separator]
[*@(0.0.255)2 $$9,0#83433469410354161042741608181528:base]
[C2 $$10,0#37138531426314131251341829483380:class]
[l288;a17;*1 $$11,11#70004532496200323422659154056402:requirement]
[i417;b42;a42;O9;~~~.416;2 $$12,12#10566046415157235020018451313112:tparam]
[b167;C2 $$13,13#92430459443460461911108080531343:item1]
[i288;a42;O9;C2 $$14,14#77422149456609303542238260500223:item2]
[*@2$(0.128.128)2 $$15,15#34511555403152284025741354420178:NewsDate]
[l321;*C$7;2 $$16,16#03451589433145915344929335295360:result]
[l321;b83;a83;*C$7;2 $$17,17#07531550463529505371228428965313:result`-line]
[l160;*C+117 $$18,5#88603949442205825958800053222425:package`-title]
[2 $$19,0#53580023442335529039900623488521:gap]
[C2 $$20,20#70211524482531209251820423858195:class`-nested]
[b50;2 $$21,21#03324558446220344731010354752573:Par]
[{_}%EN-US 
[s2; Witz&]
[s3; 1. Preprocessing&]
[s0; &]
[s0; First phase in compilation of witz templates is preprocessing. 
Preprocessing itself can be broken to include phase, when other 
template or template snippets are combined to form single body 
and subblock replacement phase, when all references to subblocks 
are replaced with defined subblocks.&]
[s0; &]
[s0; [@5 #include] [/ path]&]
[s0; &]
[s0; This attempts to retrieve and include another witz template 
into current body. Witz preprocessor attempts to retrieve language 
specific version of template first, then defaults to common version.&]
[s0; &]
[s0; [@5 #define] [/ id]&]
[s0; &]
[s0; This starts a new template subblock which ends with another 
subblock. First subblock (the one befure first #define is encountered) 
has [/ id] `"MAIN`". The value of `"MAIN`" subblock represents 
the template at the end of preprocessing process.&]
[s0; &]
[s0; [@5 #][/ id]&]
[s0; &]
[s0; Occurence of # followed by [/ id] that is neither `"include`" 
or `"define`" inserts a subblock defined by [@5 #define] [/ id]. 
Thus process is recursive `- subblock keep replacing until there 
are no more #[/ id] in the block. If [/ id ]is encountered for which 
there is corresponding [@5 #define], it is replaced by empty text. 
If there are more definition for single id, the last one is used.&]
[s0; &]
[s0; Example:&]
[s0; &]
[s0; [* base.witz:]&]
[s0; &]
[s7; <html>&]
[s7; <title>#TITLE</title>&]
[s7; <body>#BODY</body>&]
[s7; </html>&]
[s7; &]
[s7; #define TITLE Generic title&]
[s0; &]
[s0; [* page.witz:]&]
[s0;* &]
[s7; #include base&]
[s7; #define TITLE The page title&]
[s7; #define BODY&]
[s7; <b><i>Hello world!</i></b>&]
[s0; &]
[s3; 2. Witz code&]
[s0; &]
[s0; Witz code is marked by `'`$`' character (the end of code within 
template is determined by syntax rules, in rare situations you 
might have to enclose expressions in parenthesis).&]
[s0; &]
[s0; ]]