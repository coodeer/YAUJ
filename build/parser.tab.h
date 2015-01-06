/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    FLOAT = 260,
    EQ = 261,
    FEQ = 262,
    NEQ = 263,
    NFEQ = 264,
    AND = 265,
    OR = 266,
    FOR = 267,
    WHILE = 268,
    DO = 269,
    IF = 270,
    VMINUS = 271,
    VPOSI = 272,
    PLUSPLUS = 273,
    MINUSMINUS = 274,
    VFPLUSPLUS = 275,
    VFMINUSMINUS = 276,
    ELSE = 277,
    TRUE = 278,
    FALSE = 279,
    STR = 280,
    SUBACCESS = 281,
    FOREACH = 282,
    ARROW = 283,
    AS = 284,
    BREAK = 285,
    CONTINUE = 286,
    TRY = 287,
    CATCH = 288,
    THROW = 289,
    PLUSEQ = 290,
    MINUSEQ = 291,
    LEQ = 292,
    GEQ = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
