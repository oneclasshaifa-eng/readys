#include "pasten.h"

void pastenCommand(client *c) {
    addReplyBulkCBuffer(c, "8200", 4);
    return;
}