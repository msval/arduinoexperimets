var serial = require( "serialport" );
var SerialPort = serial.SerialPort;

var twit = require("twit");
var readline = require('readline');

// Replace with the device name in your machine.
var portName = "/dev/tty.usbmodemfa1231";
 
var sp = new SerialPort( portName, {
    baudrate:9600,
    parser  :serial.parsers.readline( "\n" )
} );

var twitter = new twit({
  consumer_key: '',
  consumer_secret: '',
  access_token: '',
  access_token_secret: ''
});

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
 
sp.on("data", function ( data ) {
	console.log(data);

	var tweet = 'Current room temperature in °C (arduino) ' + data;

	console.log(tweet);

	rl.question("post on twitter? ", function(answer) {
		console.log("answer " + answer);
		console.log(answer === "y");
		if (answer === "y") {
			console.log('Sending');
			twitter.post('statuses/update', { status: tweet }, function(err, reply) {
				if (err) {
					console.dir(err);
				} else {
					console.dir(reply);
				}
			});
		}

		rl.close();
	});
});