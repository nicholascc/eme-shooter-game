# eme-shooter-game
![image](https://user-images.githubusercontent.com/34197135/165014399-d5ce35b9-1690-49e1-b9a7-9d9a1c5c505c.png)

A simple game built with SDL2 as a demo for the programing language [Eme](https://github.com/nicholascc/eme). Check in [releases](https://github.com/nicholascc/eme-shooter-game/releases) for the latest version to install. All code for the game is mine, but the images are public-domain game assets I found online.


## Controls
W, A, S, D to move.
SPACE to shoot.

## How to compile

First, install Eme [here](https://github.com/nicholascc/eme#installation). Then, make sure that you have the SDL2 and SDL_image .dll files in your PATH. The [releases](https://github.com/nicholascc/eme-shooter-game/releases) version of the game's zip file includes all necessary .dlls, although you could also use the official downloads.

Then, use the Eme compiler to compile the Eme source code:

```
eme.exe src/main.eme -o out.obj
```

Then you can use the generated object file with your installation of [MSVC](https://docs.microsoft.com/en-us/cpp/build/building-on-the-command-line) to generate an executable output file:

```
cl.exe "src/support.c" /nologo /Fe"game.exe" /link "out.obj" "lib/sdl/SDL2-2.0.20/lib/x64/SDL2.lib" "lib/sdl/SDL2-2.0.20/lib/x64/SDL2main.lib" "lib/sdl/SDL2_image-2.0.5/lib/x64/SDL2_image.lib"
```

`game.exe` will be the compiled game executable!
