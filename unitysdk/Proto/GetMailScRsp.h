#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ClientMail; }
namespace Proto { class GetMailScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GETMAILSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF62C0)
#define PROTO_GETMAILSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6790)
#define PROTO_GETMAILSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF5D40)
#define PROTO_GETMAILSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF5C50)
#define PROTO_GETMAILSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5BF0)
#define PROTO_GETMAILSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF5E40)
#define PROTO_GETMAILSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF5E10)
#define PROTO_GETMAILSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF5F20)
#define PROTO_GETMAILSCRSP_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x1DFF5D70)
#define PROTO_GETMAILSCRSP_GET_MAILLIST_OFFSET UNITYSDK_OFFSET(0x1DFF5E00)
#define PROTO_GETMAILSCRSP_GET_NOTICEMAILLIST_OFFSET UNITYSDK_OFFSET(0x1DFF5DD0)
#define PROTO_GETMAILSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF5BB0)
#define PROTO_GETMAILSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF5DE0)
#define PROTO_GETMAILSCRSP_GET_START_OFFSET UNITYSDK_OFFSET(0x1DFF5DB0)
#define PROTO_GETMAILSCRSP_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x1DFF5D90)
#define PROTO_GETMAILSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF6640)
#define PROTO_GETMAILSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF6520)
#define PROTO_GETMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5BE0)
#define PROTO_GETMAILSCRSP_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x1DFF5D80)
#define PROTO_GETMAILSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF5DF0)
#define PROTO_GETMAILSCRSP_SET_START_OFFSET UNITYSDK_OFFSET(0x1DFF5DC0)
#define PROTO_GETMAILSCRSP_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x1DFF5DA0)
#define PROTO_GETMAILSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF5FC0)
#define PROTO_GETMAILSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF6020)

namespace Proto
{
	inline static constexpr unsigned int GetMailScRsp_TypeDefinitionIndex = 30486;

	class GetMailScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* noticeMailList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* mailList_; // 0x20
		::System::UInt32 start_; // 0x28
		::System::UInt32 retcode_; // 0x2C
		::System::UInt32 totalNum_; // 0x30
		::System::Boolean isEnd_; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "GetMailScRsp")->GetStaticField(0x43B90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_mailList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMailScRsp")->GetStaticField(0x43B98);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_noticeMailList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMailScRsp")->GetStaticField(0x43BA0);
		}

		// static const ::System::Object IsEndFieldNumber; // 0x0
		// static const ::System::Object TotalNumFieldNumber; // 0x0
		// static const ::System::Object StartFieldNumber; // 0x0
		// static const ::System::Object NoticeMailListFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object MailListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetMailScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetMailScRsp* Clone()
		{
			return ((::Proto::GetMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_ISEND_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_TOTALNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_Start()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_START_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* get_NoticeMailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_NOTICEMAILLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>* get_MailList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ClientMail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GET_MAILLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetMailScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetMailScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMailScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
