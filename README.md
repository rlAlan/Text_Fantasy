# Text_Fantasy
Just a go at making a basic text fansasy game

## Getting clangd to work
[Click here](https://clangd.llvm.org/installation.html#project-setup)

> Clangd will look for a compile_commands.json
> CMAKE can maek this by passing the -DCMAKE_EXPORT_COMPILE_COMMANDS=1 flag
>If your build directory is $SRC or $SRC/build, clangd will find it. Otherwise, symlink or copy it to $SRC, the root of your source tree.
> ln -s ~/myproject-build/compile_commands.json ~/myproject/
