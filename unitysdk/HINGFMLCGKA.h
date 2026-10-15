#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HINGFMLCGKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HINGFMLCGKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59E540)
#define HINGFMLCGKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59E5E0)
#define HINGFMLCGKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59E230)
#define HINGFMLCGKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59E200)
#define HINGFMLCGKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59E1F0)
#define HINGFMLCGKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59E340)
#define HINGFMLCGKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59E270)
#define HINGFMLCGKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59E4A0)
#define HINGFMLCGKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59E1B0)
#define HINGFMLCGKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59E590)
#define HINGFMLCGKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59E560)
#define HINGFMLCGKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59E1E0)
#define HINGFMLCGKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59E4D0)
#define HINGFMLCGKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59E530)

	class HINGFMLCGKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HINGFMLCGKA")->GetStaticField(0x3EA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HINGFMLCGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HINGFMLCGKA*))((::PBYTE)hIl2Cpp + HINGFMLCGKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINGFMLCGKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HINGFMLCGKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HINGFMLCGKA* Clone()
		{
			return ((::HINGFMLCGKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HINGFMLCGKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HINGFMLCGKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HINGFMLCGKA*))((::PBYTE)hIl2Cpp + HINGFMLCGKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HINGFMLCGKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HINGFMLCGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HINGFMLCGKA*))((::PBYTE)hIl2Cpp + HINGFMLCGKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HINGFMLCGKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
