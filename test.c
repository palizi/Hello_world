//this is a new test file
uint8_t var;
uint32_t *p;
void main()
{
  while()
  {
    p=&var;
    printf("the address of var is: %d",p);
    printf("the value of var is: %d",*p);
  }
}
