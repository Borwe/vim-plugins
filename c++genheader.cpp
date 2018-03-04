
#include <iostream>
#include <vector>
#include <string>
#include <thread>

void getFile(std::string &name){
    auto start=name.find_last_of('/')+1;
    auto end_end=name.rfind('.');
    std::string main_name=name.substr(start,end_end-start);

    auto ext_name=name.substr(end_end+1,std::string::npos);
    for(char &c:main_name){
        c=toupper(c);
    }

    for(char &c:ext_name){
        c=toupper(c);
    }
    
    name=main_name+"_"+ext_name;
}

int main(int argc,char *argv[]){
    std::vector<std::string> data;
    if(argc<2){
        std::cout<<"Nigguh, give file name"<<std::endl;
        return 0;
    }
    std::string name=argv[1];
    getFile(name);

    data.push_back("#ifndef "+name);
    data.push_back("#define "+name);
    data.push_back("#include <iostream>");
    data.push_back("#include <string>");
    data.push_back("#include <thread>");
    data.push_back("\n\n");
    data.push_back("#endif");

    for(std::string &s:data){
        std::cout<<s<<std::endl;
    }

	return 0;
}
