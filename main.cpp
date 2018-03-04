#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> output;
    output.push_back("#include <iostream>");
    output.push_back("#include <vector>");
    output.push_back("#include <string>");
    output.push_back("#include <thread>");
    output.push_back("\n\n");
    output.push_back("int main(int argc,char *argv[]){");
    output.push_back("\treturn 0;");
    output.push_back("}");

    for(std::string &s:output){
        std::cout<<s<<std::endl;
    }
    return 0;
}
