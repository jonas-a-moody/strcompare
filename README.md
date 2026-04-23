# strcompare

A command line tool that compares two strings for equivalency. 

## Installation
Clone the repository and build with CMake:

```bash
git clone https://github.com/jonas-a-moody/strcompare.git
cd strcompare
cmake -B build
cmake --build build
```

## Usage
Run the compiled binary: 
```bash
./build/strcompare [-i] <str 1> <str 2>
```

**Example:**
```bash
$ ./build/strcompare MIIBOgIBAAJBAKj34GkxFhD90vcNLYLInFEX6Ppy1tPf9Cnzj4p4WGeKLs1Pt8Qu MIIBOgIBAAJBAKj34GkxFhD90vcNLYLInFEX6Ppy1tPf9Cnzj4p4WGeKLs1Pt8Qu
Strings are equal.
$ ./build/strcompare MIIBOgIBAAJBAKj34GkxFhD90vcNLYLInFEX6Ppy1tPf9Cnzj4p4WGeKLs1Pt8Qu MIIBOgIBAAJBAKj34GkxFhD90vcNLYLInFEX6Ppy1tPf9Cnzj4p4WGeKLs1Pt777
Strings are NOT equal. 
```

## Notes

- Input is case sensitive unless -i is used. 

## License

MIT
