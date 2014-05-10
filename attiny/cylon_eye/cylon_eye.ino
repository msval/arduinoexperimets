#define CH1 0
#define CH2 1
#define CH3 2
#define CH4 3
#define CH5 4

long interval = 10; // set the LED blink speed (1000ms = one second)

void setup ()
{
pinMode (CH1, OUTPUT); // set CH1 as output
pinMode (CH2, OUTPUT); // set CH2 as output
pinMode (CH3, OUTPUT); // set CH3 as output
pinMode (CH4, OUTPUT); // set CH4 as output
pinMode (CH5, OUTPUT); // set CH5 as output
}

void loop () {
digitalWrite (CH1, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH1, LOW); // set

digitalWrite (CH2, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH2, LOW); // set the LED off

digitalWrite (CH3, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH3, LOW); // set the LED off

digitalWrite (CH4, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH4, LOW); // set the LED off

digitalWrite (CH5, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH5, LOW); // set the LED off

digitalWrite (CH4, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH4, LOW); // set

digitalWrite (CH3, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH3, LOW); // set the LED off

digitalWrite (CH2, HIGH); // set the LED on
delay (interval); // wait for a second
digitalWrite (CH2, LOW); // set the LED off
}
