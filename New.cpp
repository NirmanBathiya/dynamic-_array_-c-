#include <cstdio>
#include <iostream>

using namespace std;

// return

class DynamicArray
{
  private:

  int* _data;
  int _capacity;
  int _size;

  public:
  DynamicArray(int initialCapacity){
    _data = new int(initialCapacity);
    _capacity = initialCapacity;
    _size = 0;
  }

  void  Copy(int* _tp,int* _da,int _za){
    for(int i=0; i< _za;i++){
      _da[i] =_tp[i];
    }

  }

  void Insert(int Data){
    if(_size==_capacity){
      int* temp = _data;
      _capacity = _capacity * 2;
      _data = new int[_capacity];
      Copy(temp,_data,_size);
      delete temp;


    }
    _data[_size] = Data;
    _size ++;

  }
  void remove(){
    if(_size == 0){
      return;
      _data[_size - 1] = 0;
      _size --;
    }

  }

  void insert(int index,int data){

    if (index < 0 || index > _size)
    {
        std::cout << "Invalide index" << " ";
        return;
    }
      for (int i = _size; i > index; --i) {
        _data[i] = _data[i - 1];
    }
    if(_size == _capacity){

       int* temp = _data;
      _capacity = _capacity * 2;
      _data = new int[_capacity];
      Copy(temp,_data,_size);
      delete temp;
    }
      _data[index] = data;
       ++_size;

    
   
  }
void print(){

  for(int i=0; i<_size; i++){

      std::cout << _data[i] << " ";


  }
}
  int ct(){
    return _size;
  }

  int cd(){
    return _capacity;
  }


};

int main(){

  DynamicArray DA(6);

  

   //  DA.insert(1,10);
   //   DA.insert(3,20);
      // DA.Insert(30);


  //   std::cout << DA.ct() << " ";
   //  std::cout << DA.cd() << " ";


  
 DA.print();
    


  

};

 // insert data into given index
 // Delete data into given index 