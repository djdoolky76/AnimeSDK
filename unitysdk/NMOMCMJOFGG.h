#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JECNOELJLKO;
class NMOMCMJOFGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMOMCMJOFGG_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1EB7A820)
#define NMOMCMJOFGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7ADC0)
#define NMOMCMJOFGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7B160)
#define NMOMCMJOFGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7A780)
#define NMOMCMJOFGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7A6F0)
#define NMOMCMJOFGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7A6E0)
#define NMOMCMJOFGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7A9B0)
#define NMOMCMJOFGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7A840)
#define NMOMCMJOFGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7AC80)
#define NMOMCMJOFGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7A6A0)
#define NMOMCMJOFGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7AF40)
#define NMOMCMJOFGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7AE20)
#define NMOMCMJOFGG_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1EB7A830)
#define NMOMCMJOFGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7A6D0)
#define NMOMCMJOFGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7ACD0)
#define NMOMCMJOFGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7AD30)

	class NMOMCMJOFGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JECNOELJLKO* CMDGAIOLHKP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMOMCMJOFGG")->GetStaticField(0x6C6D0);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMOMCMJOFGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMOMCMJOFGG*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOMCMJOFGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMOMCMJOFGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMOMCMJOFGG* Clone()
		{
			return ((::NMOMCMJOFGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_CLONE_OFFSET))(this);
		}

		::JECNOELJLKO* ANALOEDDDHD()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMOMCMJOFGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMOMCMJOFGG*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMOMCMJOFGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMOMCMJOFGG*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMOMCMJOFGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
