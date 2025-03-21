# Freetrade DOS

A retro-inspired stock market simulator that runs inside DOSBox. Built with C, styled like a mid-90s terminal, and driven by fake market data.

---

## 📁 Project Structure

```bash
freetrade-dos/
├── assets/                      # External resources and DOS software kits
│   ├── dzbin267/                # Includes 'dz' DOS utility and license
│   │   ├── dz/
│   │   │   ├── dz.dos           # DOS binary
│   │   │   ├── dz.exe           # Alternate DOS executable
│   │   │   └── dz.txt           # Documentation for the 'dz' tool
│   │   └── LICENSE              # License for 'dzbin267'
│   └── FD14-FloppyEdition/     # FreeDOS bootable floppy disk images
│       ├── 120m/
│       │   ├── x86BOOT.img      # Bootable image
│       │   ├── x86DSK01.img     # Disk set for 120MB
│       │   └── ...              # Additional disk images
│       ├── 144m/
│       │   ├── x86BOOT.img
│       │   ├── x86DSK01.img
│       │   └── ...
│       ├── 720k/
│       │   ├── x86BOOT.img
│       │   ├── x86DSK01.img
│       │   └── ...
│       └── readme.txt           # Info about the floppy editions
│
├── data/
│   └── market_tape.csv          # Simulated stock price & volume data (the "tape")
│
├── dos/
│   └── FREETRAD.BAT             # DOS batch file to launch the app
│
├── dosbox/
│   └── dosbox.conf              # Custom DOSBox config (mount, autoexec, etc.)
│
├── freetrade                    # (Linux) compiled version of main.c
├── freetrade.sh                # Shell script to launch DOSBox with config
│
├── LICENSE                      # Your open-source license (e.g. MIT)
├── README.md                    # Project overview and setup instructions
│
├── source/
│   └── main.c                   # C source code for the simulator logic inspured by Bachalier
