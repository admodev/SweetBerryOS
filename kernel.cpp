#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout <<"Hello, World!";
}

int callConstructors()
{
    for(int i = 0; str[i] != '\0'; ++i)
    {
        switch(str[i])
        {
            case '\n':
                width = 0;
                height++;
                break;
            default:
                video_buffer[80*height+width] = (video_buffer[80*height+width] & color) | str[i];
                width++;
                break;
        }

        if(width >= 80)
        {
            width = 0;
            height++;
        }

        if(height >= 25)
        {
            for(height = 0; height < 25; height++)
                for(width = 0; width < 80; width++)
                    video_buffer[80*height+width] = (video_buffer[80*height+width] & color) | ' ';
            width = 0;
            height = 0;
        }
    }
