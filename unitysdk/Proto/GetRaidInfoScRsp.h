#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKKOLCPBOH;
class KBONOPFLPDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GetRaidInfoScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF8640)
#define PROTO_GETRAIDINFOSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8A80)
#define PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF80A0)
#define PROTO_GETRAIDINFOSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF7F60)
#define PROTO_GETRAIDINFOSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7EC0)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF8150)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF8120)
#define PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF82D0)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFF8110)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFF8100)
#define PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1DFF80D0)
#define PROTO_GETRAIDINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF7E80)
#define PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF80E0)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF8910)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF87F0)
#define PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7EB0)
#define PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF80F0)
#define PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF8440)
#define PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF84A0)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp_TypeDefinitionIndex = 32390;

	class GetRaidInfoScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KBONOPFLPDJ*>* challengeRaidList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* challengeTakenRewardIdList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::CHKKOLCPBOH*>* finishedRaidInfoList_; // 0x28
		::System::UInt32 retcode_; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "GetRaidInfoScRsp")->GetStaticField(0x43C10);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_finishedRaidInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetRaidInfoScRsp")->GetStaticField(0x43C18);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_challengeRaidList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetRaidInfoScRsp")->GetStaticField(0x43C20);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_challengeTakenRewardIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetRaidInfoScRsp")->GetStaticField(0x43C28);
		}

		// static const ::System::Object FinishedRaidInfoListFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object ChallengeTakenRewardIdListFieldNumber; // 0x0
		// static const ::System::Object ChallengeRaidListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* Clone()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CHKKOLCPBOH*>* get_FinishedRaidInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CHKKOLCPBOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ChallengeTakenRewardIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KBONOPFLPDJ*>* get_ChallengeRaidList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KBONOPFLPDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
