const char* test1name = "overlapped notes";

const byte test1in[] = {
  0x90, 0x31, 0x7f,
  0xE0, 0x05, 0x40,
  0x90, 0x63, 0x7f,
  0x90, 0x63, 0x00,
  0x90, 0x63, 0x7f,
  0x90, 0x63, 0x00,
  0x80, 0x31, 0x64,
};

const byte test1out[] = {
  0xe0, 0x00, 0x30,
  0x90, 0x31, 0x7f,

  0xe0, 0x05, 0x30,

  0xe0, 0x05, 0x40,
  0x90, 0x33, 0x7f,
  
  0x90, 0x33, 0x00,
  0xe0, 0x05, 0x30,
  
  0xe0, 0x05, 0x40,
  0x90, 0x33, 0x7f,
  
  0x90, 0x33, 0x00,
  0xe0, 0x05, 0x30,
  
  0x90, 0x31, 0x00,
};
