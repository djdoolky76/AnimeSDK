#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class FinishTutorialScRsp; }
namespace Proto { class Tutorial; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_FINISHTUTORIALSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2A44C0)
#define PROTO_FINISHTUTORIALSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2A47C0)
#define PROTO_FINISHTUTORIALSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2A3F70)
#define PROTO_FINISHTUTORIALSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2A3F00)
#define PROTO_FINISHTUTORIALSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A3EF0)
#define PROTO_FINISHTUTORIALSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2A41B0)
#define PROTO_FINISHTUTORIALSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2A4030)
#define PROTO_FINISHTUTORIALSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2A4330)
#define PROTO_FINISHTUTORIALSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F2A3EB0)
#define PROTO_FINISHTUTORIALSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1F2A3FF0)
#define PROTO_FINISHTUTORIALSCRSP_GET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x1F2A4010)
#define PROTO_FINISHTUTORIALSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2A4630)
#define PROTO_FINISHTUTORIALSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2A4590)
#define PROTO_FINISHTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2A3EE0)
#define PROTO_FINISHTUTORIALSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1F2A4000)
#define PROTO_FINISHTUTORIALSCRSP_SET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x1F2A4020)
#define PROTO_FINISHTUTORIALSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2A4380)
#define PROTO_FINISHTUTORIALSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2A43E0)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialScRsp_TypeDefinitionIndex = 35986;

	class FinishTutorialScRsp : public ::System::Object
	{
	public:
		::Proto::Tutorial* tutorial_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20
		static ::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialScRsp*>**)UnitySDK::FromName("Proto", "FinishTutorialScRsp")->GetStaticField(0x3CD30);
		}

		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object TutorialFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FinishTutorialScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialScRsp* Clone()
		{
			return ((::Proto::FinishTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Proto::Tutorial* get_Tutorial()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GET_TUTORIAL_OFFSET))(this);
		}

		::System::Void set_Tutorial(::Proto::Tutorial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_SET_TUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::FinishTutorialScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FinishTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FinishTutorialScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
