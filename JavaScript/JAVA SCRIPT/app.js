
var Name = "Utin";
var age = 17;
var skills = ['Javascript', 'Bootstrap', 'React'];

console.log(age);
console.log( undefined === null);
console.log( 100 == '100');
console.log(typeof Name);
console.log(typeof age);

if (age > 18) {
    console.log('Yes, I am qualified');
} else {
    console.log('No, You are not qulified');
}

console.log(typeof skills);


var name = 'Duronto Alim';

for (var i=0; i<10; i++) {
    console.log('Hello, ' + Name);
}

var names = []

names [0] = 'Duronto';
names [1] = 'Alim';
names [2] = 'Utin';

console.log(names[2]);

for (var i=0; i<names.length; i++) {
    console.log(names[i].toUpperCase());
}

var name = ['Duronto', 'Utin', 'David', 'Alim'];

console.log(name.length);
console.log( name[2]);
console.log(name[ name.length -1 ]);
console.log(name.indexOf('Alim'));


var hunter = ['Duronto', 'Utin', 'David', 'Alim'];

hunter[hunter.length] = 'David';
hunter.push('David');
console.log(hunter);

var sortedArray = hunter.sort();
console.log(sortedArray);

hunter.splice(3, 1, 'David Andrew');
console.log(hunter);

// funtion

function add( a, b){
    return a+b;
}
console.log(add(20, 30));

var add = function ( a, b){
    return a+b;
}
console.log(add(20, 30));