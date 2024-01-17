#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
/*                                                                                   coded by GTUTAR (github.com/gtutar)
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄██████████▄▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄██████░█░██████▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄████████░█░████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█████████░█░█████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄█████████░█░█████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████████████████████▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄████░░░░░▀█▄█▀░░░░░████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄█████░░░░░░█▄█░░░░░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄████████▄▄▄█████▄▄▄████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄████▀███████████████████▀████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████▀██████████░██████████▀████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████▀██████████░█░█▀████████▀████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███▀▀░░░▀▀█▀█░█░█░█░█▀█▀▀░░░▀▀███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▀░░░░░░░░░░█░█░█░█░█░░░░░░░░░░▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▀███████▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▀▀█▀▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
*/

/*                                                 INCLUDES                                                     */
#include    <iostream>
#include    <regex>
#include    <curl/curl.h>
#include    <sys/stat.h>
#include    <unordered_map>

/*                                              DEFINITIONS                                                     */
#define     NO_EXIST        (-1)
#define     NEXT            (+1)

/*                                                MACROS                                                        */
#define     LOG(...)        printf(__VA_ARGS__); printf("\n");

using namespace std;

/*                                               VARIABLES                                                      */


/*                                          FUNCTION PROTOTYPES                                                 */

            string      getWebContent               (string &link);
            int         findPositionOfAString       (const string& textContent, const string& keywords, int offset);
            int         findPositionOfAString       (const string& textContent, const string& search);
            string      menuPastebin                ();
            string      getFilename                 (string url );
            void        checkDirectory              (string filename);
            int         fileSave                    (string url, const string& fileName);
            string*     getFileList                 (string& url);
            int         getNumberOfFiles            (string& url);
            int         checkBottomPagination       (string& url);
            void        getUsernameFromURL          (string& url);
            void        menuTest                    ();



/*                                         FUNCTION DECLARATIONS                                                */




    size_t      makeString
                        (
                        [[maybe_unused]]    char*       ptr,
                                            size_t      size,
                                            size_t      member,
                                            void*       data
                        )

                        {

                            [[maybe_unused]] auto* str = (string*)data;

                            int x;

                            for (x = 0; size * member > x; ++x)

                                (*str) += ptr[x];

                            return size * member;

                        }





    string      getWebContent
                        (
                                string      &link
                        )

                        {

                            string webContent;

                            /*check if first character is / */
                            if (link[0] == '/') {link = link.substr(1);}

                            /*check first 8 characters if it is https:// */
                            if (link.substr(0, 8) == "https://") {}
                            else {link = "https://" + link;}

                            CURL* curl;
                            CURLcode res;
                            curl = curl_easy_init();

                            if (curl)
                            {

                                curl_easy_setopt(curl, CURLOPT_URL, &link[0]);
                                curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, true);
                                curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, makeString);
                                curl_easy_setopt(curl, CURLOPT_WRITEDATA, &webContent);

                                /* Perform the request, res will get the return code */
                                res = curl_easy_perform(curl);

                                /* Check for errors */
                                if (res != CURLE_OK)
                                {

                                    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
                                    curl_easy_cleanup(curl);
                                    throw std::runtime_error("Can't get Web Content");

                                }

                                /* Cleanup */
                                curl_easy_cleanup(curl);
                            }

                            return webContent;

                        }





    int         findPositionOfAString
                        (
                        const       string&     textContent,
                        const       string&     keywords,
                                    int         offset
                        )

                        {

                                int keywordsLength = keywords.length();

                                int position = NO_EXIST;

                                if(NO_EXIST == offset){
                                    offset = 0;
                                }

                                char arr[keywordsLength + NEXT];
                                strcpy(arr, keywords.c_str());

                                position = textContent.find(arr, offset+NEXT);

                                return position;

                        }





    int         findPositionOfAString
                        (
                        const       string&     textContent,
                        const       string&     search
                        )

                        {

                            int position;
                            position = findPositionOfAString(textContent, search, 0);

                            if(position != string::npos)
                            {
                                return position;
                            }

                            else
                            {
                                return NO_EXIST;
                            }

                        }





    string      getFilename
                       (
                                    string      url
                       )

                       {

                            string filename;
                            CURL *curl;
                            CURLcode res;

                            url = "https://pastebin.com/" + url;
                            curl = curl_easy_init();

                            if(curl) {

                                curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
                                curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
                                res = curl_easy_perform(curl);

                                if(res != CURLE_OK){

                                    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

                                }

                                else {

                                    char *ct;
                                    res = curl_easy_getinfo(curl, CURLINFO_CONTENT_TYPE, &ct);
                                    if((CURLE_OK == res) && ct){

                                    string filecontent = getWebContent(url);

                                    /* find the position of <h1> */
                                    int positionOfH1Start = findPositionOfAString(filecontent, "<h1>");

                                    /* find the position of </h1> */
                                    int positionOfH1End = findPositionOfAString(filecontent, "</h1>");

                                    /* get the content of positionOfH1Start and positionOfH1End */
                                    filename = filecontent.substr(positionOfH1Start + 4, positionOfH1End - positionOfH1Start - 4);

                                    return filename;

                                    }
                                }

                                curl_easy_cleanup(curl);
                            }

                            return filename;

                        }




    string      makeSubString
                        (
                                    string&     source,
                                    int         positionOfSpanStart,
                                    int         positionOfSpanEnd
                        )

                        {

                            string subString = source.substr(positionOfSpanStart, positionOfSpanEnd - positionOfSpanStart - 1);

                            return subString;

                        }




    void        checkDirectory
                       (
                                    string      filename
                       )

                       {

                           int subdirectoryCount = 0, nestedDirectoryCount = 0;
                           string path;

                           for_each(filename.begin(), filename.end(), [&nestedDirectoryCount](char & c){

                                if(c == '/'){
                                    nestedDirectoryCount++;
                                }

                            });
                           int counter = 1;
                           int posCounter = 0;
                           int positionArray[nestedDirectoryCount];
                           for_each(filename.begin(), filename.end(), [&nestedDirectoryCount, &posCounter, &positionArray, &counter](char & c){

                               if(c == '/'){
                                   positionArray[nestedDirectoryCount - counter] = posCounter;
                                   counter++;
                               }

                               posCounter++;


                           });

                            counter = nestedDirectoryCount;
                            string directoriesToCreate[nestedDirectoryCount];

                            for_each(filename.begin(), filename.end(), [&nestedDirectoryCount, &counter, &directoriesToCreate, &filename, &positionArray](char & c){

                               if(c == '/'){

                                   if(counter == nestedDirectoryCount) {
                                       directoriesToCreate[counter-1] = makeSubString(filename, 0, positionArray[counter -1] + NEXT);
                                   }
                                   else{
                                       directoriesToCreate[counter-1] = makeSubString(filename, positionArray[counter] + NEXT, positionArray[counter - 1] + NEXT);
                                   }

                                   counter--;
                               }

                            });

                            counter = nestedDirectoryCount;
                            while(nestedDirectoryCount > 0)
                            {
                                if(subdirectoryCount == 0){

                                    mkdir(directoriesToCreate[counter - subdirectoryCount - 1].c_str());

                                }

                                else{

                                    path = "";

                                    for (int i = counter-1; i >= counter - subdirectoryCount; i--) {
                                        path += directoriesToCreate[i] + "/";

                                    }

                                    path += directoriesToCreate[counter - subdirectoryCount - 1];

                                    mkdir(path.c_str());

                                }

                                nestedDirectoryCount--;
                                subdirectoryCount++;

                            }
                        }





    int         fileSave
                        (
                                    string      url,
                         const      string&     fileName
                        )

                        {

                            int position = findPositionOfAString(url, "/");
                            url = url.substr(position+1);

                            checkDirectory(fileName);

                            CURL *curl;
                            CURLcode res;
                            url = "https://pastebin.com/raw/" + url;
                            curl = curl_easy_init();
                            if(curl) {
                                curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
                                curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
                                res = curl_easy_perform(curl);
                                if(res != CURLE_OK){
                                    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
                                }
                                else {
                                    char *ct;
                                    res = curl_easy_getinfo(curl, CURLINFO_CONTENT_TYPE, &ct);
                                    string source = getWebContent(url);
                                    if((CURLE_OK == res) && ct){
                                        //printf("We received Content-Type: %s\n", ct);

                                        FILE *fp;
                                        fp = fopen(fileName.c_str(), "wb");
                                        fputs(source.c_str(), fp);
                                        //fwrite(source.c_str(), 1, sizeof(ct), fp);
                                        fclose(fp);

                                        printf("File downloaded successfully\n");

                                        return 0;
                                    }
                                }
                                curl_easy_cleanup(curl);
                            }

                            return -1;

                        }





    string*     getFileList
                       (
                                    string&     url
                       )

                       {

                            string  source   = getWebContent(url);
                            string  subString;

                            int numberOfFiles = getNumberOfFiles(url);
                            auto fileList = new string[numberOfFiles];

                            //find occurrances of <span class="status -public" title="Public paste, anybody can see this paste."></span>
                            int count = 0;
                            int position = 0;
                            while(position != NO_EXIST && count < numberOfFiles-1){
                                position = findPositionOfAString(source, R"(<span class="status -public" title="Public paste, anybody can see this paste."></span>)", position + 1);

                                // create a subString begining the position, ending the end of the line
                                subString = makeSubString(source, position, source.length());
                                int positionOfFileStarts = findPositionOfAString(subString, "<a href=\"/");

                                //update substring to remove <a href=\"/
                                subString = makeSubString(subString, positionOfFileStarts + 9, subString.length());

                                int positionofFileEnds = findPositionOfAString(subString, "\">");

                                //update substring to remove \">
                                subString = makeSubString(subString, 0, positionofFileEnds+1);

                                fileList[count] = subString;

                                count++;
                            }

                            #pragma clang diagnostic push
                            #pragma ide diagnostic ignored "LocalValueEscapesScope"
                            return fileList;
                            #pragma clang diagnostic pop
                       }





    int         getNumberOfFiles
                      (
                                    string&     url
                      )

                      {

                            string  source      = getWebContent(url),
                                    subString;

                            //find occurrances of <span class="status -public" title="Public paste, anybody can see this paste."></span>
                            int     count       = 0,
                                    position    = 0;

                            while(position != NO_EXIST){
                                position = findPositionOfAString(source, R"(<span class="status -public" title="Public paste, anybody can see this paste."></span>)", position + 1);
                                count++;
                            }

                            return count;

                      }





    int         findNthOccuranceInString
                     (
                                    string&     source,
                                    string&     search,
                                    int n
                     )

                     {

                            int     count           = 0,
                                    positionOfSearch= 0;

                            while(count != n){
                                positionOfSearch    = findPositionOfAString(source, search, positionOfSearch);
                                count++;
                            }

                            return positionOfSearch;

                    }





    int         countTotalOccurrancesInString
                    (
                                    string&     source,
                                    string&     search
                    )

                    {

                        int count       = NO_EXIST,
                            position    = 0;

                        while(NO_EXIST != position){
                            position    = findPositionOfAString(source, search, position);
                            count++;
                        }

                         return count;

                    }





    int         checkBottomPagination
                    (
                                string&         url
                    )

                    {

                        string  source          = getWebContent(url),
                                subString       = source,
                                search          = "data-page=\"",
                                searchEnd       = "\">";
                        int     numberOfPages;

                        auto     pos      = findNthOccuranceInString(subString, (string &) search, countTotalOccurrancesInString(subString, search));

                        if(0 == pos){
                            numberOfPages = 1;
                        }
                        else{

                            subString               = makeSubString(source, pos+search.length()-1, subString.length());

                            int endPos              = findPositionOfAString(subString, searchEnd);

                            subString               = makeSubString(subString, NEXT, endPos+NEXT);

                            numberOfPages           = stoi(subString);

                        }

                        return numberOfPages;
                    }





    void            getUsernameFromURL
                    (
                                string&         url
                    )

                    {

                        int positionOfUsername = findPositionOfAString(url, "/u/");
                        url = url.substr(positionOfUsername + NEXT + NEXT + NEXT);

                        int positionOfPageNumber = findPositionOfAString(url, "/");

                        //remove after slash if there is any
                        url = url.substr(0, positionOfPageNumber);

                    }





    void        stringArrayCopy
                    (
                                string*         source,
                                string*         destination,
                                int             size
                    )

                    {

                        for(int i = 0; i < size; i++)
                            destination[i] = source[i];

                    }





    int         getPageNumberFromURL
                    (
                                string&         url
                    )

                    {

                        int positionOfHttp = findPositionOfAString(url, "http");
                        url = url.substr(positionOfHttp + 1);

                        int positionOfUsername = findPositionOfAString(url, "/u/");
                        url = url.substr(positionOfUsername + 1);

                        int positionOfPageNumber = findPositionOfAString(url, "/");
                        url = url.substr(positionOfPageNumber + 1);

                        //remove before slash if there is any
                        positionOfPageNumber = findPositionOfAString(url, "/");
                        url = url.substr(positionOfPageNumber + 1);

                        int returnVal = stoi(url);

                        if(returnVal < 1){
                            return NO_EXIST;
                        }
                        else{
                            return returnVal;
                        }
                    }






    string      menuPastebin() // NOLINT(*-no-recursion)

                    {

                        string entry;

                        printf("Enter the pastebin url or username: ");

                        cin >> entry;

                        if("exit" == entry){
                            exit(0);
                        }
                        else if ("help" == entry){
                            cout << "-----------------------------HELP-----------------------------" << endl;
                            cout << "PasteBin Downloader v1.0\n" << endl;
                            cout << "Usage: pastebin.com/u/username" << endl;
                            cout << "OR" << endl;
                            cout << "Usage: username\n" << endl;
                            cout << "OR" << endl;
                            cout << "Test Mode: test\n" << endl;
                            cout << "--------------------------------------------------------------" << endl;

                            menuPastebin();
                        }
                        else if("test" == entry){
                            menuTest();
                        }

                        return entry;

                    }

    void      menuTest()  // NOLINT(*-no-recursion)

                    {

                            string entry;
                            cout << "-----------------------------TEST-----------------------------" << endl;
                            cout << "Pastebin Downloader Test Mode" << endl;
                            cout << "TestCase (1): countTotalOccurrancesInString" << endl;

                            cin >> entry;

                            if("exit" == entry){
                                menuPastebin();
                            }
                            else if("1" == entry){
                                string url = "pastebin.com/u/FlyFar/1";
                                string search = "data-page=\"";
                                string source = getWebContent(url);
                                cout << "Testing to find occurrances of \" " << search << "\" keyword." << endl;
                                cout << "Result: " << countTotalOccurrancesInString(source, search) << endl;
                            }


                            if("exit" != entry){
                                menuTest();
                            }
                            else{
                                menuPastebin();
                            }

                    }


#pragma         clang diagnostic push
#pragma         ide diagnostic ignored "misc-no-recursion"

    void        downloadWrapper
                    (
                            const string& entry
                    )
                    {

                        /* There are 4 types of urls
                        // 1. Only Username https://pastebin.com/u/username
                        // 2. Username and page number https://pastebin.com/u/username/1
                        // 3. File link https://pastebin.com/xxxxxx
                        // 4. Only username

                        // first identify if the url is a username or a url

                        // checking any term in the url /u/ exists */

                        int positionOfHTTPtag = findPositionOfAString(entry, "http");
                        int positionOfUsername = findPositionOfAString(entry, "/u/");
                        int positionOfDoubleSlash = findPositionOfAString(entry, "//");
                        int positionOfDomain = findPositionOfAString(entry, "pastebin.com");

                        string subStringForSingleSlash = entry.substr(positionOfDoubleSlash + 1);
                        int positionOfSingleSlash = findPositionOfAString(subStringForSingleSlash, "/");

                        if((NO_EXIST == positionOfUsername) && (NO_EXIST == positionOfHTTPtag) && (NO_EXIST == positionOfDomain)){
                            /* This means only username entered, so let's start from the first page of the user */
                            string url = "https://pastebin.com/u/" + entry + "/1";
                            downloadWrapper(url);
                        }
                        else if(NO_EXIST == positionOfUsername) {
                            /* This means, we have a file url */
                            /* Let's get the file id */
                            int initialPosition = findPositionOfAString(entry, "//");
                            string fileURL = entry.substr(initialPosition + 1);

                            int positionOfFileURLStarts = findPositionOfAString(fileURL, "/");
                            fileURL = fileURL.substr(positionOfFileURLStarts + 1);

                            /* Visiting the original url and the get the page content */
                            string filename = getFilename(fileURL);

                            //check if the filename exists on current directory
                            struct stat buffer{};
                            if(stat(filename.c_str(), &buffer) == 0){
                                cout << "File already exists" << endl;
                                return;
                            }

                            /* if the filename is empty */
                            if(filename.empty()){
                                /* this is invalid url */
                                cout << "Invalid url" << endl;
                            }
                            else{
                                /* this is valid, download the file */
                                fileSave(fileURL, filename);
                            }
                        }
                        else {
                            /* This means, we have a username url but still need to check if there is a page number */

                            if(NO_EXIST == positionOfSingleSlash){
                                /* this means there is no page number, we need to add /1 to the url */

                                string url = "https://pastebin.com/u/" + entry + "/1";
                                downloadWrapper(url);

                            }
                            else{
                                /* this means there is a page number,  check if the page number is 1 */

                                string pageNumber = subStringForSingleSlash.substr(positionOfSingleSlash + 1);

                                /* now we cast page number into integer */
                                int currentPageNumber = getPageNumberFromURL((string&)pageNumber);

                                if(currentPageNumber == 1){

                                    /* this means we are on the first page then we check for pagination */

                                    getUsernameFromURL((string &) entry);

                                    /* create a directory for the username */
                                    mkdir(entry.c_str());

                                    /* change the directory to username */
                                    chdir(entry.c_str());

                                    /* check bottom pagination */
                                    int bottomPagination = checkBottomPagination((string&)subStringForSingleSlash);

                                    if(bottomPagination > 5) bottomPagination = bottomPagination + NEXT;

                                    for(int i = 1; i <= bottomPagination; i++){

                                            if(i != 1){
                                                chdir("..");
                                            }

                                            /* create a directory for the username */
                                            mkdir(to_string(i).c_str());

                                            /* change the directory to username */
                                            chdir(to_string(i).c_str());


                                            /* create the url for the raw files */
                                            string url = "pastebin.com/u/" + entry + "/" + to_string(i);

                                            int numberOfFiles = getNumberOfFiles(url);
                                            string fileList[numberOfFiles];

                                            /* remove https:// from url */
                                            positionOfHTTPtag = findPositionOfAString(url, "http");
                                            url = url.substr(positionOfHTTPtag + 1);

                                            stringArrayCopy(getFileList((string &) url), fileList, numberOfFiles);

                                            for(int k = 0; k < numberOfFiles-1; k++){
                                                downloadWrapper("https://pastebin.com"+fileList[k]);
                                            }
                                    }

                                    chdir("..");
                                }

                                else {
                                    /* this means we are on a page other than page number 1, so we don't need to check for pagination, it iterates already */
                                    /* we only need to get filenames and then download each */

                                    int numberOfFiles = getNumberOfFiles((string &) entry);

                                    if(0 == numberOfFiles){
                                        cout << "Invalid url" << endl;
                                        return;
                                    }else {
                                        auto fileList = new string[numberOfFiles];
                                        stringArrayCopy(getFileList((string &) entry), fileList, numberOfFiles);

                                        int k = 0;
                                        for_each(fileList->begin(), fileList->end(), [&k, &fileList](char file){
                                            // download the file
                                            downloadWrapper(fileList[k]);
                                            k++;
                                        });
                                    }

                                }
                            }
                        }
                    }

                    #pragma         clang diagnostic pop
                    #pragma         clang diagnostic push

                    #pragma         ide diagnostic ignored      "UnreachableCode"
    int         main()
                    {
                    #pragma         clang diagnostic push
                    #pragma         ide diagnostic ignored      "EndlessLoop"
                        while(true){
                            string entry = menuPastebin();
                            downloadWrapper(entry);
                        }
                    #pragma         clang diagnostic pop
                        return NO_ERROR;
                    }
                    #pragma clang diagnostic pop
                    #pragma clang diagnostic pop

/*                                                  EOF                                                           */