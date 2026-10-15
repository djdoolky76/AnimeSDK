#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEAEMNNKKEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEAEMNNKKEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAEE480)
#define NEAEMNNKKEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEE750)
#define NEAEMNNKKEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAEE080)
#define NEAEMNNKKEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAEE050)
#define NEAEMNNKKEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAEE040)
#define NEAEMNNKKEF_DJHFGFAGLCM_OFFSET UNITYSDK_OFFSET(0x1EAEE110)
#define NEAEMNNKKEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAEE240)
#define NEAEMNNKKEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAEE130)
#define NEAEMNNKKEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAEE310)
#define NEAEMNNKKEF_IHHMEBDHLFP_OFFSET UNITYSDK_OFFSET(0x1EAEE0F0)
#define NEAEMNNKKEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAEDFD0)
#define NEAEMNNKKEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAEE5D0)
#define NEAEMNNKKEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAEE590)
#define NEAEMNNKKEF_MGFCPJBMBLB_OFFSET UNITYSDK_OFFSET(0x1EAEE100)
#define NEAEMNNKKEF_OEAEKGLFOGE_OFFSET UNITYSDK_OFFSET(0x1EAEE120)
#define NEAEMNNKKEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAEE030)
#define NEAEMNNKKEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAEE340)
#define NEAEMNNKKEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAEE3A0)

	class NEAEMNNKKEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MHGFDOLJICH; // 0x18
		::System::UInt32 KJJNJHLNEBM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEAEMNNKKEF")->GetStaticField(0x5D970);
		}

		// static const ::System::Object AJOBFHOINAF; // 0x0
		// static const ::System::Object PGNCBGKFMCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEAEMNNKKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEAEMNNKKEF*))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEAEMNNKKEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEAEMNNKKEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEAEMNNKKEF* Clone()
		{
			return ((::NEAEMNNKKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 IHHMEBDHLFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_IHHMEBDHLFP_OFFSET))(this);
		}

		::System::Void MGFCPJBMBLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_MGFCPJBMBLB_OFFSET))(this, a1);
		}

		::System::UInt32 DJHFGFAGLCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_DJHFGFAGLCM_OFFSET))(this);
		}

		::System::Void OEAEKGLFOGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_OEAEKGLFOGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEAEMNNKKEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEAEMNNKKEF*))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEAEMNNKKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEAEMNNKKEF*))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEAEMNNKKEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
