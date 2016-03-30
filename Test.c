/*
 * Test.c
 *
 *  Created on: 2016-3-30
 *      Author: a
 */

#include <stdio.h>
//#include "jni.h"
#include "mmlvkk_Test.h"

int main()
{
	printf("hello world... ");
	return 0;
}


JNIEXPORT void JNICALL Java_mmlvkk_Test_nativeHello
  (JNIEnv *env, jobject obj)
{
	printf("hello world... nativeHello");

}

