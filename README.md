# PlayingWithVectors
The app illustrates the "TRASHING" effect of saving instances of complex objects inside vectors. 
A vector<Person> container is compared with a vector<Person*> container. 
We concluded that vector<Person*> significantly reduces copy-destroying overhead, and is a better design choice.
