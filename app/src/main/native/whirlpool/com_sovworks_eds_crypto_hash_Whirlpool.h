/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sovworks_eds_crypto_hash_Whirlpool */

#ifndef _Included_com_sovworks_eds_crypto_hash_Whirlpool
#define _Included_com_sovworks_eds_crypto_hash_Whirlpool
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sovworks_eds_crypto_hash_Whirlpool_INITIAL
#define com_sovworks_eds_crypto_hash_Whirlpool_INITIAL 0L
#undef com_sovworks_eds_crypto_hash_Whirlpool_IN_PROGRESS
#define com_sovworks_eds_crypto_hash_Whirlpool_IN_PROGRESS 1L
#undef com_sovworks_eds_crypto_hash_Whirlpool_DIGEST_LENGTH
#define com_sovworks_eds_crypto_hash_Whirlpool_DIGEST_LENGTH 64L
/*
 * Class:     com_sovworks_eds_crypto_hash_Whirlpool
 * Method:    initContext
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_sovworks_eds_crypto_hash_Whirlpool_initContext
  (JNIEnv *, jobject);

/*
 * Class:     com_sovworks_eds_crypto_hash_Whirlpool
 * Method:    freeContext
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sovworks_eds_crypto_hash_Whirlpool_freeContext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sovworks_eds_crypto_hash_Whirlpool
 * Method:    resetDigest
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sovworks_eds_crypto_hash_Whirlpool_resetDigest
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sovworks_eds_crypto_hash_Whirlpool
 * Method:    updateDigestByte
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_com_sovworks_eds_crypto_hash_Whirlpool_updateDigestByte
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     com_sovworks_eds_crypto_hash_Whirlpool
 * Method:    updateDigest
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_com_sovworks_eds_crypto_hash_Whirlpool_updateDigest
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     com_sovworks_eds_crypto_hash_Whirlpool
 * Method:    finishDigest
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_com_sovworks_eds_crypto_hash_Whirlpool_finishDigest
  (JNIEnv *, jobject, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif