#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEBFHKCINE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGEBFHKCINE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA72110)
#define BGEBFHKCINE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA72330)
#define BGEBFHKCINE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA71D60)
#define BGEBFHKCINE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA71D30)
#define BGEBFHKCINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA71D20)
#define BGEBFHKCINE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA71E90)
#define BGEBFHKCINE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA71DC0)
#define BGEBFHKCINE_GBBIGFHOGAH_OFFSET UNITYSDK_OFFSET(0x1EA71DA0)
#define BGEBFHKCINE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA72000)
#define BGEBFHKCINE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA71CE0)
#define BGEBFHKCINE_LNEABNMOHFG_OFFSET UNITYSDK_OFFSET(0x1EA71DB0)
#define BGEBFHKCINE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA721D0)
#define BGEBFHKCINE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA721A0)
#define BGEBFHKCINE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA71D10)
#define BGEBFHKCINE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA72030)
#define BGEBFHKCINE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA72090)

inline static constexpr unsigned int BGEBFHKCINE_TypeDefinitionIndex = 27425;

	class BGEBFHKCINE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AHBLJHIPBOJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGEBFHKCINE")->GetStaticField(0x42980);
		}

		// static const ::System::Object PIGIFKAFIHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGEBFHKCINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEBFHKCINE*))((::PBYTE)hIl2Cpp + BGEBFHKCINE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEBFHKCINE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGEBFHKCINE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGEBFHKCINE* Clone()
		{
			return ((::BGEBFHKCINE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBBIGFHOGAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_GBBIGFHOGAH_OFFSET))(this);
		}

		::System::Void LNEABNMOHFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGEBFHKCINE_LNEABNMOHFG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGEBFHKCINE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGEBFHKCINE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGEBFHKCINE*))((::PBYTE)hIl2Cpp + BGEBFHKCINE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGEBFHKCINE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGEBFHKCINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEBFHKCINE*))((::PBYTE)hIl2Cpp + BGEBFHKCINE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGEBFHKCINE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
