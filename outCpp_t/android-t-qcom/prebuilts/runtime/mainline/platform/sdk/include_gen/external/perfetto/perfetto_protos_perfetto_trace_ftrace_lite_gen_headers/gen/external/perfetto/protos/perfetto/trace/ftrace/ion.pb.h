// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/ion.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto {
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
class IonStatFtraceEvent;
class IonStatFtraceEventDefaultTypeInternal;
extern IonStatFtraceEventDefaultTypeInternal _IonStatFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::IonStatFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::IonStatFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class IonStatFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.IonStatFtraceEvent) */ {
 public:
  IonStatFtraceEvent();
  virtual ~IonStatFtraceEvent();

  IonStatFtraceEvent(const IonStatFtraceEvent& from);
  IonStatFtraceEvent(IonStatFtraceEvent&& from) noexcept
    : IonStatFtraceEvent() {
    *this = ::std::move(from);
  }

  inline IonStatFtraceEvent& operator=(const IonStatFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline IonStatFtraceEvent& operator=(IonStatFtraceEvent&& from) noexcept {
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

  static const IonStatFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const IonStatFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const IonStatFtraceEvent*>(
               &_IonStatFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IonStatFtraceEvent& a, IonStatFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(IonStatFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline IonStatFtraceEvent* New() const final {
    return CreateMaybeMessage<IonStatFtraceEvent>(nullptr);
  }

  IonStatFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<IonStatFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const IonStatFtraceEvent& from);
  void MergeFrom(const IonStatFtraceEvent& from);
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
  void InternalSwap(IonStatFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.IonStatFtraceEvent";
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
    kLenFieldNumber = 2,
    kTotalAllocatedFieldNumber = 3,
    kBufferIdFieldNumber = 1,
  };
  // optional int64 len = 2;
  bool has_len() const;
  void clear_len();
  ::PROTOBUF_NAMESPACE_ID::int64 len() const;
  void set_len(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional uint64 total_allocated = 3;
  bool has_total_allocated() const;
  void clear_total_allocated();
  ::PROTOBUF_NAMESPACE_ID::uint64 total_allocated() const;
  void set_total_allocated(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 buffer_id = 1;
  bool has_buffer_id() const;
  void clear_buffer_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 buffer_id() const;
  void set_buffer_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.IonStatFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 len_;
  ::PROTOBUF_NAMESPACE_ID::uint64 total_allocated_;
  ::PROTOBUF_NAMESPACE_ID::uint32 buffer_id_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// IonStatFtraceEvent

// optional uint32 buffer_id = 1;
inline bool IonStatFtraceEvent::has_buffer_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IonStatFtraceEvent::clear_buffer_id() {
  buffer_id_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 IonStatFtraceEvent::buffer_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IonStatFtraceEvent.buffer_id)
  return buffer_id_;
}
inline void IonStatFtraceEvent::set_buffer_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  buffer_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.IonStatFtraceEvent.buffer_id)
}

// optional int64 len = 2;
inline bool IonStatFtraceEvent::has_len() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IonStatFtraceEvent::clear_len() {
  len_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 IonStatFtraceEvent::len() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IonStatFtraceEvent.len)
  return len_;
}
inline void IonStatFtraceEvent::set_len(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  len_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.IonStatFtraceEvent.len)
}

// optional uint64 total_allocated = 3;
inline bool IonStatFtraceEvent::has_total_allocated() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IonStatFtraceEvent::clear_total_allocated() {
  total_allocated_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 IonStatFtraceEvent::total_allocated() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.IonStatFtraceEvent.total_allocated)
  return total_allocated_;
}
inline void IonStatFtraceEvent::set_total_allocated(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  total_allocated_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.IonStatFtraceEvent.total_allocated)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fion_2eproto