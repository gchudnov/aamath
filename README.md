# aamath

ASCII art mathematics renderer

![C/C++ CI](https://github.com/gchudnov/aamath/workflows/C/C++%20CI/badge.svg)

*aamath* is a program that reads mathematical expressions in infix notation and renders them as ASCII art. It may be useful to send mathematics through text-only media, such as e-mail or newsgroups.

As a simple example, the output for an expression such as

```text
A_OPR = x*sqrt(x^2-1)/2 - int(sqrt(t^2-1), t = 1 .. x)
```

will look like

```text
                        x
            ______     /
           / 2        |    ______
       x \/ x  - 1    |   / 2
A    = ----------- -  | \/ t  - 1 dt
 OPR        2         |
                      |
                     /
                      1
```

Other than the usual operations (addition, subtraction, multiplication, division, and exponentiation), aamath can also handle functions, integrals, limits, sums, products, matrices and vectors. Here is a more thorough set of examples.

aamath is a command-line utility. It was successfully compiled and tested on Linux, FreeBSD, Cygwin, and DJGPP. It is written in C++, and will need lex and yacc to compile. GNU readline is also recommended, although not essential.

## Installing

From Snap Store:

    snap install aamath

[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-black.svg)](https://snapcraft.io/aamath)

## Usage

```bash
aamath "lim(1/x^2 - (cos(x)/x)^2, x -> inf) = 1"
```

output:

```text
        /            2\
        | 1   /cos x\ |
 lim    |-- - |-----| | = 1
        | 2   \  x  / |
x -> oo \x            /
```

More examples are included in the file [EXAMPLES.md](EXAMPLES.md).

## Compiling on *nix

```bash
  make -f Makefile
```

To test it:

```bash
  ./aamath < testcases
```

To run in interactive mode:

```bash
  ./aamath
```

To compile without readline:

```bash
  remove -DUSE_READLINE and -lreadline and -ltermcamp from Makefile
```

## Copyright

aamath is licensed under the GNU General Public License, v2. A copy of this license is included in the file [LICENSE](LICENSE).

## Author

[http://fuse.superglue.se/aamath/](http://fuse.superglue.se/aamath/); mauro_persano at yahoo dot com
