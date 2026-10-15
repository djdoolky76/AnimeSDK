#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEMHDLMIKKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEMHDLMIKKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55BCE0)
#define HEMHDLMIKKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55BD80)
#define HEMHDLMIKKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55B9D0)
#define HEMHDLMIKKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55B9A0)
#define HEMHDLMIKKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55B990)
#define HEMHDLMIKKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55BAE0)
#define HEMHDLMIKKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55BA10)
#define HEMHDLMIKKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55BC40)
#define HEMHDLMIKKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55B950)
#define HEMHDLMIKKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55BD30)
#define HEMHDLMIKKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55BD00)
#define HEMHDLMIKKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55B980)
#define HEMHDLMIKKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55BC70)
#define HEMHDLMIKKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55BCD0)

inline static constexpr unsigned int HEMHDLMIKKA_TypeDefinitionIndex = 32496;

	class HEMHDLMIKKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEMHDLMIKKA")->GetStaticField(0x33350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEMHDLMIKKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEMHDLMIKKA*))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEMHDLMIKKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEMHDLMIKKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEMHDLMIKKA* Clone()
		{
			return ((::HEMHDLMIKKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEMHDLMIKKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEMHDLMIKKA*))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEMHDLMIKKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEMHDLMIKKA*))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEMHDLMIKKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
