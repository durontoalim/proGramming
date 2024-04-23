function sayName (name){
    return 'Hello, ' + name; 

};

var hello = sayName;
var fun = sayName('utin');

console.log(hello);
console.log(fun);