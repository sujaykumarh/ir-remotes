<div align="center">

<svg height="50px" xmlns="http://www.w3.org/2000/svg" fill="#fff" viewBox="0 0 640 512"><!--! Font Awesome Pro 6.1.1 by @fontawesome - https://fontawesome.com License - https://fontawesome.com/license (Commercial License) Copyright 2022 Fonticons, Inc. --><path d="M448 64H192C85.96 64 0 149.1 0 256s85.96 192 192 192h256c106 0 192-85.96 192-192S554 64 448 64zM247.1 280h-32v32c0 13.2-10.78 24-23.98 24c-13.2 0-24.02-10.8-24.02-24v-32L136 279.1C122.8 279.1 111.1 269.2 111.1 256c0-13.2 10.85-24.01 24.05-24.01L167.1 232v-32c0-13.2 10.82-24 24.02-24c13.2 0 23.98 10.8 23.98 24v32h32c13.2 0 24.02 10.8 24.02 24C271.1 269.2 261.2 280 247.1 280zM431.1 344c-22.12 0-39.1-17.87-39.1-39.1s17.87-40 39.1-40s39.1 17.88 39.1 40S454.1 344 431.1 344zM495.1 248c-22.12 0-39.1-17.87-39.1-39.1s17.87-40 39.1-40c22.12 0 39.1 17.88 39.1 40S518.1 248 495.1 248z"/></svg>

# IR-remotes 

`IR [infrared] remotes` is a project that contains a collection of IR remotes. 🔗

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

1. Create a new directory `remote-model` in `remotes` directory. if uknown model then name directory as number model number on the motherboard. if multiple models of same brand then create a directory with the brand name and add each model as a directory in the brand directory.

1. Use `remotes/template.md` as `README.md` file in the new remote.

1. add detail image in the folder with appropriate tags and include internal PCB photo. [reference](https://github.com/sujaykumarh/ir-remotes/tree/main/remotes/12114-1502)

1. add all the codes in `README.md` file.

1. add a csv `codes.csv` file with all the codes if possible. follow the `README.md` table format. _[Optional]_

1. sign the `README.md` file at the end as verified and tested by you.

<br>

## 📄 LICENSE


```
Copyright (c) 2021 Sujaykumar.Hublikar <hello@sujaykumarh.com>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```

read [Full LICENSE](https://github.com/sujaykumarh/ir-remotes/blob/main/LICENSE)


<br>


### Acknowledgment & Resources

* [Arduino](https://www.arduino.cc/)
* [IR Remote Library](https://www.arduino.cc/reference/en/libraries/irremote/)
* some icons used are from [Font Awesome Free](https://github.com/FortAwesome/Font-Awesome) library under Font Awesome Free License