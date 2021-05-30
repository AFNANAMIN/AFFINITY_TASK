#include <iostream>
#include <string>
#include <vector>
#include <thread>

using namespace std;
// using namespace curlpp::options;

void print(int i, const string &str){
    string msg = to_string(i) + " : " + str;
    cout << msg << endl;
}

void main(){
    vector<string> images = {"one", "two", "thread"};
    // vector<thread> threads;

    for(int i = 0; i < images.size(); i++){
        thread(print, i, images[i]).join();
    }

    // for(thread &thread: threads){
    //     thread.join();
    // }

}


// void downloadAndDistributeImage(){
// 	// create states, and iterate the loop.
//     byte[] imageBytes = downloadImage();
//     sendToChange(imageBytes);
// }

// byte[] downloadImage() {
// 	// download the random image and get the image data as bytes

// 	try
// 	{
// 		curlpp::Cleanup myCleanup;
// 		int i = rand() % 100;
// 		string url = format("https://picsum.photos/id/{}/200/", i);
// 		curlpp::options::Url myUrl(url);
// 		curlpp::Easy myRequest;
// 		myRequest.setOpt(myUrl);
// 		myRequest.perform();

// 		ostringstream os;
// 		curlpp::options::WriteStream ws(&os);
// 		myRequest.setOpt(ws);
// 		myRequest.perform();
// 		os << myRequest;

// 	catch(curlpp::RuntimeError & e)
// 	{
// 		cout << e.what() << endl;
// 	}

// 	catch(curlpp::LogicError & e)
// 	{
// 		cout << e.what() << endl;
// 	}
// }

// void sendToChange(byte[] imageBytes){
// 	// create and open scocket channel on prot 4200, and then write the bytes 
// }

