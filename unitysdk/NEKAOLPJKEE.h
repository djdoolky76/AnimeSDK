#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEKAOLPJKEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEKAOLPJKEE_AJELAIPKOMJ_OFFSET UNITYSDK_OFFSET(0x1EAF9120)
#define NEKAOLPJKEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF95F0)
#define NEKAOLPJKEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9830)
#define NEKAOLPJKEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF90A0)
#define NEKAOLPJKEE_CMCJFKJJNIF_OFFSET UNITYSDK_OFFSET(0x1EAF9110)
#define NEKAOLPJKEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF9060)
#define NEKAOLPJKEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9050)
#define NEKAOLPJKEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF92A0)
#define NEKAOLPJKEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF9170)
#define NEKAOLPJKEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF9440)
#define NEKAOLPJKEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF8FE0)
#define NEKAOLPJKEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF96A0)
#define NEKAOLPJKEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF9660)
#define NEKAOLPJKEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9040)
#define NEKAOLPJKEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF9500)
#define NEKAOLPJKEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF9560)

	class NEKAOLPJKEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* IFKLPIGJAPB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEKAOLPJKEE")->GetStaticField(0x24FA0);
		}

		// static const ::System::Object CNOALBBIKCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEKAOLPJKEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEKAOLPJKEE*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEKAOLPJKEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEKAOLPJKEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEKAOLPJKEE* Clone()
		{
			return ((::NEKAOLPJKEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_CLONE_OFFSET))(this);
		}

		::System::String* CMCJFKJJNIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_CMCJFKJJNIF_OFFSET))(this);
		}

		::System::Void AJELAIPKOMJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_AJELAIPKOMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEKAOLPJKEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEKAOLPJKEE*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEKAOLPJKEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEKAOLPJKEE*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEKAOLPJKEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
