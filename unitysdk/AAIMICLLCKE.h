#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAIMICLLCKE;
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAIMICLLCKE_BAHNOLHGCAC_OFFSET UNITYSDK_OFFSET(0x1DDBB960)
#define AAIMICLLCKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBBF40)
#define AAIMICLLCKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBC310)
#define AAIMICLLCKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBB880)
#define AAIMICLLCKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBB7F0)
#define AAIMICLLCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBB7E0)
#define AAIMICLLCKE_DOKGDPEPGBM_OFFSET UNITYSDK_OFFSET(0x1DDBB980)
#define AAIMICLLCKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBBB40)
#define AAIMICLLCKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBB990)
#define AAIMICLLCKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBBCC0)
#define AAIMICLLCKE_GNBLPHNBPGA_OFFSET UNITYSDK_OFFSET(0x1DDBB950)
#define AAIMICLLCKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBB770)
#define AAIMICLLCKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBC120)
#define AAIMICLLCKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBC010)
#define AAIMICLLCKE_OCKODBAMFPL_OFFSET UNITYSDK_OFFSET(0x1DDBB970)
#define AAIMICLLCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBB7D0)
#define AAIMICLLCKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBBE00)
#define AAIMICLLCKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBBE60)

	class AAIMICLLCKE : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* INKIPGKALCA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GJPBFGGIPGC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAIMICLLCKE")->GetStaticField(0x36EA0);
		}

		// static const ::System::Object ICFMEJCOFGI; // 0x0
		// static const ::System::Object PMNOGKAJLKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAIMICLLCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAIMICLLCKE*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAIMICLLCKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAIMICLLCKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAIMICLLCKE* Clone()
		{
			return ((::AAIMICLLCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_CLONE_OFFSET))(this);
		}

		::NCFKHDIKCNI* GNBLPHNBPGA()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_GNBLPHNBPGA_OFFSET))(this);
		}

		::System::Void BAHNOLHGCAC(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_BAHNOLHGCAC_OFFSET))(this, a1);
		}

		::System::UInt32 OCKODBAMFPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_OCKODBAMFPL_OFFSET))(this);
		}

		::System::Void DOKGDPEPGBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAIMICLLCKE_DOKGDPEPGBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAIMICLLCKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAIMICLLCKE*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAIMICLLCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAIMICLLCKE*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAIMICLLCKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
