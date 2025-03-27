cmake_minimum_required(VERSION 3.31.0)
project(latex-notes-mit-numerics VERSION 1.0.0)
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/UseLATEX.cmake")

#set(LATEX_DEFAULT_BUILD pdf)
# targets
add_latex_document(lectures/src/main.tex
    TARGET_NAME notes-numerics
    INPUTS
    lectures/src/lecture1-solomon.tex
    lectures/src/lecture1.tex
    lectures/src/lecture2.tex
    lectures/src/lecture3.tex
    lectures/src/lecture4.tex
)

#set_target_properties(notes PROPERTIES
#        RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/pdf
#        RUNTIME_OUTPUT_DIRECTORY_
#        RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/pdf
#)