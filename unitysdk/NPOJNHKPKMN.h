#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPOJNHKPKMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPOJNHKPKMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA15E0)
#define NPOJNHKPKMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA1680)
#define NPOJNHKPKMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA12D0)
#define NPOJNHKPKMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA12A0)
#define NPOJNHKPKMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA1290)
#define NPOJNHKPKMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA13E0)
#define NPOJNHKPKMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA1310)
#define NPOJNHKPKMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA1540)
#define NPOJNHKPKMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA1250)
#define NPOJNHKPKMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA1630)
#define NPOJNHKPKMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA1600)
#define NPOJNHKPKMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA1280)
#define NPOJNHKPKMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA1570)
#define NPOJNHKPKMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA15D0)

inline static constexpr unsigned int NPOJNHKPKMN_TypeDefinitionIndex = 33862;

	class NPOJNHKPKMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPOJNHKPKMN")->GetStaticField(0xF0A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPOJNHKPKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPOJNHKPKMN*))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPOJNHKPKMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPOJNHKPKMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPOJNHKPKMN* Clone()
		{
			return ((::NPOJNHKPKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPOJNHKPKMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPOJNHKPKMN*))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPOJNHKPKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPOJNHKPKMN*))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPOJNHKPKMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
