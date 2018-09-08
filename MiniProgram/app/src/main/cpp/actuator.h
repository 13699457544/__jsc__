//
// Created by XxxYH on 2018/9/8.
//

#ifndef MINIPROGRAM_ACTUATOR_H
#define MINIPROGRAM_ACTUATOR_H
#include "include/JavaScript.h"
#include "include/JSBase.h"
#include "include/JSContextRef.h"
#include "include/JSObjectRef.h"

namespace xxx {

    class actuator {
    public:
        actuator();
        actuator()= default;
        ~actuator();

    public:
        JSGlobalContextRef globalContext_ref;
        JSObjectRef global_ref;
    };
}

#endif //MINIPROGRAM_ACTUATOR_H
