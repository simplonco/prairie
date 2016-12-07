# La Prarie Simplon.co : Days 3 / 20

## Lightning Talk

- _Mercredi 9 Novembre_ **[?]** How to create your First HTML Page on UNIX w/ atom

## Default UNIX setup

```shell
sudo apt-get install git wget curl vim zsh
chsh -s $(which zsh) $(whoami)
cd ~
wget -O .vimrc http://git.grml.org/f/grml-etc-core/etc/vim/vimrc
wget -O .zshrc http://git.grml.org/f/grml-etc-core/etc/zsh/zshrc
```

## Install the Atom editor

https://atom.io/

```shell
sudo dpkg -i atom-amd64.deb
sudo apt-get install gconf2 gconf-service libnotify4 gvfs-bin
sudo apt-get -f install
```

## Install brew on OSX

http://brew.sh/

## Vim

https://openclassrooms.com/courses/reprenez-le-controle-a-l-aide-de-linux/vim-l-editeur-de-texte-du-programmeur

Linux et Vim [PDF]

## Organize your working space like a Hacker

http://i3wm.org

```
sudo apt-get install xorg i3 suckless-tools
```
