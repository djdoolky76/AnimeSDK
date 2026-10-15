#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPNAHPHNJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace Proto { class TakeMailAttachmentScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0178B0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E017D30)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E017240)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0170E0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E017050)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E017300)
#define PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0172D0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E017500)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E0172B0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET UNITYSDK_OFFSET(0x1E017270)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E017010)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1E017280)
#define PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET UNITYSDK_OFFSET(0x1E0172A0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E017B90)
#define PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E017A60)
#define PROTO_TAKEMAILATTACHMENTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E017040)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E0172C0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1E017290)
#define PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0176B0)
#define PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E017710)

namespace Proto
{
	class TakeMailAttachmentScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* succMailIdList_; // 0x18
		::Proto::ItemList* attachment_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::KNPNAHPHNJK*>* failMailList_; // 0x28
		::System::UInt32 retcode_; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "TakeMailAttachmentScRsp")->GetStaticField(0x181F0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_failMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "TakeMailAttachmentScRsp")->GetStaticField(0x181F8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_succMailIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "TakeMailAttachmentScRsp")->GetStaticField(0x18200);
		}

		// static const ::System::Object FailMailListFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object SuccMailIdListFieldNumber; // 0x0
		// static const ::System::Object AttachmentFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TakeMailAttachmentScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TakeMailAttachmentScRsp* Clone()
		{
			return ((::Proto::TakeMailAttachmentScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KNPNAHPHNJK*>* get_FailMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KNPNAHPHNJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_FAILMAILLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_SuccMailIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_SUCCMAILIDLIST_OFFSET))(this);
		}

		::Proto::ItemList* get_Attachment()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_SET_ATTACHMENT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::TakeMailAttachmentScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TakeMailAttachmentScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeMailAttachmentScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
