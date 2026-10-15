#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNDFNIHMPKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNDFNIHMPKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E107A00)
#define CNDFNIHMPKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E107AA0)
#define CNDFNIHMPKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1076F0)
#define CNDFNIHMPKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1076C0)
#define CNDFNIHMPKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1076B0)
#define CNDFNIHMPKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E107800)
#define CNDFNIHMPKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E107730)
#define CNDFNIHMPKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E107960)
#define CNDFNIHMPKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E107670)
#define CNDFNIHMPKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E107A50)
#define CNDFNIHMPKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E107A20)
#define CNDFNIHMPKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1076A0)
#define CNDFNIHMPKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E107990)
#define CNDFNIHMPKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1079F0)

inline static constexpr unsigned int CNDFNIHMPKC_TypeDefinitionIndex = 29027;

	class CNDFNIHMPKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CNDFNIHMPKC")->GetStaticField(0x1F640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNDFNIHMPKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNDFNIHMPKC*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CNDFNIHMPKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNDFNIHMPKC* Clone()
		{
			return ((::CNDFNIHMPKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNDFNIHMPKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNDFNIHMPKC*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNDFNIHMPKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNDFNIHMPKC*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
