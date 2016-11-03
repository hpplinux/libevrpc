// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: center_client.proto

#ifndef PROTOBUF_center_5fclient_2eproto__INCLUDED
#define PROTOBUF_center_5fclient_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "center_type.pb.h"
// @@protoc_insertion_point(includes)

namespace libevrpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_center_5fclient_2eproto();
void protobuf_AssignDesc_center_5fclient_2eproto();
void protobuf_ShutdownFile_center_5fclient_2eproto();

class CenterResponseClient;

enum ResponseClientAction {
  CLIENT_RESP = 1
};
bool ResponseClientAction_IsValid(int value);
const ResponseClientAction ResponseClientAction_MIN = CLIENT_RESP;
const ResponseClientAction ResponseClientAction_MAX = CLIENT_RESP;
const int ResponseClientAction_ARRAYSIZE = ResponseClientAction_MAX + 1;

const ::google::protobuf::EnumDescriptor* ResponseClientAction_descriptor();
inline const ::std::string& ResponseClientAction_Name(ResponseClientAction value) {
  return ::google::protobuf::internal::NameOfEnum(
    ResponseClientAction_descriptor(), value);
}
inline bool ResponseClientAction_Parse(
    const ::std::string& name, ResponseClientAction* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ResponseClientAction>(
    ResponseClientAction_descriptor(), name, value);
}
// ===================================================================

class CenterResponseClient : public ::google::protobuf::Message {
 public:
  CenterResponseClient();
  virtual ~CenterResponseClient();

  CenterResponseClient(const CenterResponseClient& from);

  inline CenterResponseClient& operator=(const CenterResponseClient& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CenterResponseClient& default_instance();

  void Swap(CenterResponseClient* other);

  // implements Message ----------------------------------------------

  CenterResponseClient* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CenterResponseClient& from);
  void MergeFrom(const CenterResponseClient& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .libevrpc.ResponseClientAction response_client_action = 1;
  inline bool has_response_client_action() const;
  inline void clear_response_client_action();
  static const int kResponseClientActionFieldNumber = 1;
  inline ::libevrpc::ResponseClientAction response_client_action() const;
  inline void set_response_client_action(::libevrpc::ResponseClientAction value);

  // repeated string should_communicate_center = 2;
  inline int should_communicate_center_size() const;
  inline void clear_should_communicate_center();
  static const int kShouldCommunicateCenterFieldNumber = 2;
  inline const ::std::string& should_communicate_center(int index) const;
  inline ::std::string* mutable_should_communicate_center(int index);
  inline void set_should_communicate_center(int index, const ::std::string& value);
  inline void set_should_communicate_center(int index, const char* value);
  inline void set_should_communicate_center(int index, const char* value, size_t size);
  inline ::std::string* add_should_communicate_center();
  inline void add_should_communicate_center(const ::std::string& value);
  inline void add_should_communicate_center(const char* value);
  inline void add_should_communicate_center(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& should_communicate_center() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_should_communicate_center();

  // @@protoc_insertion_point(class_scope:libevrpc.CenterResponseClient)
 private:
  inline void set_has_response_client_action();
  inline void clear_has_response_client_action();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> should_communicate_center_;
  int response_client_action_;
  friend void  protobuf_AddDesc_center_5fclient_2eproto();
  friend void protobuf_AssignDesc_center_5fclient_2eproto();
  friend void protobuf_ShutdownFile_center_5fclient_2eproto();

  void InitAsDefaultInstance();
  static CenterResponseClient* default_instance_;
};
// ===================================================================


// ===================================================================

// CenterResponseClient

// optional .libevrpc.ResponseClientAction response_client_action = 1;
inline bool CenterResponseClient::has_response_client_action() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CenterResponseClient::set_has_response_client_action() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CenterResponseClient::clear_has_response_client_action() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CenterResponseClient::clear_response_client_action() {
  response_client_action_ = 1;
  clear_has_response_client_action();
}
inline ::libevrpc::ResponseClientAction CenterResponseClient::response_client_action() const {
  // @@protoc_insertion_point(field_get:libevrpc.CenterResponseClient.response_client_action)
  return static_cast< ::libevrpc::ResponseClientAction >(response_client_action_);
}
inline void CenterResponseClient::set_response_client_action(::libevrpc::ResponseClientAction value) {
  assert(::libevrpc::ResponseClientAction_IsValid(value));
  set_has_response_client_action();
  response_client_action_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.CenterResponseClient.response_client_action)
}

// repeated string should_communicate_center = 2;
inline int CenterResponseClient::should_communicate_center_size() const {
  return should_communicate_center_.size();
}
inline void CenterResponseClient::clear_should_communicate_center() {
  should_communicate_center_.Clear();
}
inline const ::std::string& CenterResponseClient::should_communicate_center(int index) const {
  // @@protoc_insertion_point(field_get:libevrpc.CenterResponseClient.should_communicate_center)
  return should_communicate_center_.Get(index);
}
inline ::std::string* CenterResponseClient::mutable_should_communicate_center(int index) {
  // @@protoc_insertion_point(field_mutable:libevrpc.CenterResponseClient.should_communicate_center)
  return should_communicate_center_.Mutable(index);
}
inline void CenterResponseClient::set_should_communicate_center(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:libevrpc.CenterResponseClient.should_communicate_center)
  should_communicate_center_.Mutable(index)->assign(value);
}
inline void CenterResponseClient::set_should_communicate_center(int index, const char* value) {
  should_communicate_center_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:libevrpc.CenterResponseClient.should_communicate_center)
}
inline void CenterResponseClient::set_should_communicate_center(int index, const char* value, size_t size) {
  should_communicate_center_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libevrpc.CenterResponseClient.should_communicate_center)
}
inline ::std::string* CenterResponseClient::add_should_communicate_center() {
  return should_communicate_center_.Add();
}
inline void CenterResponseClient::add_should_communicate_center(const ::std::string& value) {
  should_communicate_center_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:libevrpc.CenterResponseClient.should_communicate_center)
}
inline void CenterResponseClient::add_should_communicate_center(const char* value) {
  should_communicate_center_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:libevrpc.CenterResponseClient.should_communicate_center)
}
inline void CenterResponseClient::add_should_communicate_center(const char* value, size_t size) {
  should_communicate_center_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:libevrpc.CenterResponseClient.should_communicate_center)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CenterResponseClient::should_communicate_center() const {
  // @@protoc_insertion_point(field_list:libevrpc.CenterResponseClient.should_communicate_center)
  return should_communicate_center_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CenterResponseClient::mutable_should_communicate_center() {
  // @@protoc_insertion_point(field_mutable_list:libevrpc.CenterResponseClient.should_communicate_center)
  return &should_communicate_center_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace libevrpc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::libevrpc::ResponseClientAction> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::libevrpc::ResponseClientAction>() {
  return ::libevrpc::ResponseClientAction_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_center_5fclient_2eproto__INCLUDED
