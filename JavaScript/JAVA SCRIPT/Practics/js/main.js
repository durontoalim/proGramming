var x = 5;
var y = 6;
var z= 10;

var a = x/y;

console.log(a);

// let name = prompt ('Given Your Name');
// let age = prompt ('Given Your Age');

// document.getElementById('demo').innerHTML='My name is ' + name +',' + ' I am ' + age  +' years old';


function mathCalculation (math){
    return math + math;
}
console.log(mathCalculation(8));

console.log(Math.PI);
//round = ceil 1+ hobe = floor korle porno man
console.log(Math.round(3.50));

// Math Power

console.log(Math.pow(5,2));

// Math Power

console.log(Math.sqrt(25));
console.log(Math.abs(-25));

// sin cos tan
console.log(Math.sin( 90 * Math.PI/180));

console.log(Math.cos( 0 * Math.PI/180));

//Random 

console.log(Math.random());

// dosomik er por 2 degit num

console.log(Math.random().toFixed(2));

console.log(Math.random().toFixed(2) * 10);

// Randoom app

let uppervalue= 6;
let lowervalue = 0;
let resultValue = Math.floor( Math.random() * (uppervalue - lowervalue) + 1 );

console.log(resultValue);



// good morning time wish

let time = new Date().getHours();
if (time >= 4 && time < 11){
    console.log('Good Morning');
}
else if (time >= 12 && time < 24){
    console.log('Good Evening');
}
else {
    console.log('Good Night');
}



// Switch

let lightoffon = 2;

switch (lightoffon){
    case 0:
    lightoffon= "Off";
    break;
    case 1:
    lightoffon= "On";
    break;
    default:
        lightoffon= "Not Found";
}
console.log(lightoffon);



// loop

for ( let i=0; i<6; i++){
    console.log('Hello World',i);

    if (i===4) break;
}

const  cars= ['Bmw', 'Corola', 'Hice', 'jeep'];

for (let i=0; i<cars.length; i++){
    console.log(cars[i]);
}

// while loop
let num = 1;
while( num <=10){
    console.log('This is while Loop', num);
    num++; //num++ er jnno 10 er odik jabe na loop ta
}