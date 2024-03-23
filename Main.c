#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define MAX_PRODUCTS 20
#define MAX_CONSUMERS 5
#define MAX_QUEUE_SIZE 100

typedef struct {
    int productId;
    int productCount;
} Product;
Product stock[MAX_PRODUCTS];

Product queue[MAX_QUEUE_SIZE];

void * consumerThread(void *id){
while(1){


    printf("server");

}



}



void * serverThread(){

    

    for (int i = 0; i < MAX_PRODUCTS; i++ ){
        stock[i].productId = i;
        stock[i].productCount = 0;
        printf("%d",  stock[i].productId);
    }

    printf("server");
    


  
}


int main() {
    // Initialize stock
    

    // Create server thread
    pthread_t server_thread;
    pthread_create(&server_thread, NULL, serverThread, NULL);

    // Create consumer threads
    pthread_t consumer_threads[MAX_CONSUMERS];
    int consumer_ids[MAX_CONSUMERS];
    for (int i = 0; i < MAX_CONSUMERS; i++) {
        consumer_ids[i] = i;
        // create pthread consumers
        pthread_create(&consumer_threads[i], NULL, consumerThread, &consumer_ids[i]);
    }

    // end thread?

    return 0;
}