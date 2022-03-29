struct Node

{

  int data ;

  Node* next ;

}



void ReversePrint ( Node* ptr)

{
  if( ptr == nullptr)
  
  {
  
  return;
  
  }// Base case : if the list is empty, do nothing


  else if ( ptr!= nullptr) // general case

  {
  
  ReversePrint(ptr->next);
//process the rest

      ___________missing code____________________ ;
      ReversePrint(ptr->next);
      cout << ptr->data << endl ;

      // print this element

  }

}
