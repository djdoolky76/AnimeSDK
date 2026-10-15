#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLLJCAMGMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGLLJCAMGMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E651620)
#define IGLLJCAMGMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6518F0)
#define IGLLJCAMGMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E651220)
#define IGLLJCAMGMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6511F0)
#define IGLLJCAMGMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6511E0)
#define IGLLJCAMGMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6513E0)
#define IGLLJCAMGMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6512D0)
#define IGLLJCAMGMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6514B0)
#define IGLLJCAMGMO_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E6512A0)
#define IGLLJCAMGMO_JGHGNDOONLD_OFFSET UNITYSDK_OFFSET(0x1E6512C0)
#define IGLLJCAMGMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E651170)
#define IGLLJCAMGMO_KLAHBPJHNFM_OFFSET UNITYSDK_OFFSET(0x1E6512B0)
#define IGLLJCAMGMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E651770)
#define IGLLJCAMGMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E651730)
#define IGLLJCAMGMO_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E651290)
#define IGLLJCAMGMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6511D0)
#define IGLLJCAMGMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6514E0)
#define IGLLJCAMGMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E651540)

inline static constexpr unsigned int IGLLJCAMGMO_TypeDefinitionIndex = 26810;

	class IGLLJCAMGMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEPOBIODAJH; // 0x18
		::System::UInt32 MEBOHLDJBJD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGLLJCAMGMO")->GetStaticField(0x14DD0);
		}

		// static const ::System::Object BPLJLIMECGH; // 0x0
		// static const ::System::Object DDGKPEPGDBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGLLJCAMGMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGLLJCAMGMO*))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLLJCAMGMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGLLJCAMGMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGLLJCAMGMO* Clone()
		{
			return ((::IGLLJCAMGMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::UInt32 KLAHBPJHNFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_KLAHBPJHNFM_OFFSET))(this);
		}

		::System::Void JGHGNDOONLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_JGHGNDOONLD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGLLJCAMGMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGLLJCAMGMO*))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGLLJCAMGMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGLLJCAMGMO*))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGLLJCAMGMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
