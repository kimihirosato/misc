#include <stdio.h>
#include <stdlib.h>

typedef struct _queue {
	struct _queue *next;
	int id;
	char str[8];
} queue_t;

queue_t *haed = NULL;

int main(int argc, char *argv[])
{
	int rc = 0;
	int i = 0;
	queue_t *curr = NULL;
	queue_t **next = NULL;

	/*
	 * Create queue and set values
	 */
	for (i = 0; i < 4; i++) {
		curr = malloc(sizeof(queue_t));
		if (curr == NULL) {
			fprintf(stderr, "malloc() failed\n");
			rc = -1;
			goto release;
		}
		if (head == NULL) {
			head = curr;
		}
		if (next != NULL) {
			*next = curr;
		}
		next = &(curr->next);

		// Set values
		curr->next = NULL;
		curr->id = i;
		sprintf(curr->str, "No. %d", i);
	}

	/*
	 * Show
	 */
	for (curr = head; curr != NULL; curr = curr->next) {
		puts(curr->str);
	}

release:
	/*
	 * Release
	 */
	for (curr = head; curr != NULL; curr = head) {
		head = curr->next;
		free(curr); // "cuur->next" will be an invalid pointer.
	}

	return rc;
}
