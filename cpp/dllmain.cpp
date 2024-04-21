// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "pch.h"
#include <pybind11/pybind11.h>

int add(int i, int j) {
    return i + j;
}

// モジュール名"cpp"はプロジェクト名と一致するようにしてください。
PYBIND11_MODULE(cpp, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
}
