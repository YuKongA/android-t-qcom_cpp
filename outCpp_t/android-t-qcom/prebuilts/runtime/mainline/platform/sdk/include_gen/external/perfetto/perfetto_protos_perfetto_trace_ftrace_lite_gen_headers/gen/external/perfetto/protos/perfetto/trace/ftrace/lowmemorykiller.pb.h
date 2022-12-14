// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/lowmemorykiller.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2flowmemorykiller_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2flowmemorykiller_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2flowmemorykiller_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2flowmemorykiller_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class LowmemoryKillFtraceEvent;
class LowmemoryKillFtraceEventDefaultTypeInternal;
extern LowmemoryKillFtraceEventDefaultTypeInternal _LowmemoryKillFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::LowmemoryKillFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::LowmemoryKillFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class LowmemoryKillFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.LowmemoryKillFtraceEvent) */ {
 public:
  LowmemoryKillFtraceEvent();
  virtual ~LowmemoryKillFtraceEvent();

  LowmemoryKillFtraceEvent(const LowmemoryKillFtraceEvent& from);
  LowmemoryKillFtraceEvent(LowmemoryKillFtraceEvent&& from) noexcept
    : LowmemoryKillFtraceEvent() {
    *this = ::std::move(from);
  }

  inline LowmemoryKillFtraceEvent& operator=(const LowmemoryKillFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline LowmemoryKillFtraceEvent& operator=(LowmemoryKillFtraceEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const LowmemoryKillFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LowmemoryKillFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const LowmemoryKillFtraceEvent*>(
               &_LowmemoryKillFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LowmemoryKillFtraceEvent& a, LowmemoryKillFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(LowmemoryKillFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LowmemoryKillFtraceEvent* New() const final {
    return CreateMaybeMessage<LowmemoryKillFtraceEvent>(nullptr);
  }

  LowmemoryKillFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LowmemoryKillFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const LowmemoryKillFtraceEvent& from);
  void MergeFrom(const LowmemoryKillFtraceEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LowmemoryKillFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.LowmemoryKillFtraceEvent";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommFieldNumber = 1,
    kPagecacheSizeFieldNumber = 3,
    kPagecacheLimitFieldNumber = 4,
    kFreeFieldNumber = 5,
    kPidFieldNumber = 2,
  };
  // optional string comm = 1;
  bool has_comm() const;
  void clear_comm();
  const std::string& comm() const;
  void set_comm(const std::string& value);
  void set_comm(std::string&& value);
  void set_comm(const char* value);
  void set_comm(const char* value, size_t size);
  std::string* mutable_comm();
  std::string* release_comm();
  void set_allocated_comm(std::string* comm);

  // optional int64 pagecache_size = 3;
  bool has_pagecache_size() const;
  void clear_pagecache_size();
  ::PROTOBUF_NAMESPACE_ID::int64 pagecache_size() const;
  void set_pagecache_size(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional int64 pagecache_limit = 4;
  bool has_pagecache_limit() const;
  void clear_pagecache_limit();
  ::PROTOBUF_NAMESPACE_ID::int64 pagecache_limit() const;
  void set_pagecache_limit(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional int64 free = 5;
  bool has_free() const;
  void clear_free();
  ::PROTOBUF_NAMESPACE_ID::int64 free() const;
  void set_free(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional int32 pid = 2;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::int32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.LowmemoryKillFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr comm_;
  ::PROTOBUF_NAMESPACE_ID::int64 pagecache_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 pagecache_limit_;
  ::PROTOBUF_NAMESPACE_ID::int64 free_;
  ::PROTOBUF_NAMESPACE_ID::int32 pid_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2flowmemorykiller_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LowmemoryKillFtraceEvent

// optional string comm = 1;
inline bool LowmemoryKillFtraceEvent::has_comm() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LowmemoryKillFtraceEvent::clear_comm() {
  comm_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LowmemoryKillFtraceEvent::comm() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LowmemoryKillFtraceEvent.comm)
  return comm_.GetNoArena();
}
inline void LowmemoryKillFtraceEvent::set_comm(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.LowmemoryKillFtraceEvent.comm)
}
inline void LowmemoryKillFtraceEvent::set_comm(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.LowmemoryKillFtraceEvent.comm)
}
inline void LowmemoryKillFtraceEvent::set_comm(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.LowmemoryKillFtraceEvent.comm)
}
inline void LowmemoryKillFtraceEvent::set_comm(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.LowmemoryKillFtraceEvent.comm)
}
inline std::string* LowmemoryKillFtraceEvent::mutable_comm() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.LowmemoryKillFtraceEvent.comm)
  return comm_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LowmemoryKillFtraceEvent::release_comm() {
  // @@protoc_insertion_point(field_release:perfetto.protos.LowmemoryKillFtraceEvent.comm)
  if (!has_comm()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return comm_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LowmemoryKillFtraceEvent::set_allocated_comm(std::string* comm) {
  if (comm != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  comm_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), comm);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.LowmemoryKillFtraceEvent.comm)
}

// optional int32 pid = 2;
inline bool LowmemoryKillFtraceEvent::has_pid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LowmemoryKillFtraceEvent::clear_pid() {
  pid_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LowmemoryKillFtraceEvent::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LowmemoryKillFtraceEvent.pid)
  return pid_;
}
inline void LowmemoryKillFtraceEvent::set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.LowmemoryKillFtraceEvent.pid)
}

// optional int64 pagecache_size = 3;
inline bool LowmemoryKillFtraceEvent::has_pagecache_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LowmemoryKillFtraceEvent::clear_pagecache_size() {
  pagecache_size_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LowmemoryKillFtraceEvent::pagecache_size() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LowmemoryKillFtraceEvent.pagecache_size)
  return pagecache_size_;
}
inline void LowmemoryKillFtraceEvent::set_pagecache_size(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000002u;
  pagecache_size_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.LowmemoryKillFtraceEvent.pagecache_size)
}

// optional int64 pagecache_limit = 4;
inline bool LowmemoryKillFtraceEvent::has_pagecache_limit() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LowmemoryKillFtraceEvent::clear_pagecache_limit() {
  pagecache_limit_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LowmemoryKillFtraceEvent::pagecache_limit() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LowmemoryKillFtraceEvent.pagecache_limit)
  return pagecache_limit_;
}
inline void LowmemoryKillFtraceEvent::set_pagecache_limit(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000004u;
  pagecache_limit_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.LowmemoryKillFtraceEvent.pagecache_limit)
}

// optional int64 free = 5;
inline bool LowmemoryKillFtraceEvent::has_free() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LowmemoryKillFtraceEvent::clear_free() {
  free_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LowmemoryKillFtraceEvent::free() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.LowmemoryKillFtraceEvent.free)
  return free_;
}
inline void LowmemoryKillFtraceEvent::set_free(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000008u;
  free_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.LowmemoryKillFtraceEvent.free)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2flowmemorykiller_2eproto