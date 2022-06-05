<div align="center">

<img src="https://raw.githubusercontent.com/sujaykumarh/ir-remotes/main/.github/icon.svg" height="64px">

# IR-remotes 

`IR [infrared] remotes` is a project that contains a collection of IR remotes.

[![LICENSE](https://img.shields.io/badge/license-Apache%202.0-blue?logo=github&color=brightgreen)](https://github.com/sujaykumarh/ir-remotes/blob/main/LICENSE) [![docs](https://img.shields.io/badge/🔗%20read-docs-blue?logo=&color=blue)](https://github.com/sujaykumarh/ir-remotes/)


</div>

<br>

## 📁 Directory Structure

```bash
/📁 repo
├── 📁 circuit      # Circuit Design files
├── 📁 docs         # Documentation
├── 📁 remotes      # IR Remotes {images and codes}
├── 📁 code         # IR Remote reader code for Arduino
├── LICENSE         # License file
└── README.md       # Readme file
```

<br>

## 🔧 Development

Install [arduino IDE](https://www.arduino.cc/en/Main/Software) 

then open `code/reader.ino` in the arduino IDE.

![breadboard](https://raw.githubusercontent.com/sujaykumarh/ir-remotes/main/circuit/breadboard.png)

<br>

## 📝 Contributing

All Contributions are welcome, see [CONTRIBUTING](https://github.com/sujaykumarh/.github/blob/main/.github/CONTRIBUTING.md).

**To Add a new remote**

1. Create a new directory `remote-model` in `remotes` directory. if uknown model then name directory as model number on the circuit board. if multiple models of same brand then create a directory with the brand name and add each model as a directory in the brand directory.

1. Use `remotes/template.md` as `README.md` file in the new remote.

1. add detail image in the folder with appropriate tags and include internal PCB photo. [reference](https://github.com/sujaykumarh/ir-remotes/tree/main/remotes/12114-1502)

1. add all the codes in `README.md` file.

1. add a csv `codes.csv` file with all the codes if possible. follow the `README.md` table format. _[Optional]_

1. sign the `README.md` file at the end as verified and tested by you.

<br>

## 📄 LICENSE

[Apache License, Version 2.0](https://github.com/sujaykumarh/ir-remotes/blob/main/LICENSE) © 2021 [sujaykumarh](https://github.com/sujaykumarh)


<br>


### Acknowledgment & Resources

* [Arduino](https://www.arduino.cc/)
* [IR Remote Library](https://www.arduino.cc/reference/en/libraries/irremote/)
* some icons used are from [Font Awesome Free](https://github.com/FortAwesome/Font-Awesome) library under Font Awesome Free License