#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <unistd.h>

using namespace std;

ifstream fin("input.txt");


vector <int> generate_vector(int size, int max);

vector <int> basic_sort(vector <int> arr);

vector <int> sort(string sortfunction, vector <int> arr);

vector <int> shell_sort(vector <int> arr);

vector <int> insertion_sort(vector <int> arr);

vector <int> merge_sort(vector <int> arr);

vector <int> count_sort(vector <int> arr);

void menu();


void menu(){


    cout<<"The way this program works is that it generates a vector of random numbers and then sorts it using the chosen method. The sorted vector is then written in a file with the name of the chosen method and the number of the test."<<endl;
    cout<<endl;
    cout<<"Happy sorting!"<<endl;
    cout<<"1. Basic Sort"<<endl;
    cout<<"2. Shell Sort"<<endl;
    cout<<"3. Insertion Sort"<<endl;
    cout<<"4. Merge Sort"<<endl;
    cout<<"5. All sorts"<<endl;
    cout<<"6. Count Sort"<<endl;
    cout<<"6. Exit"<<endl;

    cout<<"Input number of tests:"<<endl;

    int tests;

    cin>>tests;

    int size, max;
    string chosen_sort;

    cout<<"Choose sort method:";
    cin>>chosen_sort;

    cout<<"Size:"<<endl;
        cin>>size;

        cout<<"Max Addmissible Value:"<<endl;
        cin>>max;

        if (chosen_sort != "all_sorts"){

        

    for(int i = 0; i < tests; i++){

        usleep(1000000);
        srand(time(NULL));

        ofstream fout(chosen_sort + "_" + to_string(i) + ".txt");

        vector <int> arr = generate_vector(size, max);

        auto begin = std::chrono::high_resolution_clock::now();

        vector <int> sorted_arr = sort(chosen_sort, arr);

        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
       
        double elapsed2 = elapsed.count();

        elapsed2 /= 100000000.0;

        fout<<"Sorting method: "<<chosen_sort<<endl;
        fout<<"Time: "<<elapsed2<<" seconds"<<endl;
        fout<<endl;

        for(int i = 0; i < sorted_arr.size(); i++){
        fout << sorted_arr[i] << " ";

        }

        fout << endl;


}

        }



    else if(chosen_sort == "all_sorts"){

        for(int i = 0; i < tests; i++){
        usleep(1000000);

        srand(time(NULL));

        string sort_ = "basic_sort";
        ofstream fout(sort_ + "_" + to_string(i) + ".txt");

        vector <int> arr = generate_vector(size, max);

        auto begin = std::chrono::high_resolution_clock::now();

        vector <int> sorted_arr = sort(sort_, arr);

        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
       
        double elapsed2 = elapsed.count();

        elapsed2 /= 100000000.0;

        fout<<"Sorting method: "<<sort_<<endl;
        fout<<"Time: "<<elapsed2<<" seconds"<<endl;
        fout<<endl;

        for(int i = 0; i < sorted_arr.size(); i++){
        fout << sorted_arr[i] << " ";

        }

        fout << endl;


}

for(int i = 0; i < tests; i++){
        usleep(1000000);

srand(time(NULL));

        string sort_ = "shell_sort";
        ofstream fout(sort_ + "_" + to_string(i) + ".txt");

        vector <int> arr = generate_vector(size, max);

        auto begin = std::chrono::high_resolution_clock::now();

        vector <int> sorted_arr = sort(sort_, arr);

        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
       
        double elapsed2 = elapsed.count();

        elapsed2 /= 100000000.0;

        fout<<"Sorting method: "<<sort_<<endl;
        fout<<"Time: "<<elapsed2<<" seconds"<<endl;
        fout<<endl;

        for(int i = 0; i < sorted_arr.size(); i++){
        fout << sorted_arr[i] << " ";

        }

        fout << endl;


}


for(int i = 0; i < tests; i++){
            usleep(1000000);


srand(time(NULL));

        string sort_ = "insertion_sort";
        ofstream fout(sort_ + "_" + to_string(i) + ".txt");

        vector <int> arr = generate_vector(size, max);

        auto begin = std::chrono::high_resolution_clock::now();

        vector <int> sorted_arr = sort(sort_, arr);

        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
       
        double elapsed2 = elapsed.count();

        elapsed2 /= 100000000.0;

        fout<<"Sorting method: "<<sort_<<endl;
        fout<<"Time: "<<elapsed2<<" seconds"<<endl;
        fout<<endl;

        for(int i = 0; i < sorted_arr.size(); i++){
        fout << sorted_arr[i] << " ";

        }

        fout << endl;   




    }


for(int i = 0; i < tests; i++){
            usleep(1000000);


srand(time(NULL));

        string sort_ = "merge_sort";
        ofstream fout(sort_ + "_" + to_string(i) + ".txt");

        vector <int> arr = generate_vector(size, max);

        auto begin = std::chrono::high_resolution_clock::now();

        vector <int> sorted_arr = sort(sort_, arr);

        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
       
        double elapsed2 = elapsed.count();

        elapsed2 /= 100000000.0;

        fout<<"Sorting method: "<<sort_<<endl;
        fout<<"Time: "<<elapsed2<<" seconds"<<endl;
        fout<<endl;

        for(int i = 0; i < sorted_arr.size(); i++){
        fout << sorted_arr[i] << " ";

        }

        fout << endl;



}

for(int i = 0; i < tests; i++){
            usleep(1000000);


srand(time(NULL));

        string sort_ = "count_sort";
        ofstream fout(sort_ + "_" + to_string(i) + ".txt");

        vector <int> arr = generate_vector(size, max);

        auto begin = std::chrono::high_resolution_clock::now();

        vector <int> sorted_arr = sort(sort_, arr);

        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
       
        double elapsed2 = elapsed.count();

        elapsed2 /= 100000000.0;

        fout<<"Sorting method: "<<sort_<<endl;
        fout<<"Time: "<<elapsed2<<" seconds"<<endl;
        fout<<endl;

        for(int i = 0; i < sorted_arr.size(); i++){
        fout << sorted_arr[i] << " ";

        }

        fout << endl;




}


}



}


int main(){

    menu();

    return 0;

}


vector <int> generate_vector(int size, int max){

    vector <int> arr;
    for(int i = 0; i < size; i++){
        arr.push_back(rand() % max);
    }
    
    return arr;
    
}



//sortarea prin metoda bulelor

vector <int> basic_sort(vector <int> arr){

    

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] > arr[j])
            {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;

            }
        }
    }
    return arr;

}


//choose sort function

vector <int> sort(string sortfunction, vector <int> arr){

    if(sortfunction == "basic_sort"){
        return basic_sort(arr);
    }

    else if(sortfunction == "shell_sort"){
        return shell_sort(arr);
    }

    else if(sortfunction == "insertion_sort"){
        return insertion_sort(arr);
    }

    else if(sortfunction == "merge_sort"){
        return merge_sort(arr);
    }

    else if(sortfunction == "count_sort"){
        return count_sort(arr);
    }

    else{
        cout<<"Invalid sort function"<<endl;
        return arr;
    }

}



//shell sort

vector <int> shell_sort(vector <int> arr){
    
    long n = arr.size();

    for(int dist = n / 2; dist >= 1; dist /= 2)
    {
        
        for(int i = dist; i <= n-1; i++)
        {

                for(int j = i-dist; j >= 0; j -= dist)
                {
                    if(arr[j] > arr[j+dist])
                    {
                        int aux = arr[j];
                        arr[j] = arr[j+dist];
                        arr[j+dist] = aux;
                    }
                }

        }



    }

return arr;


}

vector <int> insertion_sort(vector <int> arr){

    for(int i = 1; i < arr.size(); i++){
        int aux = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > aux){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = aux;
    }

    return arr;
}


vector <int> merge_sort(vector <int> arr)
{

    if(arr.size() == 1){
        return arr;
    }

    int mid = arr.size() / 2;

    vector <int> left;
    vector <int> right;

    for(int i = 0; i < mid; i++){
        left.push_back(arr[i]);
    }

    for(int i = mid; i < arr.size(); i++){
        right.push_back(arr[i]);
    }

    left = merge_sort(left);
    right = merge_sort(right);

    vector <int> result;

    int i = 0, j = 0;

    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]){
            result.push_back(left[i]);
            i++;
        }
        else{
            result.push_back(right[j]);
            j++;
        }
    }

    while(i < left.size()){
        result.push_back(left[i]);
        i++;
    }

    while(j < right.size()){
        result.push_back(right[j]);
        j++;
    }

    return result;

}


 


vector<int> count_sort(vector<int> arr){
    vector<int> result(arr.size(), 0);

    int max = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    vector<int> count(max+1, 0);
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }
 
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < arr.size(); i++) {
        result[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    return result;
}

