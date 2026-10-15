#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNKOPCGKDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACNKOPCGKDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDF390)
#define ACNKOPCGKDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDF710)
#define ACNKOPCGKDD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDEF70)
#define ACNKOPCGKDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDEF30)
#define ACNKOPCGKDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDEF20)
#define ACNKOPCGKDD_DNPBHEMIBPK_OFFSET UNITYSDK_OFFSET(0x1DDDEFF0)
#define ACNKOPCGKDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDF100)
#define ACNKOPCGKDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDF020)
#define ACNKOPCGKDD_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1DDDEFC0)
#define ACNKOPCGKDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDF1D0)
#define ACNKOPCGKDD_GIBMEGFPMCL_OFFSET UNITYSDK_OFFSET(0x1DDDF000)
#define ACNKOPCGKDD_IJDDCLILELB_OFFSET UNITYSDK_OFFSET(0x1DDDF010)
#define ACNKOPCGKDD_IMFBLHADADC_OFFSET UNITYSDK_OFFSET(0x1DDDEFE0)
#define ACNKOPCGKDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDEEE0)
#define ACNKOPCGKDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDF570)
#define ACNKOPCGKDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDF520)
#define ACNKOPCGKDD_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1DDDEFD0)
#define ACNKOPCGKDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDEF10)
#define ACNKOPCGKDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDF200)
#define ACNKOPCGKDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDF260)

	class ACNKOPCGKDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PANHBLLDMGI; // 0x18
		::System::UInt32 PEBKDIKAJHA; // 0x1C
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACNKOPCGKDD")->GetStaticField(0x1C060);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object EMPDMPHKKGB; // 0x0
		// static const ::System::Object EDIBJHPGAPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACNKOPCGKDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACNKOPCGKDD*))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACNKOPCGKDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACNKOPCGKDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACNKOPCGKDD* Clone()
		{
			return ((::ACNKOPCGKDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 IMFBLHADADC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_IMFBLHADADC_OFFSET))(this);
		}

		::System::Void DNPBHEMIBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_DNPBHEMIBPK_OFFSET))(this, a1);
		}

		::System::UInt32 GIBMEGFPMCL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_GIBMEGFPMCL_OFFSET))(this);
		}

		::System::Void IJDDCLILELB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_IJDDCLILELB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACNKOPCGKDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNKOPCGKDD*))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACNKOPCGKDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACNKOPCGKDD*))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACNKOPCGKDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
