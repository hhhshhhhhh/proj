'''
#include<stdio.h>

void serial(void);

#include<string.h>



void main (void)
{
    int sun = 1, clo=2, rai=3, sho=4, sto=5, fog=6, win=7, sno=8;//useless
    int so, loop;
    char unit, ctn, ystd, weatnum[10], weatsp[10];
    char sunny[]="sunny";
    char cloudy[]="cloudy";
    char rainy[]="rainy";
    char showery[]="showery";
    char stormy[]="stormy";
    char foggy[]="foggy";
    char windy[]="windy";
    char snowy[]="snowy";
    float temp;
    loop = 0;
    printf("Good day sir/ma'am, I am here to provide you some suggestions for going out based on the weather.");
    while(ctn!='n')
    {
        if(loop>0)
        {
            printf("\nWould you like to have the sum-up for yesterday's weather?[y/n] ");
            scanf(" %c", &ystd);
            if(ystd!='n')
            {
                
                if(strcmp(weatsp,sunny)==0)//sunny
                {
                    printf("Yesterday was %.1f degrees, sunny.", temp);
                }
                if(strcmp(weatsp,cloudy)==0)//cloudy
                {
                    printf("Yesterday was %.1f degrees, cloudy.", temp);
                }
                if(strcmp(weatsp,rainy)==0)//rainy
                {
                    printf("Yesterday was %.1f degrees, rainy.", temp);
                }
                if(strcmp(weatsp,showery)==0)//showery
                {
                    printf("Yesterday was %.1f degrees, showery.", temp);
                }
                if(strcmp(weatsp,showery)==0)//stormy
                {
                    printf("Yesterday was %.1f degrees, stormy.", temp);
                }
                if(strcmp(weatsp,foggy)==0)//foggy
                {
                    printf("Yesterday was %.1f degrees, foggy.", temp);
                }
                if(strcmp(weatsp,windy)==0)//windy
                {
                    printf("Yesterday was %.1f degrees, windy.", temp);
                }
                if(strcmp(weatsp,snowy)==0)//snowy
                {
                    printf("Yesterday was %.1f degrees, snowy.", temp);
                }
            }
        }
        printf("\n\nWhat's the temperature today? ");
        scanf("%f", &temp);
        printf("Is it in Celsius or Fahrenheit?(c/f) ");
        scanf(" %c", &unit);
        printf("And how's the weather?");
        printf("\nPlease type eihter a number or word from below:");
        
        serial();
        
        scanf("%s", weatsp);
    
        if (unit=='c'&& temp<=10)
        {    
            printf("\nIt is %.1f degrees outside, freaking cold, remember to wear more layers.", temp);
        }
        else if (unit=='c'&& temp<=20)
        {
            printf("\nIt is %.1f degrees outside, rather brisk, maybe bring a jacket along.", temp);
        }
        else if (unit=='c'&& temp<=28)
        {
            printf("\nIt is %.1f degrees outside, balmy, one or two layers will do.", temp);
        }
        else if (unit=='c'&& temp>28)
        {
            printf("\nIt is %.1f degrees outside, you live in Singapore? A t-shirt is enough.", temp);
        }
        if (unit=='f'&& temp<=40)
        {
            printf("\nIt is %.1f degrees outside, freaking cold, remember to wear more layers.", temp);
        }
        else if (unit=='f'&&temp<=70)
        {
            printf("\nIt is %.1f degrees outside, rather brisk, maybe bring a jacket along.", temp);
        }
        else if (unit=='f'&&temp<=80)
        {
            printf("\nIt is %.1f degrees outside, balmy, one or two layers will do.", temp);
        }
        else if (unit=='f'&&temp>80)
        {   
            printf("\nIt is %.1f degrees outside, you live in Singapore? A t-shirt is enough.", temp);
        }
    
        if(strcmp(weatsp,sunny)==0)//sunny
        {
            printf("\nNice weather, prepare sunblock if necessary.");
        }
        if(strcmp(weatsp,cloudy)==0)//cloudy
        {
            printf("\nIt might be raining at any time, bring an umbrella if possible.");
        }
        if(strcmp(weatsp,rainy)==0)//rainy
        {
            printf("\nBring an umbrella or raincoat, don't get yourself wet or a fever.");
        }
        if(strcmp(weatsp,showery)==0)//showery
        {
            printf("\nAn umbrella is recommended.");
        }
        if(strcmp(weatsp,stormy)==0)//stormy
        {
            printf("\nPerhaps staying in the house is better, do bring an umbrella if you really have to go out.");
        }
        if(strcmp(weatsp,foggy)==0)//foggy
        {
            printf("\nDrive slower if you are travelling via car.");
        }
        if (temp<=20&&unit=='c')
        {
            if(strcmp(weatsp,windy)==0)//windy, celsius
            {
                printf("\nIt would be slightly colder than it seems, bring extra clothes just in case you did not wear enough.");
            }
        if (temp<=70&&unit=='f')//fahrenheit
        {
            if(strcmp(weatsp,windy)==0)
            {
                printf("\nIt would be slightly colder than it seems, bring extra clothes just in case you did not wear enough.");
            }
        if(strcmp(weatsp,snowy)==0)//snowy
        {
            printf("\nKeep yourself warm, be careful while walking or driving.");
        }
    
    
        printf("\nStay safe.");
        printf("\n\nAnother day?[y/n] ");
        scanf(" %c", &ctn);
        loop = loop+1;
    }
    if(loop!=1)
    {
        printf("\n%d days recorded in total.", loop);
    }
    else
    {
        printf("\n1 day recorded in total.");
    }
    printf("\nFarewell.");
}

void list(void)
{
    printf("\n1 sunny");
    printf("\n2 cloudy");
    printf("\n3 rainy");
    printf("\n4 showery"); 
    printf("\n5 stormy");
    printf("\n6 foggy");
    printf("\n7 windy");
    printf("\n8 snowy\n"); 
}
