// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pinba.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Pinba {

namespace {

const ::google::protobuf::Descriptor* Request_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Request_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_pinba_2eproto() {
  protobuf_AddDesc_pinba_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pinba.proto");
  GOOGLE_CHECK(file != NULL);
  Request_descriptor_ = file->message_type(0);
  static const int Request_offsets_[16] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, hostname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, server_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, script_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, request_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, document_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, memory_peak_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, request_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, ru_utime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, ru_stime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, timer_hit_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, timer_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, timer_tag_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, timer_tag_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, timer_tag_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, dictionary_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, status_),
  };
  Request_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Request_descriptor_,
      Request::default_instance_,
      Request_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Request));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pinba_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Request_descriptor_, &Request::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pinba_2eproto() {
  delete Request::default_instance_;
  delete Request_reflection_;
}

void protobuf_AddDesc_pinba_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013pinba.proto\022\005Pinba\"\336\002\n\007Request\022\020\n\010host"
    "name\030\001 \002(\t\022\023\n\013server_name\030\002 \002(\t\022\023\n\013scrip"
    "t_name\030\003 \002(\t\022\025\n\rrequest_count\030\004 \002(\r\022\025\n\rd"
    "ocument_size\030\005 \002(\r\022\023\n\013memory_peak\030\006 \002(\r\022"
    "\024\n\014request_time\030\007 \002(\002\022\020\n\010ru_utime\030\010 \002(\002\022"
    "\020\n\010ru_stime\030\t \002(\002\022\027\n\017timer_hit_count\030\n \003"
    "(\r\022\023\n\013timer_value\030\013 \003(\002\022\027\n\017timer_tag_cou"
    "nt\030\014 \003(\r\022\026\n\016timer_tag_name\030\r \003(\r\022\027\n\017time"
    "r_tag_value\030\016 \003(\r\022\022\n\ndictionary\030\017 \003(\t\022\016\n"
    "\006status\030\020 \001(\rB\002H\001", 377);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pinba.proto", &protobuf_RegisterTypes);
  Request::default_instance_ = new Request();
  Request::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pinba_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pinba_2eproto {
  StaticDescriptorInitializer_pinba_2eproto() {
    protobuf_AddDesc_pinba_2eproto();
  }
} static_descriptor_initializer_pinba_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Request::kHostnameFieldNumber;
const int Request::kServerNameFieldNumber;
const int Request::kScriptNameFieldNumber;
const int Request::kRequestCountFieldNumber;
const int Request::kDocumentSizeFieldNumber;
const int Request::kMemoryPeakFieldNumber;
const int Request::kRequestTimeFieldNumber;
const int Request::kRuUtimeFieldNumber;
const int Request::kRuStimeFieldNumber;
const int Request::kTimerHitCountFieldNumber;
const int Request::kTimerValueFieldNumber;
const int Request::kTimerTagCountFieldNumber;
const int Request::kTimerTagNameFieldNumber;
const int Request::kTimerTagValueFieldNumber;
const int Request::kDictionaryFieldNumber;
const int Request::kStatusFieldNumber;
#endif  // !_MSC_VER

Request::Request()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Request::InitAsDefaultInstance() {
}

Request::Request(const Request& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Request::SharedCtor() {
  _cached_size_ = 0;
  hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  server_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  script_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  request_count_ = 0u;
  document_size_ = 0u;
  memory_peak_ = 0u;
  request_time_ = 0;
  ru_utime_ = 0;
  ru_stime_ = 0;
  status_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Request::~Request() {
  SharedDtor();
}

void Request::SharedDtor() {
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    delete hostname_;
  }
  if (server_name_ != &::google::protobuf::internal::kEmptyString) {
    delete server_name_;
  }
  if (script_name_ != &::google::protobuf::internal::kEmptyString) {
    delete script_name_;
  }
  if (this != default_instance_) {
  }
}

void Request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Request::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Request_descriptor_;
}

const Request& Request::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pinba_2eproto();  return *default_instance_;
}

Request* Request::default_instance_ = NULL;

Request* Request::New() const {
  return new Request;
}

void Request::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_hostname()) {
      if (hostname_ != &::google::protobuf::internal::kEmptyString) {
        hostname_->clear();
      }
    }
    if (has_server_name()) {
      if (server_name_ != &::google::protobuf::internal::kEmptyString) {
        server_name_->clear();
      }
    }
    if (has_script_name()) {
      if (script_name_ != &::google::protobuf::internal::kEmptyString) {
        script_name_->clear();
      }
    }
    request_count_ = 0u;
    document_size_ = 0u;
    memory_peak_ = 0u;
    request_time_ = 0;
    ru_utime_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    ru_stime_ = 0;
    status_ = 0u;
  }
  timer_hit_count_.Clear();
  timer_value_.Clear();
  timer_tag_count_.Clear();
  timer_tag_name_.Clear();
  timer_tag_value_.Clear();
  dictionary_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string hostname = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hostname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->hostname().data(), this->hostname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_server_name;
        break;
      }
      
      // required string server_name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_server_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_server_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->server_name().data(), this->server_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_script_name;
        break;
      }
      
      // required string script_name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_script_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_script_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->script_name().data(), this->script_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_request_count;
        break;
      }
      
      // required uint32 request_count = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_request_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &request_count_)));
          set_has_request_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_document_size;
        break;
      }
      
      // required uint32 document_size = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_document_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &document_size_)));
          set_has_document_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_memory_peak;
        break;
      }
      
      // required uint32 memory_peak = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_memory_peak:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &memory_peak_)));
          set_has_memory_peak();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_request_time;
        break;
      }
      
      // required float request_time = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_request_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &request_time_)));
          set_has_request_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(69)) goto parse_ru_utime;
        break;
      }
      
      // required float ru_utime = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ru_utime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ru_utime_)));
          set_has_ru_utime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(77)) goto parse_ru_stime;
        break;
      }
      
      // required float ru_stime = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ru_stime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ru_stime_)));
          set_has_ru_stime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_timer_hit_count;
        break;
      }
      
      // repeated uint32 timer_hit_count = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timer_hit_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 80, input, this->mutable_timer_hit_count())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_timer_hit_count())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_timer_hit_count;
        if (input->ExpectTag(93)) goto parse_timer_value;
        break;
      }
      
      // repeated float timer_value = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_timer_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 93, input, this->mutable_timer_value())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_timer_value())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(93)) goto parse_timer_value;
        if (input->ExpectTag(96)) goto parse_timer_tag_count;
        break;
      }
      
      // repeated uint32 timer_tag_count = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timer_tag_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 96, input, this->mutable_timer_tag_count())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_timer_tag_count())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_timer_tag_count;
        if (input->ExpectTag(104)) goto parse_timer_tag_name;
        break;
      }
      
      // repeated uint32 timer_tag_name = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timer_tag_name:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 104, input, this->mutable_timer_tag_name())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_timer_tag_name())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_timer_tag_name;
        if (input->ExpectTag(112)) goto parse_timer_tag_value;
        break;
      }
      
      // repeated uint32 timer_tag_value = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timer_tag_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 112, input, this->mutable_timer_tag_value())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_timer_tag_value())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_timer_tag_value;
        if (input->ExpectTag(122)) goto parse_dictionary;
        break;
      }
      
      // repeated string dictionary = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dictionary:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_dictionary()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->dictionary(0).data(), this->dictionary(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(122)) goto parse_dictionary;
        if (input->ExpectTag(128)) goto parse_status;
        break;
      }
      
      // optional uint32 status = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_status:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string hostname = 1;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->hostname(), output);
  }
  
  // required string server_name = 2;
  if (has_server_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->server_name().data(), this->server_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->server_name(), output);
  }
  
  // required string script_name = 3;
  if (has_script_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->script_name().data(), this->script_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->script_name(), output);
  }
  
  // required uint32 request_count = 4;
  if (has_request_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->request_count(), output);
  }
  
  // required uint32 document_size = 5;
  if (has_document_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->document_size(), output);
  }
  
  // required uint32 memory_peak = 6;
  if (has_memory_peak()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->memory_peak(), output);
  }
  
  // required float request_time = 7;
  if (has_request_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->request_time(), output);
  }
  
  // required float ru_utime = 8;
  if (has_ru_utime()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->ru_utime(), output);
  }
  
  // required float ru_stime = 9;
  if (has_ru_stime()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->ru_stime(), output);
  }
  
  // repeated uint32 timer_hit_count = 10;
  for (int i = 0; i < this->timer_hit_count_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      10, this->timer_hit_count(i), output);
  }
  
  // repeated float timer_value = 11;
  for (int i = 0; i < this->timer_value_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      11, this->timer_value(i), output);
  }
  
  // repeated uint32 timer_tag_count = 12;
  for (int i = 0; i < this->timer_tag_count_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      12, this->timer_tag_count(i), output);
  }
  
  // repeated uint32 timer_tag_name = 13;
  for (int i = 0; i < this->timer_tag_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      13, this->timer_tag_name(i), output);
  }
  
  // repeated uint32 timer_tag_value = 14;
  for (int i = 0; i < this->timer_tag_value_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      14, this->timer_tag_value(i), output);
  }
  
  // repeated string dictionary = 15;
  for (int i = 0; i < this->dictionary_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->dictionary(i).data(), this->dictionary(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      15, this->dictionary(i), output);
  }
  
  // optional uint32 status = 16;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(16, this->status(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Request::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string hostname = 1;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->hostname(), target);
  }
  
  // required string server_name = 2;
  if (has_server_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->server_name().data(), this->server_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->server_name(), target);
  }
  
  // required string script_name = 3;
  if (has_script_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->script_name().data(), this->script_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->script_name(), target);
  }
  
  // required uint32 request_count = 4;
  if (has_request_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->request_count(), target);
  }
  
  // required uint32 document_size = 5;
  if (has_document_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->document_size(), target);
  }
  
  // required uint32 memory_peak = 6;
  if (has_memory_peak()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->memory_peak(), target);
  }
  
  // required float request_time = 7;
  if (has_request_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->request_time(), target);
  }
  
  // required float ru_utime = 8;
  if (has_ru_utime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->ru_utime(), target);
  }
  
  // required float ru_stime = 9;
  if (has_ru_stime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->ru_stime(), target);
  }
  
  // repeated uint32 timer_hit_count = 10;
  for (int i = 0; i < this->timer_hit_count_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(10, this->timer_hit_count(i), target);
  }
  
  // repeated float timer_value = 11;
  for (int i = 0; i < this->timer_value_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(11, this->timer_value(i), target);
  }
  
  // repeated uint32 timer_tag_count = 12;
  for (int i = 0; i < this->timer_tag_count_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(12, this->timer_tag_count(i), target);
  }
  
  // repeated uint32 timer_tag_name = 13;
  for (int i = 0; i < this->timer_tag_name_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(13, this->timer_tag_name(i), target);
  }
  
  // repeated uint32 timer_tag_value = 14;
  for (int i = 0; i < this->timer_tag_value_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(14, this->timer_tag_value(i), target);
  }
  
  // repeated string dictionary = 15;
  for (int i = 0; i < this->dictionary_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->dictionary(i).data(), this->dictionary(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(15, this->dictionary(i), target);
  }
  
  // optional uint32 status = 16;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(16, this->status(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Request::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string hostname = 1;
    if (has_hostname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->hostname());
    }
    
    // required string server_name = 2;
    if (has_server_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->server_name());
    }
    
    // required string script_name = 3;
    if (has_script_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->script_name());
    }
    
    // required uint32 request_count = 4;
    if (has_request_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->request_count());
    }
    
    // required uint32 document_size = 5;
    if (has_document_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->document_size());
    }
    
    // required uint32 memory_peak = 6;
    if (has_memory_peak()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->memory_peak());
    }
    
    // required float request_time = 7;
    if (has_request_time()) {
      total_size += 1 + 4;
    }
    
    // required float ru_utime = 8;
    if (has_ru_utime()) {
      total_size += 1 + 4;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required float ru_stime = 9;
    if (has_ru_stime()) {
      total_size += 1 + 4;
    }
    
    // optional uint32 status = 16;
    if (has_status()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->status());
    }
    
  }
  // repeated uint32 timer_hit_count = 10;
  {
    int data_size = 0;
    for (int i = 0; i < this->timer_hit_count_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->timer_hit_count(i));
    }
    total_size += 1 * this->timer_hit_count_size() + data_size;
  }
  
  // repeated float timer_value = 11;
  {
    int data_size = 0;
    data_size = 4 * this->timer_value_size();
    total_size += 1 * this->timer_value_size() + data_size;
  }
  
  // repeated uint32 timer_tag_count = 12;
  {
    int data_size = 0;
    for (int i = 0; i < this->timer_tag_count_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->timer_tag_count(i));
    }
    total_size += 1 * this->timer_tag_count_size() + data_size;
  }
  
  // repeated uint32 timer_tag_name = 13;
  {
    int data_size = 0;
    for (int i = 0; i < this->timer_tag_name_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->timer_tag_name(i));
    }
    total_size += 1 * this->timer_tag_name_size() + data_size;
  }
  
  // repeated uint32 timer_tag_value = 14;
  {
    int data_size = 0;
    for (int i = 0; i < this->timer_tag_value_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->timer_tag_value(i));
    }
    total_size += 1 * this->timer_tag_value_size() + data_size;
  }
  
  // repeated string dictionary = 15;
  total_size += 1 * this->dictionary_size();
  for (int i = 0; i < this->dictionary_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->dictionary(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Request::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Request* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Request*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
  GOOGLE_CHECK_NE(&from, this);
  timer_hit_count_.MergeFrom(from.timer_hit_count_);
  timer_value_.MergeFrom(from.timer_value_);
  timer_tag_count_.MergeFrom(from.timer_tag_count_);
  timer_tag_name_.MergeFrom(from.timer_tag_name_);
  timer_tag_value_.MergeFrom(from.timer_tag_value_);
  dictionary_.MergeFrom(from.dictionary_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_hostname()) {
      set_hostname(from.hostname());
    }
    if (from.has_server_name()) {
      set_server_name(from.server_name());
    }
    if (from.has_script_name()) {
      set_script_name(from.script_name());
    }
    if (from.has_request_count()) {
      set_request_count(from.request_count());
    }
    if (from.has_document_size()) {
      set_document_size(from.document_size());
    }
    if (from.has_memory_peak()) {
      set_memory_peak(from.memory_peak());
    }
    if (from.has_request_time()) {
      set_request_time(from.request_time());
    }
    if (from.has_ru_utime()) {
      set_ru_utime(from.ru_utime());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_ru_stime()) {
      set_ru_stime(from.ru_stime());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Request::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  if ((_has_bits_[0] & 0x000001ff) != 0x000001ff) return false;
  
  return true;
}

void Request::Swap(Request* other) {
  if (other != this) {
    std::swap(hostname_, other->hostname_);
    std::swap(server_name_, other->server_name_);
    std::swap(script_name_, other->script_name_);
    std::swap(request_count_, other->request_count_);
    std::swap(document_size_, other->document_size_);
    std::swap(memory_peak_, other->memory_peak_);
    std::swap(request_time_, other->request_time_);
    std::swap(ru_utime_, other->ru_utime_);
    std::swap(ru_stime_, other->ru_stime_);
    timer_hit_count_.Swap(&other->timer_hit_count_);
    timer_value_.Swap(&other->timer_value_);
    timer_tag_count_.Swap(&other->timer_tag_count_);
    timer_tag_name_.Swap(&other->timer_tag_name_);
    timer_tag_value_.Swap(&other->timer_tag_value_);
    dictionary_.Swap(&other->dictionary_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Request::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Request_descriptor_;
  metadata.reflection = Request_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Pinba

// @@protoc_insertion_point(global_scope)
