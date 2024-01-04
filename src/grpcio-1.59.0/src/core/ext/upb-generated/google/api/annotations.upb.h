/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/api/annotations.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GOOGLE_API_ANNOTATIONS_PROTO_UPB_H_
#define GOOGLE_API_ANNOTATIONS_PROTO_UPB_H_

#include "upb/generated_code_support.h"
// Must be last. 
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

extern const upb_MiniTableExtension google_api_http_ext;
struct google_protobuf_MethodOptions;
extern const upb_MiniTable google_protobuf_MethodOptions_msg_init;


UPB_INLINE bool google_api_has_http(const struct google_protobuf_MethodOptions* msg) {
  return _upb_Message_HasExtensionField(msg, &google_api_http_ext);
}
UPB_INLINE void google_api_clear_http(struct google_protobuf_MethodOptions* msg) {
  _upb_Message_ClearExtensionField(msg, &google_api_http_ext);
}
UPB_INLINE const struct google_api_HttpRule* google_api_http(const struct google_protobuf_MethodOptions* msg) {
  const upb_MiniTableExtension* ext = &google_api_http_ext;
  UPB_ASSUME(!upb_IsRepeatedOrMap(&ext->field));
  UPB_ASSUME(_upb_MiniTableField_GetRep(&ext->field) == kUpb_FieldRep_8Byte);
  const struct google_api_HttpRule* default_val = NULL;
  const struct google_api_HttpRule* ret;
  _upb_Message_GetExtensionField(msg, ext, &default_val, &ret);
  return ret;
}
UPB_INLINE void google_api_set_http(struct google_protobuf_MethodOptions* msg, const struct google_api_HttpRule* val, upb_Arena* arena) {
  const upb_MiniTableExtension* ext = &google_api_http_ext;
  UPB_ASSUME(!upb_IsRepeatedOrMap(&ext->field));
  UPB_ASSUME(_upb_MiniTableField_GetRep(&ext->field) == kUpb_FieldRep_8Byte);
  bool ok = _upb_Message_SetExtensionField(msg, ext, &val, arena);
  UPB_ASSERT(ok);
}
extern const upb_MiniTableFile google_api_annotations_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* GOOGLE_API_ANNOTATIONS_PROTO_UPB_H_ */