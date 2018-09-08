#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_xxx_it_com_miniprogram_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
