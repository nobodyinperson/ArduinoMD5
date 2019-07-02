#include <MD5.h>
/*
This is en example of how to use my MD5 library. It provides two
easy-to-use methods, one for generating the MD5 hash, and the second
one to generate the hex encoding of the hash, which is frequently used.
*/
void setup()
{
  //initialize serial
  Serial.begin(9600);
  //give it a second
  delay(1000);
  //generate the MD5 hash for our string
  unsigned char hash[16];
  MD5::make_hash(hash, "hello world");
  //generate the digest (hex encoding) of our hash
  char digest[25+1]; // 25 chars + null terminator
  MD5::make_digest(hash, 16, digest);
  //print it on our serial monitor
  Serial.println(digest);
}

void loop()
{
}
