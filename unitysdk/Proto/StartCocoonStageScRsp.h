#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class StartCocoonStageScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E013EB0)
#define PROTO_STARTCOCOONSTAGESCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E014320)
#define PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E013830)
#define PROTO_STARTCOCOONSTAGESCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0137B0)
#define PROTO_STARTCOCOONSTAGESCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0137A0)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E013AA0)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E013980)
#define PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E013BB0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1E0138C0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1E013940)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1E013920)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E013760)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1E0138E0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1E013900)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x1E013960)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E014220)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E014170)
#define PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E013790)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1E0138D0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1E013950)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1E013930)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1E0138F0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1E013910)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x1E013970)
#define PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E013C00)
#define PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E013C60)

namespace Proto
{
	inline static constexpr unsigned int StartCocoonStageScRsp_TypeDefinitionIndex = 34033;

	class StartCocoonStageScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::NNPGLCGNICI* battleInfo_; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 challengeCnt_; // 0x24
		::System::UInt32 propEntityId_; // 0x28
		::System::UInt32 wave_; // 0x2C
		::System::UInt32 cocoonId_; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "StartCocoonStageScRsp")->GetStaticField(0x46040);
		}

		// static const ::System::Object BattleInfoFieldNumber; // 0x0
		// static const ::System::Object PropEntityIdFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object CocoonIdFieldNumber; // 0x0
		// static const ::System::Object ChallengeCntFieldNumber; // 0x0
		// static const ::System::Object WaveFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StartCocoonStageScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StartCocoonStageScRsp* Clone()
		{
			return ((::Proto::StartCocoonStageScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* get_BattleInfo()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET))(this);
		}

		::System::Void set_BattleInfo(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CocoonId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET))(this);
		}

		::System::Void set_ChallengeCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::StartCocoonStageScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StartCocoonStageScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
