#include "org_lwjgl_d3d_IDirect3DVolumeTexture9.h"

/*
 * Class:     org_lwjgl_d3d_IDirect3DVolumeTexture9
 * Method:    nAddDirtyBox
 * Signature: (JLorg/lwjgl/d3d/D3DBox;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DVolumeTexture9_nAddDirtyBox
  (JNIEnv *env, jobject obj, jlong IDirect3DVolumeTexture9, jobject dirtyBox) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DVolumeTexture9
 * Method:    nGetLevelDesc
 * Signature: (JILorg/lwjgl/d3d/D3DVolumeDesc;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DVolumeTexture9_nGetLevelDesc
  (JNIEnv *env, jobject obj, jlong IDirect3DVolumeTexture9, jint level, jobject desc) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DVolumeTexture9
 * Method:    nGetVolumeLevel
 * Signature: (JILorg/lwjgl/d3d/IDirect3DVolume9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DVolumeTexture9_nGetVolumeLevel
  (JNIEnv *env, jobject obj, jlong IDirect3DVolumeTexture9, jint level, jobject volumeLevel) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DVolumeTexture9
 * Method:    nLockBox
 * Signature: (JILorg/lwjgl/d3d/D3DLockedBox;Lorg/lwjgl/d3d/D3DBox;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DVolumeTexture9_nLockBox
  (JNIEnv *env, jobject obj, jlong IDirect3DVolumeTexture9, jint level, jobject lockedVolume, jobject box, jlong flags) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DVolumeTexture9
 * Method:    nUnlockBox
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DVolumeTexture9_nUnlockBox
  (JNIEnv *env, jobject obj, jlong IDirect3DVolumeTexture9, jint level) {

}