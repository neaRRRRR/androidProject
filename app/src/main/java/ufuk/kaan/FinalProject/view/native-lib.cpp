//
// Created by ufukk on 2/6/2021.
//

#include <jni.h>
JNIEXPORT jstring JNICALL
Java_ufuk_kaan_FinalProject_MainActivity_getApiKey(JNIEnv *env, jobject instance) {
 return (*env)->  NewStringUTF(env, "AIzaSyASumYPksF2tUTyz0sJTT73HROO1PxpFTk");
}