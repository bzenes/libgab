/*
 * testUtils
 * Date: Aug-20-2012 
 * Author : Gabriel Renaud gabriel.reno [at sign here ] gmail.com
 *
 */

#include <iostream>
#include <fstream>
#include <memory>

#include "utils.h"

using namespace std;

int main (int argc, char *argv[]) {

    for(int i=0;i<10000;i++)
	cout<<randomUint()<<endl;
    return 0;
    cout<<getDateString()<<endl;
    cout<<getTimeString()<<endl;

    return 1;
    cout<<destringify<float>("hello")<<endl;
    bool s1=destringify<bool>("0");
    bool s2=destringify<bool>("1");
    cout<<booleanAsString(s1)<<endl;
    cout<<booleanAsString(s2)<<endl;


    for(int i=0;i<1000000;i++){
	vector<string>  s1=allTokens("1:2:3:2:3:2:3:2:3:2:3:2:3",':');
	//delete(s1);
    }
    //cout<<"#"<<iteratorToString(s1," - ")<<"#"<<endl;

    return 0;


    cout<<reverseComplement("ATCG")<<endl;
    return 0;


    string testst="   asdsa ad asd\t\n ";
    cout<<"#"<<testst<<"#"<<endl;
    trimWhiteSpacesBothEnds(&testst);
    cout<<"#"<<testst<<"#"<<endl;
    



    if(0)
	for(int i=0;i<1000;i++){
	    cout<<randomBool()<<endl;
	}


    for(int k=0;k<1;k++){

	vector<string> s1;//=allTokens(":0/0:57:99:0,162,2093:26,30:0,0:0,0:0,0:0:",':');
	// string a=string("0/0:57:99:0,162,2093:26,30:0,0:0,0:0,0:0");
	// string b=string(":");
	// vector<string> s1=allTokens(a,b);
	for(unsigned int i=0;i<s1.size();i++){
	    cout<<"#"<<s1[i]<<"#"<<endl;
	}
    }
    
    return 0;
}
