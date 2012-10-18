/*
  Josh Hartshorn
  -Need to clean up repetitive code, and add a timer. ALso, once the game ends players should not be able to continue placing their marks.

*/


#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"

const int height = 540;
const int width = 480;
const int bpp = 32;

int GridBox[9] = {NULL};
int player = 1;
int winner = 0;

SDL_Event event;

void Draw(SDL_Surface *img, SDL_Surface *screen, int x, int y)
{
    SDL_Rect location;
    location.x = x;
    location.y = y;

    SDL_BlitSurface(img, NULL, screen, &location);
}
class Square
{
private:
    SDL_Rect box;
public:
    Square( int x, int y, int w, int h);
    void handle_events(int numberSquare);
};
Square::Square ( int x, int y, int w, int h)
{
    box.x = x;
    box.y = y;
    box.w = w;//square width
    box.h = h;//square height
}
void Square::handle_events(int numberSquare)
{
    //mouse offsets
    int x = 0, y = 0;
    //if mouse is clicked
    if(event.type == SDL_MOUSEBUTTONDOWN)
    {
        //get the mouse offsets
        x = event.motion.x;
        y = event.motion.y;

        //If a square is clicked
        if((x > box.x) && ( x < box.x + box.w ) && ( y > box.y ) && ( y < box.y + box.h ))
        {
            switch (numberSquare)
            {
            case 1:
                //square one
                if((player % 2) == 1)
                {
                    if(GridBox[0]== 0)
                    {
                        GridBox[0] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[0]== 0)
                    {
                        GridBox[0] = 2;
                        player++;
                    }
                }
                break;

            case 2:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[1]== 0)
                    {
                        GridBox[1] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[1]== 0)
                    {
                        GridBox[1] = 2;
                        player++;
                    }
                }
                break;
            case 3:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[2]== 0)
                    {
                        GridBox[2] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[2]== 0)
                    {
                        GridBox[2] = 2;
                        player++;
                    }
                }
                break;
            case 4:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[3]== 0)
                    {
                        GridBox[3] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[3]== 0)
                    {
                        GridBox[3] = 2;
                        player++;
                    }
                }
                break;
            case 5:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[4]== 0)
                    {
                        GridBox[4] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[4]== 0)
                    {
                        GridBox[4] = 2;
                        player++;
                    }
                }
                break;
            case 6:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[5]== 0)
                    {
                        GridBox[5] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[5]== 0)
                    {
                        GridBox[5] = 2;
                        player++;
                    }
                }
                break;
            case 7:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[6]== 0)
                    {
                        GridBox[6] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[6]== 0)
                    {
                        GridBox[6] = 2;
                        player++;
                    }
                }
                break;
            case 8:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[7]== 0)
                    {
                        GridBox[7] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[7]== 0)
                    {
                        GridBox[7] = 2;
                        player++;
                    }
                }
                break;
            case 9:
                //square two
                if((player % 2) == 1)
                {
                    if(GridBox[8]== 0)
                    {
                        GridBox[8] = 1;
                        player++;
                    }
                }
                if((player % 2) == 0)
                {
                    if(GridBox[8]== 0)
                    {
                        GridBox[8] = 2;
                        player++;
                    }
                }
                break;
            }
        }
    }
}
//this can be cleaned up. perhaps with a for loop!
void DrawImage(int*GridBox, SDL_Surface *imgX, SDL_Surface *imgO, SDL_Surface *screen)
{
    //row 1
    if (GridBox[0] == 1)
    {
        Draw(imgX,screen, 20,20);
    }
    else if (GridBox[0] == 2)
    {
        Draw(imgO, screen, 20, 20);
    }
    if (GridBox[1] == 1)
    {
        Draw(imgX,screen, 180,20);
    }
    else if (GridBox[1] == 2)
    {
        Draw(imgO, screen, 180, 20);
    }
    if (GridBox[2] == 1)
    {
        Draw(imgX,screen, 340,20);
    }
    else if (GridBox[2] == 2)
    {
        Draw(imgO, screen, 340, 20);
    }
    //row 2
    if (GridBox[3] == 1)
    {
        Draw(imgX,screen, 20,180);
    }
    else if (GridBox[3] == 2)
    {
        Draw(imgO, screen, 20, 180);
    }
    if (GridBox[4] == 1)
    {
        Draw(imgX,screen, 180,180);
    }
    else if (GridBox[4] == 2)
    {
        Draw(imgO, screen, 180, 180);
    }
    if (GridBox[5] == 1)
    {
        Draw(imgX,screen, 340,180);
    }
    else if (GridBox[5] == 2)
    {
        Draw(imgO, screen, 340, 180);
    }
    // row 3
    if (GridBox[6] == 1)
    {
        Draw(imgX,screen, 20,340);
    }
    else if (GridBox[6] == 2)
    {
        Draw(imgO, screen, 20, 340);
    }
    if (GridBox[7] == 1)
    {
        Draw(imgX,screen, 180,340);
    }
    else if (GridBox[7] == 2)
    {
        Draw(imgO, screen, 180, 340);
    }
    if (GridBox[8] == 1)
    {
        Draw(imgX,screen, 340,340);
    }
    else if (GridBox[8] == 2)
    {
        Draw(imgO, screen, 340, 340);
    }
}
int main ( int argc, char** argv )
{
    //make grid squares
    //row 1
    Square gridOne( 0, 0,width/3,width/3);
    Square gridTwo( 160, 0,width/3,width/3);
    Square gridThree( 320, 0,width/3,width/3);
    // row 2
    Square gridFour( 0, 160,width/3,width/3);
    Square gridFive( 160, 160,width/3,width/3);
    Square gridSix( 320, 160,width/3,width/3);
    // row 3
    Square gridSeven( 0, 320,width/3,width/3);
    Square gridEight( 160, 320,width/3,width/3);
    Square gridNine( 320, 320,width/3,width/3);


    // initialize SDL video
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "Unable to init SDL: %s\n", SDL_GetError() );
        return 1;
    }

    //title
    SDL_WM_SetCaption("TicTacToe Clone", NULL);

    // create a new window
    SDL_Surface* screen = SDL_SetVideoMode(width, height, bpp,
                                           SDL_HWSURFACE|SDL_DOUBLEBUF);
    if ( !screen )
    {
        printf("Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }
    //Initialize SDL_ttf
    if( TTF_Init() == -1 )
    {
        return false;
    }
    // load images
    SDL_Surface *grid = IMG_Load("table.png");
    if (!grid)
    {
        printf("Unable to load PNG: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Surface *messagebox = IMG_Load("messagebox.png");
    if (!messagebox)
    {
        printf("Unable to load PNG: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Surface *imgX = IMG_Load("x.png");
    if (!imgX)
    {
        printf("Unable to load PNG: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Surface *imgO = IMG_Load("o.png");
    if (!imgX)
    {
        printf("Unable to load PNG: %s\n", SDL_GetError());
        return 1;
    }

    TTF_Font *font = NULL;
    SDL_Color textColor = {0,255,0 };
    SDL_Surface *message = NULL;
    SDL_Surface *end_message = NULL;
    SDL_Surface *replay_message = NULL;
    font = TTF_OpenFont( "argos.ttf", 28 );
    if( font == NULL )
    {
        return false;
    }

    bool EndGame = false;
    bool done = false;
    // program main loop
    while (!done)
    {
        // message processing loop
        while (SDL_PollEvent(&event))
        {
            //handle grid square events
            gridOne.handle_events(1);
            gridTwo.handle_events(2);
            gridThree.handle_events(3);
            gridFour.handle_events(4);
            gridFive.handle_events(5);
            gridSix.handle_events(6);
            gridSeven.handle_events(7);
            gridEight.handle_events(8);
            gridNine.handle_events(9);

            // check for messages
            switch (event.type)
            {
                // exit if the window is closed
            case SDL_QUIT:
                done = true;
                break;

                // check for keypresses
            case SDL_KEYDOWN:
            {
                // exit if ESCAPE is pressed
                if (event.key.keysym.sym == SDLK_ESCAPE)
                    done = true;
                break;
            }
            } // end switch
        } // end of message processing

        // DRAWING STARTS HERE
        Draw(grid,screen,0,0);
        Draw(messagebox,screen,0,480);
        // player turn (1 or 2)
        if((player %2) == 1)
        {
            message = TTF_RenderText_Solid( font, "Player 1 Go!", textColor );
            Draw( message, screen, 0 ,height-50 );
        }
        else if((player %2) == 0)
        {
            message = TTF_RenderText_Solid( font, "Player 2 Go!", textColor );
            Draw( message, screen, 0, height-50);
        }

        //show updated grid screen
        DrawImage(GridBox, imgX, imgO, screen);
        // DRAWING ENDS HERE
        //win conditions
        //rows
        if (GridBox[0] == 1 && GridBox[1] == 1 && GridBox [2] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        if (GridBox[3] == 1 && GridBox[4] == 1 && GridBox [5] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        if (GridBox[6] == 1 && GridBox[7] == 1 && GridBox [8] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        //columns
        if (GridBox[0] == 1 && GridBox[3] == 1 && GridBox [6] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        if (GridBox[1] == 1 && GridBox[4] == 1 && GridBox [7] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        if (GridBox[2] == 1 && GridBox[5] == 1 && GridBox [8] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        //diagonal
        if (GridBox[2] == 1 && GridBox[4] == 1 && GridBox [6] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        if (GridBox[0] == 1 && GridBox[4] == 1 && GridBox [8] == 1)
        {
            winner = 1;
            EndGame = true;
        }
        //rows player 2
        if (GridBox[0] == 2 && GridBox[1] == 2 && GridBox [2] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        if (GridBox[3] == 2 && GridBox[4] == 2 && GridBox [5] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        if (GridBox[6] == 2 && GridBox[7] == 2 && GridBox [8] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        //columns player 2
        if (GridBox[0] == 2 && GridBox[3] == 2 && GridBox [6] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        if (GridBox[1] == 2 && GridBox[4] == 2 && GridBox [7] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        if (GridBox[2] == 2 && GridBox[5] == 2 && GridBox [8] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        //diagonal player 2
        if (GridBox[2] == 2 && GridBox[4] == 2 && GridBox [6] == 2)
        {
            winner = 2;
            EndGame = true;
        }
        if (GridBox[0] == 2 && GridBox[4] == 2 && GridBox [8] == 2)
        {
            winner = 2;
            EndGame = true;
        }

        //tie
        if (player == 10)
        {
            EndGame = true;
        }
        if(EndGame)
        {
            bool replay = false;

            if (winner == 1)
            {
                Draw(messagebox,screen,0,480);
                message = TTF_RenderText_Solid( font, "Player 1 has won!", textColor );
                replay_message = TTF_RenderText_Solid( font, "Press R to replay", textColor );
                Draw( message, screen, 0, height-50);
                Draw( replay_message, screen, width/2, height-50);
                if(event.type == SDL_KEYDOWN)
                {
                    if (event.key.keysym.sym == SDLK_r)
                    {
                        replay = true;
                    }
                }
            }
            else if (winner == 2)
            {
                Draw(messagebox,screen,0,480);
                message = TTF_RenderText_Solid( font, "Player 2 has won!", textColor );
                Draw( message, screen, 0,height-50);
                replay_message = TTF_RenderText_Solid( font, "Press R to replay", textColor );
                Draw( replay_message, screen, width/2, height-50);
                if(event.type == SDL_KEYDOWN)
                {
                    if (event.key.keysym.sym == SDLK_r)
                    {
                        replay = true;
                    }
                }
            }
            else
            {
                message = TTF_RenderText_Solid( font, "This is a tie!", textColor );
                Draw( message, screen, width/3,0);
                replay_message = TTF_RenderText_Solid( font, "Press R to replay", textColor );
                Draw( replay_message, screen, width/2, height-50);
                if(event.type == SDL_KEYDOWN)
                {
                    if (event.key.keysym.sym == SDLK_r)
                    {
                        replay = true;
                    }
                }
            }

            if (replay)
            {
                for(int i = 0; i < 9; i++)
                {
                    GridBox[i] = 0;
                }
                done = false;
                winner = 0;
                replay = false;
                EndGame = false;
                player = 1;
            }

        }

        // finally, update the screen :)
        SDL_Flip(screen);
    } // end main loop
// free loaded bitmap
    SDL_FreeSurface(grid);
    SDL_FreeSurface(imgX);
    SDL_FreeSurface(imgO);
    SDL_FreeSurface(message);
    SDL_FreeSurface(replay_message);
    SDL_FreeSurface(end_message);
    SDL_FreeSurface(screen);


// all is well ;)
    printf("Exited cleanly\n");
    return 0;
}



