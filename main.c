#include <stdio.h>
#include "library.h"

int main(void){
    printf("LINKED LIST TESTS\n====================================\n");
    struct song_node *songList = new_node("abba", "the winner takes it all");
    printf("\n1. Testing print_song(): \n");
    print_song(songList);
    printf("\n\n2. Testing print_list() and insert_order(): \n");
    songList = insert_order(songList, "andrew bird", "a");
    print_list(songList);
    printf("\n");
    songList = insert_order(songList, "andrew bird", "c");
    print_list(songList);
    printf("\n");
    songList = insert_order(songList, "actual dyrland", "white winter hymnal");
    print_list(songList);
    printf("\n");
    songList = insert_order(songList, "hans zimmer", "cornfield chase");
    print_list(songList);
    printf("\n");
    songList = insert_order(songList, "hans zimmer", "time");
    print_list(songList);
    printf("\n");
    songList = insert_order(songList, "andrew bird", "b");
    print_list(songList);
    printf("\n");
    songList = insert_order(songList, "abba", "dancing queen");
    print_list(songList);
    printf("\n");
    printf("\n3. Testing insert_front() by inserting [abba: angel eyes]: \n");
    songList = insert_order(songList, "abba", "angel eyes");
    print_list(songList);
    printf("\n");
    printf("\n4. Testing find_song() by finding [andrew bird: b]:\n");
    print_song(find_song(songList, "andrew bird", "b"));
    printf("\n");
    printf("\n5. Testing find_first_song() by finding [andrew bird: a], the first song by andrew bird in the list:\n");
    print_song(find_first_song(songList, "andrew bird"));
    printf("\n");
    printf("\n6. Testing random_song():\n");
    print_song(random_song(songList));
    printf("\n");
    print_song(random_song(songList));
    printf("\n");
    print_song(random_song(songList));
    printf("\n");
    print_song(random_song(songList));
    printf("\n");
    print_song(random_song(songList));
    printf("\n");
    printf("\n7. Testing remove song by removing [abba: angel eyes]\n");
    songList = remove_song(songList, "abba", "angel eyes");
    printf("List after removal:");
    print_list(songList);
    printf("\n");
    printf("\n7. Testing free_songs()\n");
    songList = free_songs(songList);
    printf("List after free_songs() : ");
    print_list(songList);
    printf("\n");

    printf("\n\nMUSIC LIBRARY TESTS\n====================================\n");
    printf("\n1. Creating library with create_library()\n");
    struct library *myLibrary = create_library();
    printf("%s\n", "Library initialized successfully.");
    printf("\n2. Testing add_song() by adding Haotian's favorite songs! (They really are the best)\n");
    add_song(myLibrary, new_node("kishi bashi", "new bright whites"));
    add_song(myLibrary, new_node("kishi bashi", "honeybody"));
    add_song(myLibrary, new_node("kishi bashi", "angeline"));
    add_song(myLibrary, new_node("kishi bashi", "annie, heart thief of the sea"));
    add_song(myLibrary, new_node("kishi bashi", "this must be the place"));
    add_song(myLibrary, new_node("fleet foxes", "white winter hymnal"));
    add_song(myLibrary, new_node("fleet foxes", "mykonos"));
    add_song(myLibrary, new_node("fleet foxes", "blue ridge mountains"));
    add_song(myLibrary, new_node("fleet foxes", "ragged wood"));
    add_song(myLibrary, new_node("far caspian", "blue"));
    add_song(myLibrary, new_node("far caspian", "between days"));
    add_song(myLibrary, new_node("far caspian", "a dream of you"));
    add_song(myLibrary, new_node("abba", "angel eyes"));
    add_song(myLibrary, new_node("abba", "dancing queen"));
    add_song(myLibrary, new_node("absofacto", "someone else's dream"));
    add_song(myLibrary, new_node("absofacto", "dissolve"));
    add_song(myLibrary, new_node("bees gees", "staying alive"));
    add_song(myLibrary, new_node("bees gees", "how deep is your love"));
    add_song(myLibrary, new_node("coast modern", "dive"));
    add_song(myLibrary, new_node("coast modern", "hollow life"));
    add_song(myLibrary, new_node("these", "from here on are fake songs:"));
    add_song(myLibrary, new_node("u", "a student punched a hole in the wall!!!!"));
    add_song(myLibrary, new_node("velcro", "and he went through the wall too!"));
    add_song(myLibrary, new_node("water", "where is the water?!"));
    add_song(myLibrary, new_node("xylophone", "bing bing bong"));
    add_song(myLibrary, new_node("your mama", "your mama so fat she turned into a black hole"));
    add_song(myLibrary, new_node("zack", "when we first met"));
    add_song(myLibrary, new_node("oberhofer", "sea of dreams"));
    add_song(myLibrary, new_node("//slash-backslash\\\\", "dyrland"));
    add_song(myLibrary, new_node("//slash-backslash\\\\", "weaver"));
    printf("%s\n", "Songs were added successfully");
    printf("\n3. Testing print_library()\n");
    print_library(myLibrary);

    printf("\n4. Testing print_songs_by_artist()\n");
    printf("%s", "Printing songs by far caspian: ");
    print_songs_by_artist(myLibrary, "far caspian");
    printf("\n%s", "Printing songs by abba: ");
    print_songs_by_artist(myLibrary, "abba");
    printf("\n%s", "Printing songs by absofacto: ");
    print_songs_by_artist(myLibrary, "absofacto");

    printf("\n\n5. Testing print_songs_by_letter()\n");
    printf("%s\n", "Printing all songs made by artist with names starting with \"f\"");
    print_songs_by_letter(myLibrary, 'f');

    printf("\n\n6. Testing get_song()\n");
    printf("%s\n", "- Looking for song [abba: angel eyes]...");
    get_song(myLibrary, "angel eyes", "abba");
    printf("\n%s\n", "- Looking for song [not an artist: not a song]...");
    get_song(myLibrary, "not an artist", "not a song");

    printf("\n\n7. Testing delete_song()\n");
    printf("- %s -\n", "Printing all songs made by artist with names starting with \"f\"");
    print_songs_by_letter(myLibrary, 'f');
    printf("\n %s -\n", "       = Deleting [far caspian: a dream of you]");
    delete_song(myLibrary, "far caspian", "a dream of you");
    printf("- %s -\n", "Printing all songs made by artist with names starting with \"f\"");
    print_songs_by_letter(myLibrary, 'f');
    printf("\n %s -\n", "       = Deleting [fleet foxes: blue ridge mountains]");
    delete_song(myLibrary, "fleet foxes", "blue ridge mountains");
    printf("- %s -\n", "Printing all songs made by artist with names starting with \"f\"");
    print_songs_by_letter(myLibrary, 'f');

    printf("\n\n%s\n", "8. Testing Shuffle: Shuffling 10 songs");
    shuffle_songs(myLibrary, 10);

    printf("\n\n%s\n", "9. Testing free_library(): freeing whole library");
    myLibrary = free_library(myLibrary);
    printf("\n%s\n", "Library has been freed.");
    printf("%s\n", myLibrary == NULL ? "If you see this message, that means the library is now NULL" : "If you see this message, that means something went wrong.");









}