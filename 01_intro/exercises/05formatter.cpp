
#include <iostream>
#include <string>


int main(){
  
  //std::string rigapreced{};
  std::size_t soglia{};  
  std::cout << "inserire lunghezza massima consentita: \n";
  std::cin >> soglia;

  for(std::string riga; std::getline(std::cin, riga); )  //prende da cin, butta in "riga"
    {
      if(riga.size() > soglia)
        {
	  //std::size_t h{-1};
	  for(std::size_t i=1; i<soglia; ++i){
	    if (riga[soglia-i] = ' ')
	      std::string newriga{ riga.substr(0, soglia-i)};
	    //compila fin qua
	  }
	    
	}
      
      else{
	//se è diversa dalla precedente
	//..
	//vedi screen
	std::cout << std::endl << riga;
	}
    }
  std::cout << std::endl;
}
