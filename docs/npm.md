# How to use npm(Node Package Manager)  document

## Install
### Install nvm
First, install nvm(Node Version Manager) for managing node version.<br>
[NVM](https://github.com/nvm-sh/nvm)

### Install node and npm
Install node of latest lts(Long Term Support) version.
```sh
nvm install --lts
nvm ls
```

## Start node project
```sh
mkdir project-dir
cd project-dir/
npm init
```

## Install node packages
```
npm install <package-name> [--save]
npm install <package-name> --save-dev
```
