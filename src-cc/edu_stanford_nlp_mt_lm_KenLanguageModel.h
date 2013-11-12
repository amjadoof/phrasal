/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_stanford_nlp_mt_lm_KenLanguageModel */

#ifndef _Included_edu_stanford_nlp_mt_lm_KenLanguageModel
#define _Included_edu_stanford_nlp_mt_lm_KenLanguageModel
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_stanford_nlp_mt_lm_KenLanguageModel
 * Method:    readKenLM
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_edu_stanford_nlp_mt_lm_KenLanguageModel_readKenLM
  (JNIEnv *, jobject, jstring);

/*
 * Class:     edu_stanford_nlp_mt_lm_KenLanguageModel
 * Method:    scoreNGram
 * Signature: (J[I)J
 */
JNIEXPORT jlong JNICALL Java_edu_stanford_nlp_mt_lm_KenLanguageModel_scoreNGram
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     edu_stanford_nlp_mt_lm_KenLanguageModel
 * Method:    getLMId
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_edu_stanford_nlp_mt_lm_KenLanguageModel_getLMId
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     edu_stanford_nlp_mt_lm_KenLanguageModel
 * Method:    getOrder
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_edu_stanford_nlp_mt_lm_KenLanguageModel_getOrder
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif