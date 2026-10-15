#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/HHJGMFEALEB.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class TutorialGuide; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_TUTORIALGUIDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E019910)
#define PROTO_TUTORIALGUIDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E019D00)
#define PROTO_TUTORIALGUIDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0194C0)
#define PROTO_TUTORIALGUIDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E019480)
#define PROTO_TUTORIALGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E019470)
#define PROTO_TUTORIALGUIDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E019650)
#define PROTO_TUTORIALGUIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E019570)
#define PROTO_TUTORIALGUIDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E019720)
#define PROTO_TUTORIALGUIDE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E019530)
#define PROTO_TUTORIALGUIDE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E019430)
#define PROTO_TUTORIALGUIDE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1E019550)
#define PROTO_TUTORIALGUIDE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E019510)
#define PROTO_TUTORIALGUIDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E019B60)
#define PROTO_TUTORIALGUIDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E019B10)
#define PROTO_TUTORIALGUIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E019460)
#define PROTO_TUTORIALGUIDE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1E019540)
#define PROTO_TUTORIALGUIDE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1E019560)
#define PROTO_TUTORIALGUIDE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E019520)
#define PROTO_TUTORIALGUIDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E019750)
#define PROTO_TUTORIALGUIDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0197B0)

namespace Proto
{
	inline static constexpr unsigned int TutorialGuide_TypeDefinitionIndex = 35038;

	class TutorialGuide : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 id_; // 0x18
		::AOCCEBGNPJA type_; // 0x1C
		::HHJGMFEALEB status_; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "TutorialGuide")->GetStaticField(0x43E60);
		}

		// static const ::System::Object TypeFieldNumber; // 0x0
		// static const ::System::Object IdFieldNumber; // 0x0
		// static const ::System::Object StatusFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TutorialGuide* Clone()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CLONE_OFFSET))(this);
		}

		::AOCCEBGNPJA get_Type()
		{
			return ((::AOCCEBGNPJA(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::AOCCEBGNPJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOCCEBGNPJA))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_ID_OFFSET))(this, a1);
		}

		::HHJGMFEALEB get_Status()
		{
			return ((::HHJGMFEALEB(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::HHJGMFEALEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJGMFEALEB))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::TutorialGuide* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
