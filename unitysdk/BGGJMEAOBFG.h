#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGJMEAOBFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGGJMEAOBFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA78DF0)
#define BGGJMEAOBFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA79010)
#define BGGJMEAOBFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA78A40)
#define BGGJMEAOBFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA78A10)
#define BGGJMEAOBFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA78A00)
#define BGGJMEAOBFG_EPOCFHFKPFP_OFFSET UNITYSDK_OFFSET(0x1EA78A90)
#define BGGJMEAOBFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA78B70)
#define BGGJMEAOBFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA78AA0)
#define BGGJMEAOBFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA78CE0)
#define BGGJMEAOBFG_GGKMPPEPAAG_OFFSET UNITYSDK_OFFSET(0x1EA78A80)
#define BGGJMEAOBFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA789C0)
#define BGGJMEAOBFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA78EB0)
#define BGGJMEAOBFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA78E80)
#define BGGJMEAOBFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA789F0)
#define BGGJMEAOBFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA78D10)
#define BGGJMEAOBFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA78D70)

inline static constexpr unsigned int BGGJMEAOBFG_TypeDefinitionIndex = 30881;

	class BGGJMEAOBFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EFLHLEJELBG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGGJMEAOBFG")->GetStaticField(0x42E90);
		}

		// static const ::System::Object BJCGEAIJBFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGGJMEAOBFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGJMEAOBFG*))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGJMEAOBFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGGJMEAOBFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGGJMEAOBFG* Clone()
		{
			return ((::BGGJMEAOBFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGKMPPEPAAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_GGKMPPEPAAG_OFFSET))(this);
		}

		::System::Void EPOCFHFKPFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_EPOCFHFKPFP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGGJMEAOBFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGGJMEAOBFG*))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGGJMEAOBFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGJMEAOBFG*))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGGJMEAOBFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
