#include<bits/stdc++.h>
#include<filesystem>

using namespace std;

namespace fs = std :: filesystem;


void fileOrganizer(string &folderPath){
    map<string, string> filetypes = {
        {".jpg", "Images"},
        {".pdf", "Documents"},
        {".txt", "TextFiles"},
        {".mp3", "Music"},
        {".png", "Images"},
        {".jpeg", "Images"},
        {".mp4", "Videos"},
        {".mkv", "Videos"},
        {".wav", "Music"},
        {".docx", "Documents"},
    };


    try{

        for(auto & entry : fs::directory_iterator(folderPath)){
            if(fs::is_regular_file(entry)){

                string extension = entry.path().extension().string();

                if(filetypes.find(extension) != filetypes.end()){
                    string targetFolder = folderPath + "/" + filetypes[extension];

                    if(!fs::exists(targetFolder)){
                        fs::create_directories(targetFolder);
                    }

                    string targetFilePath = targetFolder + "/" + entry.path().filename().string();

                    fs::rename(entry.path(), targetFilePath);

                    cout << "Moved " << entry.path() << " to " << targetFilePath << endl;
                }

            }
        }

    }catch(exception & e){
        cout << "Error : " << e.what() << endl;
    }

}



int main(){
    string folderPath;

    cout << "Enter the folder/directory path to organize files : \n";

    getline(cin, folderPath);


    if(!fs::exists(folderPath) || !fs::is_directory(folderPath)){
        cout << "Invalid Folder Path!" << endl;
        return -1;
    }


    fileOrganizer(folderPath);

    return 0;
}