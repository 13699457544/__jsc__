#include <jni.h>
#include <string>
#include <memory>
#include "actuator.h"
using namespace xxx;
extern "C" JNIEXPORT jstring

JNICALL
Java_xxx_it_com_miniprogram_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    std::string hello = "Hello from C++";
    std::shared_ptr<actuator>ac_exe = std::make_shared<actuator>();
    char* c_str = ac_exe->getValue();
    return env->NewStringUTF(c_str);
}
