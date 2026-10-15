#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAOBHBLFPEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAOBHBLFPEC_AKNCLIJOIIA_OFFSET UNITYSDK_OFFSET(0x1E4256C0)
#define GAOBHBLFPEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E425A90)
#define GAOBHBLFPEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E425D90)
#define GAOBHBLFPEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E425600)
#define GAOBHBLFPEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4255D0)
#define GAOBHBLFPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4255C0)
#define GAOBHBLFPEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E425780)
#define GAOBHBLFPEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4256F0)
#define GAOBHBLFPEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E425860)
#define GAOBHBLFPEC_JFPMOFAFNPG_OFFSET UNITYSDK_OFFSET(0x1E4256B0)
#define GAOBHBLFPEC_JGOCLJOGEFM_OFFSET UNITYSDK_OFFSET(0x1E425680)
#define GAOBHBLFPEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E425550)
#define GAOBHBLFPEC_LGIGFBJJBGE_OFFSET UNITYSDK_OFFSET(0x1E4256A0)
#define GAOBHBLFPEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E425CF0)
#define GAOBHBLFPEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E425CA0)
#define GAOBHBLFPEC_OKBMHKGMCHB_OFFSET UNITYSDK_OFFSET(0x1E4256D0)
#define GAOBHBLFPEC_OOPEHONDAJI_OFFSET UNITYSDK_OFFSET(0x1E425670)
#define GAOBHBLFPEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4255B0)
#define GAOBHBLFPEC_PEFGMDLFHPG_OFFSET UNITYSDK_OFFSET(0x1E4256E0)
#define GAOBHBLFPEC_PFBPFCPBDDD_OFFSET UNITYSDK_OFFSET(0x1E425690)
#define GAOBHBLFPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4258A0)
#define GAOBHBLFPEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E425900)

inline static constexpr unsigned int GAOBHBLFPEC_TypeDefinitionIndex = 32654;

	class GAOBHBLFPEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFDBBPPNNLO; // 0x18
		::System::UInt32 BDEDLGGMEGN; // 0x1C
		::System::UInt32 HMJCMPALMDG; // 0x20
		::System::UInt32 DKEGFHGFCDL; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAOBHBLFPEC")->GetStaticField(0xC850);
		}

		// static const ::System::Object EJFFOAIJKAN; // 0x0
		// static const ::System::Object OLMPKJMDAML; // 0x0
		// static const ::System::Object FOJAMNDMOED; // 0x0
		// static const ::System::Object EICBIDIGDJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAOBHBLFPEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAOBHBLFPEC*))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAOBHBLFPEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAOBHBLFPEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAOBHBLFPEC* Clone()
		{
			return ((::GAOBHBLFPEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OOPEHONDAJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_OOPEHONDAJI_OFFSET))(this);
		}

		::System::Void JGOCLJOGEFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_JGOCLJOGEFM_OFFSET))(this, a1);
		}

		::System::UInt32 PFBPFCPBDDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_PFBPFCPBDDD_OFFSET))(this);
		}

		::System::Void LGIGFBJJBGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_LGIGFBJJBGE_OFFSET))(this, a1);
		}

		::System::UInt32 JFPMOFAFNPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_JFPMOFAFNPG_OFFSET))(this);
		}

		::System::Void AKNCLIJOIIA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_AKNCLIJOIIA_OFFSET))(this, a1);
		}

		::System::UInt32 OKBMHKGMCHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_OKBMHKGMCHB_OFFSET))(this);
		}

		::System::Void PEFGMDLFHPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_PEFGMDLFHPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAOBHBLFPEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAOBHBLFPEC*))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAOBHBLFPEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAOBHBLFPEC*))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAOBHBLFPEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
