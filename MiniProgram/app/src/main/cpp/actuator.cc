//
// Created by XxxYH on 2018/9/8.
//

#include "actuator.h"
xxx::actuator::actuator() {
    JSStaticValue value ={
            0,0,0,0
    };
    JSStaticFunction function ={
            0,0,0
    };
  const  JSClassDefinition definition = {
            0,
            0,
            "",
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
    };
    JSClassRef ref = ::JSClassCreate(&definition);
    globalContext_ref = JSGlobalContextCreate(ref);
    printf("globalContextRef create sucessful");
}

xxx::actuator::~actuator() {

}

char* xxx::actuator::getValue() {
    return "this is global text";
}