/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INTEGER = 258,
    REAL = 259,
    IDENTIFIER = 260,
    TRIGFN = 261,
    SQRT = 262,
    ROOT = 263,
    ELLIPSIS = 264,
    INF = 265,
    RANGE = 266,
    INT = 267,
    SUM = 268,
    PROD = 269,
    QUIT = 270,
    LIM = 271,
    PI = 272,
    NABLA = 273,
    ARROW = 274,
    DET = 275,
    ABS = 276,
    LESSEQ = 277,
    GTEQ = 278,
    NEG = 279
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define IDENTIFIER 260
#define TRIGFN 261
#define SQRT 262
#define ROOT 263
#define ELLIPSIS 264
#define INF 265
#define RANGE 266
#define INT 267
#define SUM 268
#define PROD 269
#define QUIT 270
#define LIM 271
#define PI 272
#define NABLA 273
#define ARROW 274
#define DET 275
#define ABS 276
#define LESSEQ 277
#define GTEQ 278
#define NEG 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "parser.y" /* yacc.c:1909  */

	Constant *constval;
	Symbol *symval;
	Expression *expr;
	ExprVector *exprvec;
	FunctionArgs *args;
	Matrix *matrix;
	Matrix::Row *mrow;

#line 112 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
