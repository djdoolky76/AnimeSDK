#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OABAALAHIIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OABAALAHIIA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1EBA4340)
#define OABAALAHIIA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1EBA4350)
#define OABAALAHIIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA46B0)
#define OABAALAHIIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA48D0)
#define OABAALAHIIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA4300)
#define OABAALAHIIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA42D0)
#define OABAALAHIIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA42C0)
#define OABAALAHIIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA4430)
#define OABAALAHIIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA4360)
#define OABAALAHIIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA45A0)
#define OABAALAHIIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA4280)
#define OABAALAHIIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA4770)
#define OABAALAHIIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA4740)
#define OABAALAHIIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA42B0)
#define OABAALAHIIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA45D0)
#define OABAALAHIIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA4630)

	class OABAALAHIIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OABAALAHIIA")->GetStaticField(0xF400);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OABAALAHIIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OABAALAHIIA*))((::PBYTE)hIl2Cpp + OABAALAHIIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OABAALAHIIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OABAALAHIIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OABAALAHIIA* Clone()
		{
			return ((::OABAALAHIIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OABAALAHIIA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OABAALAHIIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OABAALAHIIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OABAALAHIIA*))((::PBYTE)hIl2Cpp + OABAALAHIIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OABAALAHIIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OABAALAHIIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OABAALAHIIA*))((::PBYTE)hIl2Cpp + OABAALAHIIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OABAALAHIIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
