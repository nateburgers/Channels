#pragma once

#include <primitive_types/primitive_types.h>

typedef struct channel channel_t;

channel_t *channel_create();
void channel_destroy(channel_t *channel);

void channel_send(channel_t *channel, const pointer_t data);
pointer_t channel_receive(channel_t *channel);
