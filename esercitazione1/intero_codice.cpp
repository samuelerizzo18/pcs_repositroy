#include <iostream>
#include <fstream>

int main(int argc, const char *argv[]) {
    if (argc == 2) {
        std::cout << "Numero di parametri: " << argc << "\n";
        for (int i = 0; i < argc; i++) {
            std::cout << "Parametro " << i << " = " << argv[i] << "\n";
        }
 
        std::ifstream ifs(argv[1]); 
        std::cout << "\n"; 
                                                                
        if ( ifs.is_open() ) { // Check if file successfully opened

            while( !ifs.eof() ) {
                std::string location;
                double t1;                                                                            //definisco la temperatura n.1
                double t2;                                                                            //definisco la temperatura n.2
                double t3;                                                                            //definisco la temperatura n.3
                double t4;                                                                            //definisco la temperatura n.4
                ifs >> location >> t1 >> t2 >> t3 >> t4;

                std::cout << location << " " << (t1 + t2 + t3 + t4)/4 << "\n";                        //stampo location e media
            }
        }

        else {
            std::cerr << "Il file non è stato aperto correttamente\n"; 
        }
        
    }
    else {
        std::cerr << "Il parametro non è stato specificato\n";
    }
    return 0;
}
