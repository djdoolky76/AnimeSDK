#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDOMFBJMKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDDOMFBJMKE_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1EAE4D50)
#define NDDOMFBJMKE_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1EAE4D60)
#define NDDOMFBJMKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE50D0)
#define NDDOMFBJMKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE54B0)
#define NDDOMFBJMKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE4CB0)
#define NDDOMFBJMKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE4C70)
#define NDDOMFBJMKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE4C60)
#define NDDOMFBJMKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE4E10)
#define NDDOMFBJMKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE4D90)
#define NDDOMFBJMKE_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1EAE4D40)
#define NDDOMFBJMKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE4EF0)
#define NDDOMFBJMKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE4BF0)
#define NDDOMFBJMKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE5300)
#define NDDOMFBJMKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE52B0)
#define NDDOMFBJMKE_MNMLCFCPOHC_OFFSET UNITYSDK_OFFSET(0x1EAE4D70)
#define NDDOMFBJMKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE4C50)
#define NDDOMFBJMKE_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1EAE4D30)
#define NDDOMFBJMKE_PPMHFGJGCCL_OFFSET UNITYSDK_OFFSET(0x1EAE4D80)
#define NDDOMFBJMKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE4F30)
#define NDDOMFBJMKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE4F90)

	class NDDOMFBJMKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBHLHPDBNFD; // 0x18
		::System::UInt32 ADOPAOCMEOG; // 0x1C
		::System::UInt64 DEGPEAIMEPO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NDDOMFBJMKE")->GetStaticField(0x5D4B0);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object ELFGGGHJCFC; // 0x0
		// static const ::System::Object NNCIFKLLNII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDDOMFBJMKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDDOMFBJMKE*))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDDOMFBJMKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NDDOMFBJMKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDDOMFBJMKE* Clone()
		{
			return ((::NDDOMFBJMKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 AJOPEKGIJFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void BKMJJABNDMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_BKMJJABNDMA_OFFSET))(this, a1);
		}

		::System::UInt64 MNMLCFCPOHC()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_MNMLCFCPOHC_OFFSET))(this);
		}

		::System::Void PPMHFGJGCCL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_PPMHFGJGCCL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDDOMFBJMKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDDOMFBJMKE*))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDDOMFBJMKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDDOMFBJMKE*))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDDOMFBJMKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
