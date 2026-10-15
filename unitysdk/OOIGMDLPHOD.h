#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOIGMDLPHOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOIGMDLPHOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DED8280)
#define OOIGMDLPHOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED8550)
#define OOIGMDLPHOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DED7ED0)
#define OOIGMDLPHOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED7EA0)
#define OOIGMDLPHOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED7E90)
#define OOIGMDLPHOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DED8040)
#define OOIGMDLPHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DED7F60)
#define OOIGMDLPHOD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DED7F30)
#define OOIGMDLPHOD_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1DED7F40)
#define OOIGMDLPHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DED8110)
#define OOIGMDLPHOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DED7E50)
#define OOIGMDLPHOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DED83D0)
#define OOIGMDLPHOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DED8390)
#define OOIGMDLPHOD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DED7F20)
#define OOIGMDLPHOD_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1DED7F50)
#define OOIGMDLPHOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DED7E80)
#define OOIGMDLPHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DED8140)
#define OOIGMDLPHOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DED81A0)

	class OOIGMDLPHOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OOIGMDLPHOD")->GetStaticField(0x2F2C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOIGMDLPHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOIGMDLPHOD*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OOIGMDLPHOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOIGMDLPHOD* Clone()
		{
			return ((::OOIGMDLPHOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOIGMDLPHOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOIGMDLPHOD*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOIGMDLPHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOIGMDLPHOD*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
