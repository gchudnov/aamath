/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

/* parser.y -- part of aamath
 *
 * This program is copyright (C) 2005 Mauro Persano, and is free
 * software which is freely distributable under the terms of the
 * GNU public license, included as the file COPYING in this
 * distribution.  It is NOT public domain software, and any
 * redistribution not permitted by the GNU General Public License is
 * expressly forbidden without prior written permission from
 * the author.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "expr.h"
#include "canvas.h"

// #undef __GNUC__ // stupid error with gcc 3.4.3 and bison 1.875 on djgpp combo

extern void prompt();
extern int yylex();
extern void yyerror(const char *str, ...);

#line 93 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 28 "parser.y" /* yacc.c:355  */

	Constant *constval;
	Symbol *symval;
	Expression *expr;
	ExprVector *exprvec;
	FunctionArgs *args;
	Matrix *matrix;
	Matrix::Row *mrow;

#line 191 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 208 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   620

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,     2,     2,    41,
      38,    39,    29,    28,    40,    27,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      23,    22,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,    35,    43,    32,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    33,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    25,    26,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    63,    67,    68,    69,    70,    74,    75,
      76,    77,    78,    79,    80,    82,    83,    85,    86,    88,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   113,   124,   133,   134,   135,   139,   140,
     144,   145,   146,   150,   170,   175,   176,   177,   181,   182,
     186,   187,   188,   189,   190,   191,   195,   199,   200,   204,
     208,   209,   213,   214
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "IDENTIFIER",
  "TRIGFN", "SQRT", "ROOT", "ELLIPSIS", "INF", "RANGE", "INT", "SUM",
  "PROD", "QUIT", "LIM", "PI", "NABLA", "ARROW", "DET", "ABS", "'='",
  "'<'", "'>'", "LESSEQ", "GTEQ", "'-'", "'+'", "'*'", "'/'", "NEG", "'^'",
  "'~'", "'!'", "'\\\\'", "'_'", "'\\n'", "'('", "')'", "','", "'\\''",
  "'['", "']'", "';'", "$accept", "input", "line", "expr",
  "opt_conj_symbol", "symbol", "subscr_id", "subscr_id_list", "fn_args",
  "constant", "id", "matrix_opt_det", "matrix", "matrix_rows",
  "matrix_row", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    61,    60,    62,   277,   278,    45,    43,    42,
      47,   279,    94,   126,    33,    92,    95,    10,    40,    41,
      44,    39,    91,    93,    59
};
# endif

#define YYPACT_NINF -37

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-37)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,   135,   -37,   -34,   -37,   -37,   -37,   -23,   -21,   -19,
     -37,   -37,   -12,   -11,   -10,    -5,     6,   -37,   -37,   -36,
      12,   175,    -4,   -37,   175,   175,   -37,   557,    14,   -31,
     -37,    28,   -37,   -37,   -37,   -37,   -37,   175,   175,   175,
     175,   175,   175,   -37,   175,   -37,   175,   -16,    -3,   175,
     -37,   305,   586,   -32,    -7,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   -37,   -37,   175,   -37,   -37,
       4,   323,   341,    90,   229,   248,   267,   286,   359,   377,
       0,   -37,   175,   175,   586,   586,   586,   586,   586,    17,
      17,   -16,   -16,   -16,   586,   -15,   175,   -37,   -37,   -37,
     -37,   175,   175,   175,   175,   175,   -37,   -37,   -37,    -7,
     586,   -37,   175,   395,   413,   431,   449,   467,   573,   586,
     -37,   -37,   175,   -37,   175,   -37,   175,   -37,   175,    62,
     196,   216,   485,   175,   175,   175,   -37,   503,   521,   539,
     -37,   -37,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    50,    51,    56,     0,     0,     0,
      52,    53,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     7,     0,     0,     2,     0,     9,    38,
      40,    43,     8,    44,    37,    57,     5,     0,     0,     0,
       0,     0,     0,     6,     0,    58,     0,    31,     0,     0,
      39,     0,    62,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     4,     0,    42,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    59,     0,     0,    22,    23,    24,    25,    26,    28,
      27,    29,    30,    34,    49,     0,     0,    47,    45,    21,
      10,     0,     0,     0,     0,     0,    11,    32,    33,    61,
      63,    20,     0,     0,     0,     0,     0,     0,     0,    48,
      46,    12,     0,    13,     0,    15,     0,    17,     0,    22,
      22,    22,     0,     0,     0,     0,    19,     0,     0,     0,
      14,    16,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -37,   -37,   -37,    -1,   -17,   -37,   -37,   -37,   -37,    -2,
       1,   -37,    34,   -37,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    26,    52,    28,    29,    30,    31,    95,    32,
      33,    34,    35,    53,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,     6,     6,    36,    68,    50,    25,     4,     5,     6,
      69,    81,    82,    10,    11,    37,    64,    38,    65,    39,
      47,    17,    18,    51,   111,   112,    40,    41,    42,    48,
      48,    50,    43,    83,    49,   108,    71,    72,    73,    74,
      75,    76,    96,    77,    44,    78,    62,    63,    79,    64,
      46,    65,    67,    45,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    70,     0,    94,     0,    97,   109,
       0,    98,     0,   133,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,   113,    65,     0,     0,     0,
     114,   115,   116,   117,   118,     0,     0,     0,     0,     0,
       0,   119,    55,    56,    57,    58,    59,    60,    61,    62,
      63,   129,    64,   130,    65,   131,     0,   132,     0,     0,
     101,     0,   137,   138,   139,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,     0,    19,    20,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,    22,     0,
       0,     0,    23,    24,     0,     0,     0,    25,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
       0,    16,    17,    18,     0,    19,    20,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,   134,    22,     0,
       0,     0,     0,    24,     0,     0,     0,    25,    55,    56,
      57,    58,    59,    60,    61,    62,    63,   135,    64,     0,
      65,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,     0,
      65,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,     0,    65,     0,     0,     0,     0,     0,   102,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,     0,    65,     0,     0,     0,     0,     0,   103,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
       0,    65,     0,     0,     0,     0,     0,   104,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,     0,
      65,     0,     0,     0,     0,     0,   105,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,     0,    65,
       0,     0,     0,     0,    80,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,     0,    65,     0,     0,
       0,     0,    99,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,     0,    65,     0,     0,     0,     0,
     100,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,     0,    65,     0,     0,     0,     0,   106,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
       0,    65,     0,     0,     0,     0,   107,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,     0,    65,
       0,     0,     0,     0,   120,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,     0,    65,     0,     0,
       0,     0,   121,   122,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,     0,    65,     0,     0,     0,     0,
     123,   124,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,     0,    65,     0,     0,     0,     0,   125,   126,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
       0,    65,     0,     0,     0,     0,   127,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,     0,    65,
       0,     0,     0,     0,   136,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,     0,    65,     0,     0,
       0,     0,   140,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,     0,    65,     0,     0,     0,     0,
     141,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,     0,    65,     0,     0,     0,     0,   142,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
       0,    65,   128,     0,    66,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,     0,    65,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,     0,
      65
};

static const yytype_int16 yycheck[] =
{
       1,     5,     5,    37,    35,    22,    42,     3,     4,     5,
      41,    43,    44,     9,    10,    38,    32,    38,    34,    38,
      21,    17,    18,    24,    39,    40,    38,    38,    38,    33,
      33,    48,    37,    40,    38,    35,    37,    38,    39,    40,
      41,    42,    38,    44,    38,    46,    29,    30,    49,    32,
      38,    34,    38,    19,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    36,    -1,    67,    -1,    70,    82,
      -1,    70,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    96,    34,    -1,    -1,    -1,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   122,    32,   124,    34,   126,    -1,   128,    -1,    -1,
      40,    -1,   133,   134,   135,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    42,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    11,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    11,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    34,    19,    -1,    37,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    34,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    13,    14,    15,    16,    17,    18,    20,
      21,    27,    33,    37,    38,    42,    47,    48,    49,    50,
      51,    52,    54,    55,    56,    57,    37,    38,    38,    38,
      38,    38,    38,    37,    38,    57,    38,    48,    33,    38,
      49,    48,    48,    58,    59,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    32,    34,    37,    38,    35,    41,
      36,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      39,    43,    44,    40,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    53,    38,    54,    55,    39,
      39,    40,    40,    40,    40,    40,    39,    39,    35,    59,
      48,    39,    40,    48,    48,    48,    48,    48,    48,    48,
      39,    39,    22,    39,    22,    39,    22,    39,    19,    48,
      48,    48,    48,    11,    11,    11,    39,    48,    48,    48,
      39,    39,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      50,    50,    50,    51,    52,    52,    52,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    56,    56,    57,
      58,    58,    59,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     1,     1,     1,
       4,     4,     6,     6,    10,     6,    10,     6,    10,     8,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     4,     4,     3,     2,     3,     1,     1,     2,
       1,     2,     2,     1,     1,     3,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 62 "parser.y" /* yacc.c:1646  */
    { prompt(); }
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "parser.y" /* yacc.c:1646  */
    { }
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "parser.y" /* yacc.c:1646  */
    { std::cout << "\n" << (*(yyvsp[-1].expr)); delete (yyvsp[-1].expr); }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 68 "parser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "parser.y" /* yacc.c:1646  */
    { YYACCEPT; }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 70 "parser.y" /* yacc.c:1646  */
    { std::cout << "\n"; }
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 74 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].constval); }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].symval); }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Sqrt((yyvsp[-1].expr)); }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Abs((yyvsp[-1].expr)); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Root((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Integral((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new IntegralOnInterval((yyvsp[-7].expr), (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Sum((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new SumOverInterval((yyvsp[-7].expr), (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Product((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ProductOverInterval((yyvsp[-7].expr), (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Limit((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new MultivarFunction((yyvsp[-3].symval), (yyvsp[-1].args)); }
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new TrigFunction((yyvsp[-3].symval), (yyvsp[-1].expr)); }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Equal((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Less((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Greater((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LessOrEqual((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new GreaterOrEqual((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Add((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Sub((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Mul((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Div((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Neg((yyvsp[0].expr)); }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "parser.y" /* yacc.c:1646  */
    {
		Symbol *sym = dynamic_cast<Symbol *>((yyvsp[-1].expr));

		if (sym != NULL) {
			sym->switch_conj();
			(yyval.expr) = (yyvsp[-1].expr);
		} else {
			(yyval.expr) = new Conj((yyvsp[-1].expr));
		}
	}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 114 "parser.y" /* yacc.c:1646  */
    {
		Symbol *sym = dynamic_cast<Symbol *>((yyvsp[-2].expr));

		if (sym != NULL && sym->get_bar() == false) {
			sym->set_bar();
			(yyval.expr) = (yyvsp[-2].expr);
		} else {
			(yyval.expr) = new Bar((yyvsp[-2].expr));
		}
	}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-2].expr)->accept_expn()) {
			(yyvsp[-2].expr)->set_expn((yyvsp[0].expr));
			(yyval.expr) = (yyvsp[-2].expr);
		} else {
			(yyval.expr) = new Pow((yyvsp[-2].expr), (yyvsp[0].expr));
		}
	}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Fact((yyvsp[-1].expr)); }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].matrix); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.symval) = (yyvsp[0].symval); }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "parser.y" /* yacc.c:1646  */
    { (yyvsp[0].symval)->switch_conj(); (yyval.symval) = (yyvsp[0].symval); }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyval.symval) = (yyvsp[0].symval); }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].symval)->add_tick(); (yyval.symval) = (yyvsp[-1].symval); }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].symval)->set_bar(); (yyval.symval) = (yyvsp[-1].symval); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 151 "parser.y" /* yacc.c:1646  */
    {
		Symbol *first, *prev;

		ExprVector::iterator i = (yyvsp[0].exprvec)->begin();

		first = prev = dynamic_cast<Symbol *>(*i++);

		while (i != (yyvsp[0].exprvec)->end()) {
			prev->set_subscr(*i);
			prev = dynamic_cast<Symbol *>(*i++);
		}

		delete (yyvsp[0].exprvec);

		(yyval.symval) = first;
	}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 171 "parser.y" /* yacc.c:1646  */
    {
		(yyval.exprvec) = new ExprVector();
		(yyval.exprvec)->push_back((yyvsp[0].symval));
	}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].exprvec)->push_back((yyvsp[0].symval)); (yyval.exprvec) = (yyvsp[-2].exprvec); }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-4].exprvec)->push_back((yyvsp[-1].expr)); (yyval.exprvec) = (yyvsp[-4].exprvec); }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].exprvec)->push_back((yyvsp[0].constval)); (yyval.exprvec) = (yyvsp[-2].exprvec); }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].args)->add_arg((yyvsp[0].expr)); (yyval.args) = (yyvsp[-2].args); }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.args) = new FunctionArgs(); (yyval.args)->add_arg((yyvsp[0].expr)); }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.constval) = (yyvsp[0].constval); }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.constval) = (yyvsp[0].constval); }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval.constval) = new Ellipsis(); }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.constval) = new Infinity(); }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval.constval) = new Pi(); }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.constval) = new Nabla(); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.symval) = (yyvsp[0].symval); }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.matrix) = (yyvsp[0].matrix); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyvsp[0].matrix)->set_det(); (yyval.matrix) = (yyvsp[0].matrix); }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval.matrix) = (yyvsp[-1].matrix); }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval.matrix) = new Matrix(); (yyval.matrix)->add_row((yyvsp[0].mrow)); }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].matrix)->add_row((yyvsp[0].mrow)); (yyval.matrix) = (yyvsp[-2].matrix); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.mrow) = new Matrix::Row(); (yyval.mrow)->add_elem((yyvsp[0].expr)); }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].mrow)->add_elem((yyvsp[0].expr)); (yyval.mrow) = (yyvsp[-2].mrow); }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1885 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 217 "parser.y" /* yacc.c:1906  */

