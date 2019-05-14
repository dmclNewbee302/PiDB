// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pidb.proto

#ifndef PROTOBUF_INCLUDED_pidb_2eproto
#define PROTOBUF_INCLUDED_pidb_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_pidb_2eproto 

namespace protobuf_pidb_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_pidb_2eproto
namespace pidb {
class PiDBRequest;
class PiDBRequestDefaultTypeInternal;
extern PiDBRequestDefaultTypeInternal _PiDBRequest_default_instance_;
class PiDBResponse;
class PiDBResponseDefaultTypeInternal;
extern PiDBResponseDefaultTypeInternal _PiDBResponse_default_instance_;
}  // namespace pidb
namespace google {
namespace protobuf {
template<> ::pidb::PiDBRequest* Arena::CreateMaybeMessage<::pidb::PiDBRequest>(Arena*);
template<> ::pidb::PiDBResponse* Arena::CreateMaybeMessage<::pidb::PiDBResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace pidb {

// ===================================================================

class PiDBRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pidb.PiDBRequest) */ {
 public:
  PiDBRequest();
  virtual ~PiDBRequest();

  PiDBRequest(const PiDBRequest& from);

  inline PiDBRequest& operator=(const PiDBRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PiDBRequest(PiDBRequest&& from) noexcept
    : PiDBRequest() {
    *this = ::std::move(from);
  }

  inline PiDBRequest& operator=(PiDBRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PiDBRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PiDBRequest* internal_default_instance() {
    return reinterpret_cast<const PiDBRequest*>(
               &_PiDBRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PiDBRequest* other);
  friend void swap(PiDBRequest& a, PiDBRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PiDBRequest* New() const final {
    return CreateMaybeMessage<PiDBRequest>(NULL);
  }

  PiDBRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PiDBRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PiDBRequest& from);
  void MergeFrom(const PiDBRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PiDBRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:pidb.PiDBRequest)
 private:
  void set_has_key();
  void clear_has_key();
  void set_has_value();
  void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  friend struct ::protobuf_pidb_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PiDBResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pidb.PiDBResponse) */ {
 public:
  PiDBResponse();
  virtual ~PiDBResponse();

  PiDBResponse(const PiDBResponse& from);

  inline PiDBResponse& operator=(const PiDBResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PiDBResponse(PiDBResponse&& from) noexcept
    : PiDBResponse() {
    *this = ::std::move(from);
  }

  inline PiDBResponse& operator=(PiDBResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PiDBResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PiDBResponse* internal_default_instance() {
    return reinterpret_cast<const PiDBResponse*>(
               &_PiDBResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(PiDBResponse* other);
  friend void swap(PiDBResponse& a, PiDBResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PiDBResponse* New() const final {
    return CreateMaybeMessage<PiDBResponse>(NULL);
  }

  PiDBResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PiDBResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PiDBResponse& from);
  void MergeFrom(const PiDBResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PiDBResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string old_value = 2;
  bool has_old_value() const;
  void clear_old_value();
  static const int kOldValueFieldNumber = 2;
  const ::std::string& old_value() const;
  void set_old_value(const ::std::string& value);
  #if LANG_CXX11
  void set_old_value(::std::string&& value);
  #endif
  void set_old_value(const char* value);
  void set_old_value(const char* value, size_t size);
  ::std::string* mutable_old_value();
  ::std::string* release_old_value();
  void set_allocated_old_value(::std::string* old_value);

  // optional string new_value = 3;
  bool has_new_value() const;
  void clear_new_value();
  static const int kNewValueFieldNumber = 3;
  const ::std::string& new_value() const;
  void set_new_value(const ::std::string& value);
  #if LANG_CXX11
  void set_new_value(::std::string&& value);
  #endif
  void set_new_value(const char* value);
  void set_new_value(const char* value, size_t size);
  ::std::string* mutable_new_value();
  ::std::string* release_new_value();
  void set_allocated_new_value(::std::string* new_value);

  // optional string redirect = 4;
  bool has_redirect() const;
  void clear_redirect();
  static const int kRedirectFieldNumber = 4;
  const ::std::string& redirect() const;
  void set_redirect(const ::std::string& value);
  #if LANG_CXX11
  void set_redirect(::std::string&& value);
  #endif
  void set_redirect(const char* value);
  void set_redirect(const char* value, size_t size);
  ::std::string* mutable_redirect();
  ::std::string* release_redirect();
  void set_allocated_redirect(::std::string* redirect);

  // required bool success = 1;
  bool has_success() const;
  void clear_success();
  static const int kSuccessFieldNumber = 1;
  bool success() const;
  void set_success(bool value);

  // @@protoc_insertion_point(class_scope:pidb.PiDBResponse)
 private:
  void set_has_success();
  void clear_has_success();
  void set_has_old_value();
  void clear_has_old_value();
  void set_has_new_value();
  void clear_has_new_value();
  void set_has_redirect();
  void clear_has_redirect();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr old_value_;
  ::google::protobuf::internal::ArenaStringPtr new_value_;
  ::google::protobuf::internal::ArenaStringPtr redirect_;
  bool success_;
  friend struct ::protobuf_pidb_2eproto::TableStruct;
};
// ===================================================================

class PiDBService_Stub;

class PiDBService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline PiDBService() {};
 public:
  virtual ~PiDBService();

  typedef PiDBService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void write(::google::protobuf::RpcController* controller,
                       const ::pidb::PiDBRequest* request,
                       ::pidb::PiDBResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void read(::google::protobuf::RpcController* controller,
                       const ::pidb::PiDBRequest* request,
                       ::pidb::PiDBResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(PiDBService);
};

class PiDBService_Stub : public PiDBService {
 public:
  PiDBService_Stub(::google::protobuf::RpcChannel* channel);
  PiDBService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~PiDBService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements PiDBService ------------------------------------------

  void write(::google::protobuf::RpcController* controller,
                       const ::pidb::PiDBRequest* request,
                       ::pidb::PiDBResponse* response,
                       ::google::protobuf::Closure* done);
  void read(::google::protobuf::RpcController* controller,
                       const ::pidb::PiDBRequest* request,
                       ::pidb::PiDBResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(PiDBService_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PiDBRequest

// required string key = 1;
inline bool PiDBRequest::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PiDBRequest::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PiDBRequest::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PiDBRequest::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& PiDBRequest::key() const {
  // @@protoc_insertion_point(field_get:pidb.PiDBRequest.key)
  return key_.GetNoArena();
}
inline void PiDBRequest::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pidb.PiDBRequest.key)
}
#if LANG_CXX11
inline void PiDBRequest::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pidb.PiDBRequest.key)
}
#endif
inline void PiDBRequest::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pidb.PiDBRequest.key)
}
inline void PiDBRequest::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pidb.PiDBRequest.key)
}
inline ::std::string* PiDBRequest::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:pidb.PiDBRequest.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PiDBRequest::release_key() {
  // @@protoc_insertion_point(field_release:pidb.PiDBRequest.key)
  if (!has_key()) {
    return NULL;
  }
  clear_has_key();
  return key_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PiDBRequest::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:pidb.PiDBRequest.key)
}

// optional string value = 2;
inline bool PiDBRequest::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PiDBRequest::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PiDBRequest::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PiDBRequest::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& PiDBRequest::value() const {
  // @@protoc_insertion_point(field_get:pidb.PiDBRequest.value)
  return value_.GetNoArena();
}
inline void PiDBRequest::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pidb.PiDBRequest.value)
}
#if LANG_CXX11
inline void PiDBRequest::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pidb.PiDBRequest.value)
}
#endif
inline void PiDBRequest::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pidb.PiDBRequest.value)
}
inline void PiDBRequest::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pidb.PiDBRequest.value)
}
inline ::std::string* PiDBRequest::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:pidb.PiDBRequest.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PiDBRequest::release_value() {
  // @@protoc_insertion_point(field_release:pidb.PiDBRequest.value)
  if (!has_value()) {
    return NULL;
  }
  clear_has_value();
  return value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PiDBRequest::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:pidb.PiDBRequest.value)
}

// -------------------------------------------------------------------

// PiDBResponse

// required bool success = 1;
inline bool PiDBResponse::has_success() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PiDBResponse::set_has_success() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PiDBResponse::clear_has_success() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PiDBResponse::clear_success() {
  success_ = false;
  clear_has_success();
}
inline bool PiDBResponse::success() const {
  // @@protoc_insertion_point(field_get:pidb.PiDBResponse.success)
  return success_;
}
inline void PiDBResponse::set_success(bool value) {
  set_has_success();
  success_ = value;
  // @@protoc_insertion_point(field_set:pidb.PiDBResponse.success)
}

// optional string old_value = 2;
inline bool PiDBResponse::has_old_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PiDBResponse::set_has_old_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PiDBResponse::clear_has_old_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PiDBResponse::clear_old_value() {
  old_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_old_value();
}
inline const ::std::string& PiDBResponse::old_value() const {
  // @@protoc_insertion_point(field_get:pidb.PiDBResponse.old_value)
  return old_value_.GetNoArena();
}
inline void PiDBResponse::set_old_value(const ::std::string& value) {
  set_has_old_value();
  old_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pidb.PiDBResponse.old_value)
}
#if LANG_CXX11
inline void PiDBResponse::set_old_value(::std::string&& value) {
  set_has_old_value();
  old_value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pidb.PiDBResponse.old_value)
}
#endif
inline void PiDBResponse::set_old_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_old_value();
  old_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pidb.PiDBResponse.old_value)
}
inline void PiDBResponse::set_old_value(const char* value, size_t size) {
  set_has_old_value();
  old_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pidb.PiDBResponse.old_value)
}
inline ::std::string* PiDBResponse::mutable_old_value() {
  set_has_old_value();
  // @@protoc_insertion_point(field_mutable:pidb.PiDBResponse.old_value)
  return old_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PiDBResponse::release_old_value() {
  // @@protoc_insertion_point(field_release:pidb.PiDBResponse.old_value)
  if (!has_old_value()) {
    return NULL;
  }
  clear_has_old_value();
  return old_value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PiDBResponse::set_allocated_old_value(::std::string* old_value) {
  if (old_value != NULL) {
    set_has_old_value();
  } else {
    clear_has_old_value();
  }
  old_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), old_value);
  // @@protoc_insertion_point(field_set_allocated:pidb.PiDBResponse.old_value)
}

// optional string new_value = 3;
inline bool PiDBResponse::has_new_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PiDBResponse::set_has_new_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PiDBResponse::clear_has_new_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PiDBResponse::clear_new_value() {
  new_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_new_value();
}
inline const ::std::string& PiDBResponse::new_value() const {
  // @@protoc_insertion_point(field_get:pidb.PiDBResponse.new_value)
  return new_value_.GetNoArena();
}
inline void PiDBResponse::set_new_value(const ::std::string& value) {
  set_has_new_value();
  new_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pidb.PiDBResponse.new_value)
}
#if LANG_CXX11
inline void PiDBResponse::set_new_value(::std::string&& value) {
  set_has_new_value();
  new_value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pidb.PiDBResponse.new_value)
}
#endif
inline void PiDBResponse::set_new_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_new_value();
  new_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pidb.PiDBResponse.new_value)
}
inline void PiDBResponse::set_new_value(const char* value, size_t size) {
  set_has_new_value();
  new_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pidb.PiDBResponse.new_value)
}
inline ::std::string* PiDBResponse::mutable_new_value() {
  set_has_new_value();
  // @@protoc_insertion_point(field_mutable:pidb.PiDBResponse.new_value)
  return new_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PiDBResponse::release_new_value() {
  // @@protoc_insertion_point(field_release:pidb.PiDBResponse.new_value)
  if (!has_new_value()) {
    return NULL;
  }
  clear_has_new_value();
  return new_value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PiDBResponse::set_allocated_new_value(::std::string* new_value) {
  if (new_value != NULL) {
    set_has_new_value();
  } else {
    clear_has_new_value();
  }
  new_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), new_value);
  // @@protoc_insertion_point(field_set_allocated:pidb.PiDBResponse.new_value)
}

// optional string redirect = 4;
inline bool PiDBResponse::has_redirect() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PiDBResponse::set_has_redirect() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PiDBResponse::clear_has_redirect() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PiDBResponse::clear_redirect() {
  redirect_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_redirect();
}
inline const ::std::string& PiDBResponse::redirect() const {
  // @@protoc_insertion_point(field_get:pidb.PiDBResponse.redirect)
  return redirect_.GetNoArena();
}
inline void PiDBResponse::set_redirect(const ::std::string& value) {
  set_has_redirect();
  redirect_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pidb.PiDBResponse.redirect)
}
#if LANG_CXX11
inline void PiDBResponse::set_redirect(::std::string&& value) {
  set_has_redirect();
  redirect_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pidb.PiDBResponse.redirect)
}
#endif
inline void PiDBResponse::set_redirect(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_redirect();
  redirect_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pidb.PiDBResponse.redirect)
}
inline void PiDBResponse::set_redirect(const char* value, size_t size) {
  set_has_redirect();
  redirect_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pidb.PiDBResponse.redirect)
}
inline ::std::string* PiDBResponse::mutable_redirect() {
  set_has_redirect();
  // @@protoc_insertion_point(field_mutable:pidb.PiDBResponse.redirect)
  return redirect_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PiDBResponse::release_redirect() {
  // @@protoc_insertion_point(field_release:pidb.PiDBResponse.redirect)
  if (!has_redirect()) {
    return NULL;
  }
  clear_has_redirect();
  return redirect_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PiDBResponse::set_allocated_redirect(::std::string* redirect) {
  if (redirect != NULL) {
    set_has_redirect();
  } else {
    clear_has_redirect();
  }
  redirect_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), redirect);
  // @@protoc_insertion_point(field_set_allocated:pidb.PiDBResponse.redirect)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pidb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_pidb_2eproto
