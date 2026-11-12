#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class TutorialGuide; }
namespace Proto { class UnlockTutorialGuideScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2EAB00)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2EAE10)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2EA590)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2EA510)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EA500)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2EA7E0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2EA660)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2EA960)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F2EA4C0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1F2EA640)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1F2EA620)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2EAC80)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2EABD0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2EA4F0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1F2EA650)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1F2EA630)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2EA9C0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2EAA20)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp_TypeDefinitionIndex = 35982;

	class UnlockTutorialGuideScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::TutorialGuide* tutorialGuide_; // 0x18
		::System::UInt32 retcode_; // 0x20
		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>**)UnitySDK::FromName("Proto", "UnlockTutorialGuideScRsp")->GetStaticField(0x53130);
		}

		// static const ::System::Object TutorialGuideFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UnlockTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialGuideScRsp* Clone()
		{
			return ((::Proto::UnlockTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET))(this);
		}

		::Proto::TutorialGuide* get_TutorialGuide()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET))(this);
		}

		::System::Void set_TutorialGuide(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::UnlockTutorialGuideScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UnlockTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
