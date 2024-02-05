#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <conio.h>
#include "Dog.cpp"
using namespace std;

// He always hated old people or people carrying shopping bags but you will never know why. Such is the life of a stray. And their behavorious most mysterious.
//always have dog treats in ur bad in case you bumb into him
int main()
{
    //initilazation stuff
    Dog::randomizeSeed();

    Dog melo((char*)"Melo", 6, (char*)"Mutt", 16, 73, 21, 80, 65);
    string answer;
    char goodWords[16][12] = {"kale", "snack" , "food", "kalo", "pou eisai", "miss you", "puppy", "papi", "love", "yes", "good", "marshmellow", "melako", "melaki", "fai", "faghto"};
    char badWords[10][12] = {"patata", "xondromelo", "oxi", "no", "fat", "potato", "bad", "idiot", "xontro", "kako"};
    char tricks[10][15] = {"sit", "down", "barrel roll", "itchy", "catch treat"};
    bool homeAtNight = false;
    //start
    cout<<"WELCOME TO"<<endl;
    melo.printPortrait(0);
    cout << "'>>' indicate that you are directly talking to someone. If you would like to not say anything, you can just press enter and not type anything." << endl << "Otherwise, if no '>>' take place, the game will say what choices you have." << endl;
    cout << "Also please dont use UPPERCASE letters or greek or greeklish... my code isnt that code and im too lazy to check user input extensively" << endl;
    cout << "PRESS ENTER TO START";
    getch();


    //meet melo
    cout << endl <<"-----------------------------" << endl;
    cout << "Today is a beautiful, sunny day and you always look forward to beautiful, sunny days. After a week of hard work you finally have a day off and free time to relax." << endl << "You decide to go on a walk alone to unwind and think about various stuff." << endl;
    cout << "Suddenly, just as you leave your doorstep, you hear little paws hitting the ground." << endl << "\"tut toukt tsk tuk tut toukt tsk tuk\"" << endl;
    melo.printPortrait(4);
    cout << "IT'S MELO!" << endl <<"What do you say? (PRESS ONLY ENTER TO SAY NOTHING)" << endl << ">>";
    getline(cin, answer);
    if (answer.find("melo") != string::npos)
    {
        melo.happyRelationship(5);
        cout << "Melo immediately recognizes his name and comes running towards you, his tail wagging and all!" << endl;
        for(int i = 0;i<16;i++)
        {
            if (answer.find(goodWords[i]) != string::npos)
            {
                cout << "He seemed to especially like the word \"" << goodWords[i] << "\"." <<endl;
                melo.happyRelationship(10);
                break;
            }
            if (answer.find(badWords[i]) != string::npos && i < 10)
            {
                cout << "He seemed completely ignorant of the fact that you called him \"" << badWords[i] << "\"." <<endl;
                break;
            }
        }
        melo.printPortrait(6);
        cout << "He makes his little silly spin and dance to say hello, which always makes you laugh. He can hardly contain his excitement. You've haven't seen him for what, four days?" << endl;
    }
    else if (answer.empty())
    {
        cout << "Melo doesn't notice you and keeps on walking, until he senses a familiar scent. He turns around and is looking at you persistenly from afar." << endl;
        melo.printPortrait(5);
        cout << "After a few seconds of intense staring, Melo finally recognizes you and is coming towards you with a smile in his almost white teeth." << endl;
    }
    else
    {
        cout << "Melo recognizes your voice and turns around. He has this huge smile in his face and is coming to you. He knows you have the best snacks in town and only you scratch his favorite spots." << endl;
        for(int i = 0;i<16;i++)
        {
            if (answer.find(goodWords[i]) != string::npos)
            {
                cout << "He seemed to especially like the word \"" << goodWords[i] << "\"." <<endl;
                melo.happyRelationship(10);
                break;
            }
            if (answer.find(badWords[i]) != string::npos && i < 10)
            {
                cout << "He seemed completely ignorant of the fact that you called him \"" << badWords[i] << "\"." <<endl;
                break;
            }
        }
        melo.printPortrait(7);
    }
    //what would you like to do
    cout << "Would you like to pet him for a bit or continue your walk?" << endl << ">>";
    getline(cin, answer);
    if (answer.find("pet") != string::npos)
    {
        melo.happyRelationship(10);
        cout << "You don't even have to ask. Melo plops himself to the ground and demands for your pets." << endl;
        melo.printPortrait(1);
        cout << "You pet him him really roughly and play with his paws. Melo really appreciates it." << endl;
    }

    //SAIN BARBARA
    //RICE FIELDS
    //KORYLOVOS
    cout << "You go on a long walk to Korylovos." << endl;
    melo.printPortrait(8);



    //exit koyrolvos
    cout << "The sun is setting and you must return home. Melo, however, wishes to explore more. Something interesting has caught his attention ." << endl;
    melo.printPortrait(15);
    cout << "Would you like to call Melo to keep you company on your way home or let him be? (PRESS ONLY ENTER TO SAY NOTHING)" <<endl << ">>";
    getline(cin, answer);
    if (answer.empty())
    {
        cout << "You respect Melo's freedom and you sneak away, letting him enjoy his surroundings instead. On your way home, your head is full of thoughts about what would be best for him." << endl;
        cout << "Adopting him has always come to your mind, but can you really provide the only valuable thing he currently has? Yes, his living conditions are awful, and yes, he's full of fleas and not been eating the best quality of food everyday, but maybe the price to pay is too high? Could you ever know if his leash would be too constraining for his freedom or will to run and feel the wind gliding through his chubby cheeks? " << endl;
        melo.printPortrait(16);
        cout << "Perhaps he's happier this way."<<endl;
    }
    else if (answer.find("melo") != string::npos && answer.find("come") != string::npos || answer.find("ela") != string::npos)
    {
        cout << "Melo stops acting aloof and returns to you." << endl;
        homeAtNight = true;
    }
    else
    {
        cout << "Melo turns his ears slightly towards you but ignores you altogether. You go near him to see what has intrigued him so much." << endl;
        cout << "Before you know, Melo runned away and then you hear double and triple barks. Well now it's pretty obvious what caught Melo's attention."  << endl;
        melo.printPortrait(9);
        cout << "The look like Bonnie and Clyde. Only that it's just Melo and Kiwi, two annoying dogs, barking at every passing car. Their barking is piercing through your eardrums, it really is intorelable." << endl;
        cout << "Would you like to call Melo alone and go home or just let them be?" << endl << ">>";
        getline(cin, answer);
        if (answer.find("melo") != string::npos && answer.find("come") != string::npos)
        {
            cout << "Melo listens and returns to you, unlike Kiwi. Good riddance. Finally, piece and quiet." << endl;
            homeAtNight = true;
        }
        else if (answer.empty())
        {
            cout << "You decide it's best to not risk Kiwi coming along, so you just let them be. A fast car passes by, like a lighting. They follow it barking and biting it excessively. Classic of them. It doesn't take them long for their figures to disappear. You take a short way home. Well, fast forward 1 year later and the results are pretty." << endl;
            melo.printPortrait(10);
            cout << "Pretty pretty. :3" << endl;
        }
        else
        {
            cout << "Your shouting proves ineffective and both Melo and Kiwi come back to you. But that doesn't mean they stop barking at anything that moves by. Oh no! Your peaceful walk has been utterly ruined by this resentless dog demon! She is such a bad influence on innocent, good-boy Melo. At least if they had puppies, you maybe wouldn't not have to complain as much." << endl;
            cout << "You can only think of two solutions now; either take the short way home (because it's late) and distract the dog from cars with treats; or go through the forest, risking that it will get too dark. Will you take the short way or the long way?" << endl;
            getline(cin, answer);
            if(answer.find("short") != string::npos)
            {
                cout << "You take the short way and feed the dogs with bits of Pedigree Chicken Bites every time a car passes by. They are hungry and seem to be doing pretty great at paying attention to you instead of the fast-moving cars." << endl;
                melo.printPortrait(14);
                cout << "Melo and Kiwi have been eating way too much until you realize you have only 4 treats left. You could either try to get away from Kiwi and return home with Melo or continue giving them treats less generously, knowing that they will finish soon." << endl;
                getline(cin, answer);
                if (answer.find("treat") != string::npos)
                {
                    cout << "You continue to offer treats, more conservatively and less generously, until you leave from the dangerous highway. Kiwi soon realizes you have no treats left and decides to find something more interesting to do. So it's just you and Melo now." << endl;
                    cout << "You should visit the supermarket tomorrow. You have no more treats for fat melo." << endl;
                    homeAtNight = true;
                }
                else
                {
                    cout << "You try to sneak away from Kiwi, but she just clings onto you until she receives her treat. Eventually she gets furstrated and goes to her old bad habits." << endl;
                    melo.printPortrait(11);
                    cout << "You offer a treat to Melo so that you and him can finally go home. But it isn't enough of a distraction. He prefers to join Kiwi. And he runs to her. And to the car." << endl;
                    cout << "GAV GVA GYA GS GVA" << endl;
                    cout << "The sound of the hard brakes stops his barking. The driver quickly exits the car to see what's happened." << endl;
                    cout << "Kiwi is standing still as a statue. She seems just as confused as you are." << endl;
                    cout << "Mortified, you run to the scene. Everything is numb and you cannot think, but still have hope. Just as you arrive, you cannot find the courage to look." << endl;
                    cout << "It's over, the driver says. A quick death must have been. You know this dog?" << endl;
                    cout << "You don't say anything. You leave the highway with an empty heart and sit on a small rock nearby. You don't even know why. Your body moved on its own." << endl;
                    cout << "Kiwi becomes unstill and continues barking at every passing car. Louder, with more hatred each time. You begin to understand why she might always hate cars." << endl;
                    cout << "You get up and take the long way instead, through the forest, trying to grasp what just happened. Thinking about how and why it could've been different if you went this way, if you made better choices." << endl;
                    melo.printPortrait(24);
                    cout << "The night seemed to have restored peace. Nothing was heard, nothing was moving. You lay on the grass and look up at the black, glittery sky. Unusually black, unusually shiny. You begged for a star to fall, something to disturb the stillness." << endl;
                    cout << "But they kept motionless, their light making you colder and colder. The blackness had almost swallowed you, when you felt soft fur gliding gently along your right arm. It could be the summer breeze, but just for a moment, right there and then... it wasn't." << endl;

                }
            }
            else if (answer.find("long") != string::npos)
            {
                cout << "You find another way home, through a little forest. The strolls with Kiwi can be relaxing after all, huh. It is getting dark, but you are not feeling afraid. With such two dog buddies, who would?" << endl;
                melo.printPortrait(12);
                cout << "Now at least they are a bit more quiet. (Still mischievious.)" << endl;
            }
        }
    }


    //home at night, say goodbye? or not;)
    if(homeAtNight)
    {
        cout << "After an uneventful, relaxing return to home, you reach at your doorstep and it is time to say goodbye. You give him two last pets. Melo, however, seems to have different plans." << endl;
        melo.printPortrait(17);
        cout << "Blocking the door with his paws or trying to get inside are only a number of his strategies to keep you close to him. You laugh with his goofiness and ways of expressing himself." << endl;
        cout << "Would you like to pet Melo until he sleeps, give him a snack to let him know it's ok or just leave?" << endl;
        getline(cin, answer);
        if (answer.find("pet") != string::npos)
        {

            cout << "Melo is always nervous when you are about to leave, so you decide it's best to calm him down. "<<endl;
            melo.printPortrait(18);
            cout << "He lies down in a nervous manner, knowing that, once again, he will sleep alone outside your doorway. After (not) a few pets and sweet talks, his anxiety has melted away." << endl;
            melo.printPortrait(20);
            cout << "Melo has fallen asleep, all curled up and warmed by the entrance rug that you could almost believe it is comfy." << endl;
            if(melo.getRelationship() > 90)
            {
                cout << "You are at the door and ready to go home. Unless . . ." << endl;
                cout << "(Wake up Melo . . .?)" << endl << ">>";
                getline(cin, answer);
                if (answer.empty())
                {
                    cout << "You decide to let him sleep. You are probably not ready for this anyway." << endl;
                    melo.printPortrait(21);
                    cout << "As you leave, the slight sound of the door closing briefly wakes him up. Does he feel... rejection? Does he blame himself, or you, or just accepts his fate without thinking about it? For him, why it's always like this will remain an unsolved mystery he will never be able to understand. His puppy mind isn't that smart to figure it out, so his eyes start closing again as he drifts off..." << endl;
                }
                else
                {
                    cout << "Melo immediately gets up and goes inside the building. He seems confused by the fact that you are not trying to get him out like all the other times. As you open the apartment door, his excitement to explore the whole apartment is uncontrollable but doesn't linger for long. He soon finds a comfy pillow to sleep on. It doesn't take more than 3 seconds for him to crash out." << endl;
                    melo.printPortrait(22);
                    cout << "No wonder, really. It was a really long walk after all." << endl;
                }
            }
            else
            {
                cout << "Part of you is thinking about it, adopting him, but your bond isn't that strong yet." << endl;
                cout << "As you go up the stairs, you encounter sweet thoughts that you will probably see him again the next day and go on a nice walk, just like today." << endl;
            }


        }
        else if (answer.find("snack") != string::npos)
        {
            cout << "Melo hears the wrinkly treats bag and immediately starts behaving like a good boy. He goes to the corner and lays down, because that's the trick he knows the best." << endl;
            melo.printPortrait(2);
            cout << "He looks at you with that adorable face and you can't but offer him with a good chunk of dog food." << endl;
            cout << "You ask him to perform all kinds of tricks you practised in the morning and reward him handsomely. You ask for a barrel roll, but Melo has gotten so fat he only made it halfway." << endl;
            melo.printPortrait(23);
            cout << "Melo is now so content and C H O N K that he doesn't really mind if you leave. FOR NOW." << endl;
            cout << "After a belly rub in that adorable half barrel roll position, you grab this opportunity and return home."<<endl;
        }
        else if (answer.find("leave") != string::npos)
        {
            cout << "You already spent too much time with Melo and don't want to spoil him or reinforce any needy behaviours. He should learn to be more independent as you may not always be there for him. You are in a hurry anyways. You gently push his feet away from the door, give him a last pet as he deserves, and return home. Melo's smile stays persistant until you cross the door." << endl;
            melo.printPortrait(19);
            cout << "Good night little one."<<endl;
        }
    }

    cout << "THE END";
    return 0;
}
