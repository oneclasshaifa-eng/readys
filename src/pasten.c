

void pastendCommand(client *c) {
    if (getGenericCommand(c) == C_ERR) return;
    addReply(c,"8200");
    return;
}