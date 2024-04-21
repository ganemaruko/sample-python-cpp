import sys

sys.path.append("./../cpp/x64/Release")

try:
    import cpp
except ImportError as e:
    msg = "C++のdllモジュールが見つかりませんでした。ビルドが正しく行われているか確認してください。"
    raise RuntimeError(msg) from e

if __name__ == '__main__':
    print(cpp.add(1, 2))
    print(help(cpp))
