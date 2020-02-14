#ifndef ACTIVATION_LAYER_H
#define ACTIVATION_LAYER_H

#include "activations.h"
#include "layer.h"
#include "network.h"

layer make_activation_layer(int batch, int inputs, ACTIVATION activation);

void forward_activation_layer(layer l, network net);
void backward_activation_layer(layer l, network net);
#if THREAD_LAYER_MODE
void forward_activation_layer_thread(netlayer* input);
#endif

#ifdef GPU
void forward_activation_layer_gpu(layer l, network net);
void backward_activation_layer_gpu(layer l, network net);
#endif

#endif

