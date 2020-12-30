
Debian
====================
This directory contains files used to package MANTIScoind/MANTIScoin-qt
for Debian-based Linux systems. If you compile MANTIScoind/MANTIScoin-qt yourself, there are some useful files here.

## MANTIScoin: URI support ##


MANTIScoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install MANTIScoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your MANTIScoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/MANTIScoin128.png` to `/usr/share/pixmaps`

MANTIScoin-qt.protocol (KDE)

