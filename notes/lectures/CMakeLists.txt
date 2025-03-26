cmake_minimum_required(VERSION 3.31.0)
project(latex-notes-mit-numerics VERSION 1.0.0)

set(LATEX DEFAULT BUILD pdf)
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/UseLATEX.cmake)

# targets
add_latex_document(src/lecture1.tex)
add_latex_document(src/lecture2.tex)
add_latex_document(src/lecture3.tex)