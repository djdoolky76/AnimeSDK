#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFNBDEKJMON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFNBDEKJMON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4BC90)
#define OFNBDEKJMON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4BEB0)
#define OFNBDEKJMON_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4B8E0)
#define OFNBDEKJMON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4B8B0)
#define OFNBDEKJMON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B8A0)
#define OFNBDEKJMON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4BA10)
#define OFNBDEKJMON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4B940)
#define OFNBDEKJMON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4BB80)
#define OFNBDEKJMON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4B860)
#define OFNBDEKJMON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4BD50)
#define OFNBDEKJMON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4BD20)
#define OFNBDEKJMON_NOKGLDLPBMF_OFFSET UNITYSDK_OFFSET(0x1DE4B920)
#define OFNBDEKJMON_PAADFGNKKBC_OFFSET UNITYSDK_OFFSET(0x1DE4B930)
#define OFNBDEKJMON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B890)
#define OFNBDEKJMON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4BBB0)
#define OFNBDEKJMON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4BC10)

inline static constexpr unsigned int OFNBDEKJMON_TypeDefinitionIndex = 30297;

	class OFNBDEKJMON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GMIBHOBIEFP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFNBDEKJMON")->GetStaticField(0x17B50);
		}

		// static const ::System::Object DONMANGCEDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFNBDEKJMON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNBDEKJMON*))((::PBYTE)hIl2Cpp + OFNBDEKJMON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNBDEKJMON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFNBDEKJMON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFNBDEKJMON* Clone()
		{
			return ((::OFNBDEKJMON*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOKGLDLPBMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_NOKGLDLPBMF_OFFSET))(this);
		}

		::System::Void PAADFGNKKBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFNBDEKJMON_PAADFGNKKBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFNBDEKJMON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFNBDEKJMON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFNBDEKJMON*))((::PBYTE)hIl2Cpp + OFNBDEKJMON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFNBDEKJMON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFNBDEKJMON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNBDEKJMON*))((::PBYTE)hIl2Cpp + OFNBDEKJMON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFNBDEKJMON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
