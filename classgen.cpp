
#include <iostream>
#include <vector>
#include <string>
#include <thread>



int main(int argc,char *argv[]){
    std::string class_name;
    if(argc<2){
        class_name="NoNameClass";
    }else{
        class_name=argv[1];
    }
    std::vector<std::string> data;
    data.push_back("class "+class_name+"{");
    data.push_back("private: ");
    data.push_back("\t");
    data.push_back("\n");
    data.push_back("public: ");
    data.push_back("\t"+class_name+"(){\n\t\n\t}");
    data.push_back("\t");
    data.push_back("};");

    for(std::string &s:data){
        std::cout<<s<<std::endl;
    }

	return 0;
}
