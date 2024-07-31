
#include <stdio.h>

%%
[0-9]{2}\/[0-9]{2}\/[0-9]{4} { printf("Valid DOB: %s\n", yytext); }
[ \t\n] ; /* Ignore spaces, tabs, and newlines */
. ; /* Ignore other characters */

%%

int main() {
    yylex();
    return 0;
}
