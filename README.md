# sample-python-cpp

PythonからC++で書かれたdllを読み込むサンプルプロジェクトになります。

## 動作環境

OS Name: Microsoft Windows 11 Home
OS Version: 10.0.22621 N/A Build 22621
CPU: 12th Gen Intel(R) Core(TM) i7-12700K 3.60 GHz
VSCode 1.79.2
Microsoft Visual Studio Community 2019 Version 16.11.13

## 始め方

### C++のビルド

VisualStudioで`cpp.sln`を開き、ビルド
ヘッダーインクルードなどについてはvcpkgやダウンロード先に合わせて調整してください。

### Pythonから呼び出し

```sh
python python/main.py
```
