#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJFBLHNFMOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJFBLHNFMOM_AFAKLHKJCLI_OFFSET UNITYSDK_OFFSET(0x1E3A1930)
#define FJFBLHNFMOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A1D00)
#define FJFBLHNFMOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A1F60)
#define FJFBLHNFMOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A18B0)
#define FJFBLHNFMOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A1870)
#define FJFBLHNFMOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A1860)
#define FJFBLHNFMOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A1A80)
#define FJFBLHNFMOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A1970)
#define FJFBLHNFMOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A1B60)
#define FJFBLHNFMOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A17F0)
#define FJFBLHNFMOM_MDOGANFKFID_OFFSET UNITYSDK_OFFSET(0x1E3A1960)
#define FJFBLHNFMOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A1DE0)
#define FJFBLHNFMOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A1DA0)
#define FJFBLHNFMOM_NPAENPLOGPP_OFFSET UNITYSDK_OFFSET(0x1E3A1940)
#define FJFBLHNFMOM_OHFAFGMOMEI_OFFSET UNITYSDK_OFFSET(0x1E3A1950)
#define FJFBLHNFMOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A1850)
#define FJFBLHNFMOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A1B90)
#define FJFBLHNFMOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A1BF0)

inline static constexpr unsigned int FJFBLHNFMOM_TypeDefinitionIndex = 33716;

	class FJFBLHNFMOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DHDFOMGAOME; // 0x18
		::System::Boolean EEFPMEKJLEB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FJFBLHNFMOM")->GetStaticField(0x60910);
		}

		// static const ::System::Object APGDDELCFJE; // 0x0
		// static const ::System::Object OBPJACJDNLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJFBLHNFMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJFBLHNFMOM*))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJFBLHNFMOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FJFBLHNFMOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJFBLHNFMOM* Clone()
		{
			return ((::FJFBLHNFMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFAKLHKJCLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_AFAKLHKJCLI_OFFSET))(this);
		}

		::System::Void NPAENPLOGPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_NPAENPLOGPP_OFFSET))(this, a1);
		}

		::System::Boolean OHFAFGMOMEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_OHFAFGMOMEI_OFFSET))(this);
		}

		::System::Void MDOGANFKFID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_MDOGANFKFID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJFBLHNFMOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJFBLHNFMOM*))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJFBLHNFMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJFBLHNFMOM*))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJFBLHNFMOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
