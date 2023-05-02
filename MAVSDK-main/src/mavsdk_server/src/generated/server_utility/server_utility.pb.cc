// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server_utility/server_utility.proto

#include "server_utility/server_utility.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace mavsdk {
namespace rpc {
namespace server_utility {
PROTOBUF_CONSTEXPR SendStatusTextRequest::SendStatusTextRequest(
    ::_pbi::ConstantInitialized)
  : text_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , type_(0)
{}
struct SendStatusTextRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SendStatusTextRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SendStatusTextRequestDefaultTypeInternal() {}
  union {
    SendStatusTextRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SendStatusTextRequestDefaultTypeInternal _SendStatusTextRequest_default_instance_;
PROTOBUF_CONSTEXPR SendStatusTextResponse::SendStatusTextResponse(
    ::_pbi::ConstantInitialized)
  : server_utility_result_(nullptr){}
struct SendStatusTextResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SendStatusTextResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SendStatusTextResponseDefaultTypeInternal() {}
  union {
    SendStatusTextResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SendStatusTextResponseDefaultTypeInternal _SendStatusTextResponse_default_instance_;
PROTOBUF_CONSTEXPR ServerUtilityResult::ServerUtilityResult(
    ::_pbi::ConstantInitialized)
  : result_str_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , result_(0)
{}
struct ServerUtilityResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ServerUtilityResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ServerUtilityResultDefaultTypeInternal() {}
  union {
    ServerUtilityResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ServerUtilityResultDefaultTypeInternal _ServerUtilityResult_default_instance_;
}  // namespace server_utility
}  // namespace rpc
}  // namespace mavsdk
static ::_pb::Metadata file_level_metadata_server_5futility_2fserver_5futility_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_server_5futility_2fserver_5futility_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_server_5futility_2fserver_5futility_2eproto = nullptr;

const uint32_t TableStruct_server_5futility_2fserver_5futility_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::SendStatusTextRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::SendStatusTextRequest, type_),
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::SendStatusTextRequest, text_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::SendStatusTextResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::SendStatusTextResponse, server_utility_result_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::ServerUtilityResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::ServerUtilityResult, result_),
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::server_utility::ServerUtilityResult, result_str_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::mavsdk::rpc::server_utility::SendStatusTextRequest)},
  { 8, -1, -1, sizeof(::mavsdk::rpc::server_utility::SendStatusTextResponse)},
  { 15, -1, -1, sizeof(::mavsdk::rpc::server_utility::ServerUtilityResult)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::mavsdk::rpc::server_utility::_SendStatusTextRequest_default_instance_._instance,
  &::mavsdk::rpc::server_utility::_SendStatusTextResponse_default_instance_._instance,
  &::mavsdk::rpc::server_utility::_ServerUtilityResult_default_instance_._instance,
};

const char descriptor_table_protodef_server_5futility_2fserver_5futility_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#server_utility/server_utility.proto\022\031m"
  "avsdk.rpc.server_utility\032\024mavsdk_options"
  ".proto\"^\n\025SendStatusTextRequest\0227\n\004type\030"
  "\001 \001(\0162).mavsdk.rpc.server_utility.Status"
  "TextType\022\014\n\004text\030\002 \001(\t\"g\n\026SendStatusText"
  "Response\022M\n\025server_utility_result\030\001 \001(\0132"
  "..mavsdk.rpc.server_utility.ServerUtilit"
  "yResult\"\363\001\n\023ServerUtilityResult\022E\n\006resul"
  "t\030\001 \001(\01625.mavsdk.rpc.server_utility.Serv"
  "erUtilityResult.Result\022\022\n\nresult_str\030\002 \001"
  "(\t\"\200\001\n\006Result\022\022\n\016RESULT_UNKNOWN\020\000\022\022\n\016RES"
  "ULT_SUCCESS\020\001\022\024\n\020RESULT_NO_SYSTEM\020\002\022\033\n\027R"
  "ESULT_CONNECTION_ERROR\020\003\022\033\n\027RESULT_INVAL"
  "ID_ARGUMENT\020\004*\371\001\n\016StatusTextType\022\032\n\026STAT"
  "US_TEXT_TYPE_DEBUG\020\000\022\031\n\025STATUS_TEXT_TYPE"
  "_INFO\020\001\022\033\n\027STATUS_TEXT_TYPE_NOTICE\020\002\022\034\n\030"
  "STATUS_TEXT_TYPE_WARNING\020\003\022\032\n\026STATUS_TEX"
  "T_TYPE_ERROR\020\004\022\035\n\031STATUS_TEXT_TYPE_CRITI"
  "CAL\020\005\022\032\n\026STATUS_TEXT_TYPE_ALERT\020\006\022\036\n\032STA"
  "TUS_TEXT_TYPE_EMERGENCY\020\0072\223\001\n\024ServerUtil"
  "ityService\022{\n\016SendStatusText\0220.mavsdk.rp"
  "c.server_utility.SendStatusTextRequest\0321"
  ".mavsdk.rpc.server_utility.SendStatusTex"
  "tResponse\"\004\200\265\030\001B.\n\030io.mavsdk.server_util"
  "ityB\022ServerUtilityProtob\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_server_5futility_2fserver_5futility_2eproto_deps[1] = {
  &::descriptor_table_mavsdk_5foptions_2eproto,
};
static ::_pbi::once_flag descriptor_table_server_5futility_2fserver_5futility_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_server_5futility_2fserver_5futility_2eproto = {
    false, false, 991, descriptor_table_protodef_server_5futility_2fserver_5futility_2eproto,
    "server_utility/server_utility.proto",
    &descriptor_table_server_5futility_2fserver_5futility_2eproto_once, descriptor_table_server_5futility_2fserver_5futility_2eproto_deps, 1, 3,
    schemas, file_default_instances, TableStruct_server_5futility_2fserver_5futility_2eproto::offsets,
    file_level_metadata_server_5futility_2fserver_5futility_2eproto, file_level_enum_descriptors_server_5futility_2fserver_5futility_2eproto,
    file_level_service_descriptors_server_5futility_2fserver_5futility_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_server_5futility_2fserver_5futility_2eproto_getter() {
  return &descriptor_table_server_5futility_2fserver_5futility_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_server_5futility_2fserver_5futility_2eproto(&descriptor_table_server_5futility_2fserver_5futility_2eproto);
namespace mavsdk {
namespace rpc {
namespace server_utility {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ServerUtilityResult_Result_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_server_5futility_2fserver_5futility_2eproto);
  return file_level_enum_descriptors_server_5futility_2fserver_5futility_2eproto[0];
}
bool ServerUtilityResult_Result_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ServerUtilityResult_Result ServerUtilityResult::RESULT_UNKNOWN;
constexpr ServerUtilityResult_Result ServerUtilityResult::RESULT_SUCCESS;
constexpr ServerUtilityResult_Result ServerUtilityResult::RESULT_NO_SYSTEM;
constexpr ServerUtilityResult_Result ServerUtilityResult::RESULT_CONNECTION_ERROR;
constexpr ServerUtilityResult_Result ServerUtilityResult::RESULT_INVALID_ARGUMENT;
constexpr ServerUtilityResult_Result ServerUtilityResult::Result_MIN;
constexpr ServerUtilityResult_Result ServerUtilityResult::Result_MAX;
constexpr int ServerUtilityResult::Result_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StatusTextType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_server_5futility_2fserver_5futility_2eproto);
  return file_level_enum_descriptors_server_5futility_2fserver_5futility_2eproto[1];
}
bool StatusTextType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class SendStatusTextRequest::_Internal {
 public:
};

SendStatusTextRequest::SendStatusTextRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:mavsdk.rpc.server_utility.SendStatusTextRequest)
}
SendStatusTextRequest::SendStatusTextRequest(const SendStatusTextRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    text_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_text().empty()) {
    text_.Set(from._internal_text(), 
      GetArenaForAllocation());
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:mavsdk.rpc.server_utility.SendStatusTextRequest)
}

inline void SendStatusTextRequest::SharedCtor() {
text_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  text_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
type_ = 0;
}

SendStatusTextRequest::~SendStatusTextRequest() {
  // @@protoc_insertion_point(destructor:mavsdk.rpc.server_utility.SendStatusTextRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SendStatusTextRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  text_.Destroy();
}

void SendStatusTextRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SendStatusTextRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mavsdk.rpc.server_utility.SendStatusTextRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  text_.ClearToEmpty();
  type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SendStatusTextRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .mavsdk.rpc.server_utility.StatusTextType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::mavsdk::rpc::server_utility::StatusTextType>(val));
        } else
          goto handle_unusual;
        continue;
      // string text = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_text();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "mavsdk.rpc.server_utility.SendStatusTextRequest.text"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SendStatusTextRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavsdk.rpc.server_utility.SendStatusTextRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .mavsdk.rpc.server_utility.StatusTextType type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mavsdk.rpc.server_utility.SendStatusTextRequest.text");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_text(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavsdk.rpc.server_utility.SendStatusTextRequest)
  return target;
}

size_t SendStatusTextRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mavsdk.rpc.server_utility.SendStatusTextRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string text = 2;
  if (!this->_internal_text().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
  }

  // .mavsdk.rpc.server_utility.StatusTextType type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SendStatusTextRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SendStatusTextRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SendStatusTextRequest::GetClassData() const { return &_class_data_; }

void SendStatusTextRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SendStatusTextRequest *>(to)->MergeFrom(
      static_cast<const SendStatusTextRequest &>(from));
}


void SendStatusTextRequest::MergeFrom(const SendStatusTextRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavsdk.rpc.server_utility.SendStatusTextRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_text().empty()) {
    _internal_set_text(from._internal_text());
  }
  if (from._internal_type() != 0) {
    _internal_set_type(from._internal_type());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SendStatusTextRequest::CopyFrom(const SendStatusTextRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavsdk.rpc.server_utility.SendStatusTextRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SendStatusTextRequest::IsInitialized() const {
  return true;
}

void SendStatusTextRequest::InternalSwap(SendStatusTextRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &text_, lhs_arena,
      &other->text_, rhs_arena
  );
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SendStatusTextRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_server_5futility_2fserver_5futility_2eproto_getter, &descriptor_table_server_5futility_2fserver_5futility_2eproto_once,
      file_level_metadata_server_5futility_2fserver_5futility_2eproto[0]);
}

// ===================================================================

class SendStatusTextResponse::_Internal {
 public:
  static const ::mavsdk::rpc::server_utility::ServerUtilityResult& server_utility_result(const SendStatusTextResponse* msg);
};

const ::mavsdk::rpc::server_utility::ServerUtilityResult&
SendStatusTextResponse::_Internal::server_utility_result(const SendStatusTextResponse* msg) {
  return *msg->server_utility_result_;
}
SendStatusTextResponse::SendStatusTextResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:mavsdk.rpc.server_utility.SendStatusTextResponse)
}
SendStatusTextResponse::SendStatusTextResponse(const SendStatusTextResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_server_utility_result()) {
    server_utility_result_ = new ::mavsdk::rpc::server_utility::ServerUtilityResult(*from.server_utility_result_);
  } else {
    server_utility_result_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:mavsdk.rpc.server_utility.SendStatusTextResponse)
}

inline void SendStatusTextResponse::SharedCtor() {
server_utility_result_ = nullptr;
}

SendStatusTextResponse::~SendStatusTextResponse() {
  // @@protoc_insertion_point(destructor:mavsdk.rpc.server_utility.SendStatusTextResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SendStatusTextResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete server_utility_result_;
}

void SendStatusTextResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SendStatusTextResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:mavsdk.rpc.server_utility.SendStatusTextResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && server_utility_result_ != nullptr) {
    delete server_utility_result_;
  }
  server_utility_result_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SendStatusTextResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .mavsdk.rpc.server_utility.ServerUtilityResult server_utility_result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_server_utility_result(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SendStatusTextResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavsdk.rpc.server_utility.SendStatusTextResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .mavsdk.rpc.server_utility.ServerUtilityResult server_utility_result = 1;
  if (this->_internal_has_server_utility_result()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::server_utility_result(this),
        _Internal::server_utility_result(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavsdk.rpc.server_utility.SendStatusTextResponse)
  return target;
}

size_t SendStatusTextResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mavsdk.rpc.server_utility.SendStatusTextResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .mavsdk.rpc.server_utility.ServerUtilityResult server_utility_result = 1;
  if (this->_internal_has_server_utility_result()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *server_utility_result_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SendStatusTextResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SendStatusTextResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SendStatusTextResponse::GetClassData() const { return &_class_data_; }

void SendStatusTextResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SendStatusTextResponse *>(to)->MergeFrom(
      static_cast<const SendStatusTextResponse &>(from));
}


void SendStatusTextResponse::MergeFrom(const SendStatusTextResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavsdk.rpc.server_utility.SendStatusTextResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_server_utility_result()) {
    _internal_mutable_server_utility_result()->::mavsdk::rpc::server_utility::ServerUtilityResult::MergeFrom(from._internal_server_utility_result());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SendStatusTextResponse::CopyFrom(const SendStatusTextResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavsdk.rpc.server_utility.SendStatusTextResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SendStatusTextResponse::IsInitialized() const {
  return true;
}

void SendStatusTextResponse::InternalSwap(SendStatusTextResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(server_utility_result_, other->server_utility_result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SendStatusTextResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_server_5futility_2fserver_5futility_2eproto_getter, &descriptor_table_server_5futility_2fserver_5futility_2eproto_once,
      file_level_metadata_server_5futility_2fserver_5futility_2eproto[1]);
}

// ===================================================================

class ServerUtilityResult::_Internal {
 public:
};

ServerUtilityResult::ServerUtilityResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:mavsdk.rpc.server_utility.ServerUtilityResult)
}
ServerUtilityResult::ServerUtilityResult(const ServerUtilityResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  result_str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    result_str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_result_str().empty()) {
    result_str_.Set(from._internal_result_str(), 
      GetArenaForAllocation());
  }
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:mavsdk.rpc.server_utility.ServerUtilityResult)
}

inline void ServerUtilityResult::SharedCtor() {
result_str_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  result_str_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
result_ = 0;
}

ServerUtilityResult::~ServerUtilityResult() {
  // @@protoc_insertion_point(destructor:mavsdk.rpc.server_utility.ServerUtilityResult)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ServerUtilityResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  result_str_.Destroy();
}

void ServerUtilityResult::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ServerUtilityResult::Clear() {
// @@protoc_insertion_point(message_clear_start:mavsdk.rpc.server_utility.ServerUtilityResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_str_.ClearToEmpty();
  result_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServerUtilityResult::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .mavsdk.rpc.server_utility.ServerUtilityResult.Result result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_result(static_cast<::mavsdk::rpc::server_utility::ServerUtilityResult_Result>(val));
        } else
          goto handle_unusual;
        continue;
      // string result_str = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_result_str();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "mavsdk.rpc.server_utility.ServerUtilityResult.result_str"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ServerUtilityResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavsdk.rpc.server_utility.ServerUtilityResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .mavsdk.rpc.server_utility.ServerUtilityResult.Result result = 1;
  if (this->_internal_result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_result(), target);
  }

  // string result_str = 2;
  if (!this->_internal_result_str().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result_str().data(), static_cast<int>(this->_internal_result_str().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mavsdk.rpc.server_utility.ServerUtilityResult.result_str");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_result_str(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavsdk.rpc.server_utility.ServerUtilityResult)
  return target;
}

size_t ServerUtilityResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mavsdk.rpc.server_utility.ServerUtilityResult)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result_str = 2;
  if (!this->_internal_result_str().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result_str());
  }

  // .mavsdk.rpc.server_utility.ServerUtilityResult.Result result = 1;
  if (this->_internal_result() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ServerUtilityResult::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ServerUtilityResult::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ServerUtilityResult::GetClassData() const { return &_class_data_; }

void ServerUtilityResult::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ServerUtilityResult *>(to)->MergeFrom(
      static_cast<const ServerUtilityResult &>(from));
}


void ServerUtilityResult::MergeFrom(const ServerUtilityResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavsdk.rpc.server_utility.ServerUtilityResult)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_result_str().empty()) {
    _internal_set_result_str(from._internal_result_str());
  }
  if (from._internal_result() != 0) {
    _internal_set_result(from._internal_result());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ServerUtilityResult::CopyFrom(const ServerUtilityResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavsdk.rpc.server_utility.ServerUtilityResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerUtilityResult::IsInitialized() const {
  return true;
}

void ServerUtilityResult::InternalSwap(ServerUtilityResult* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &result_str_, lhs_arena,
      &other->result_str_, rhs_arena
  );
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerUtilityResult::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_server_5futility_2fserver_5futility_2eproto_getter, &descriptor_table_server_5futility_2fserver_5futility_2eproto_once,
      file_level_metadata_server_5futility_2fserver_5futility_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace server_utility
}  // namespace rpc
}  // namespace mavsdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mavsdk::rpc::server_utility::SendStatusTextRequest*
Arena::CreateMaybeMessage< ::mavsdk::rpc::server_utility::SendStatusTextRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mavsdk::rpc::server_utility::SendStatusTextRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::mavsdk::rpc::server_utility::SendStatusTextResponse*
Arena::CreateMaybeMessage< ::mavsdk::rpc::server_utility::SendStatusTextResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mavsdk::rpc::server_utility::SendStatusTextResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::mavsdk::rpc::server_utility::ServerUtilityResult*
Arena::CreateMaybeMessage< ::mavsdk::rpc::server_utility::ServerUtilityResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mavsdk::rpc::server_utility::ServerUtilityResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>