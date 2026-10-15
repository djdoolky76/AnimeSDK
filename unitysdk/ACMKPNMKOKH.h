#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACMKPNMKOKH;
class FKBOOENADFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACMKPNMKOKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDEAB0)
#define ACMKPNMKOKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDED80)
#define ACMKPNMKOKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDE560)
#define ACMKPNMKOKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDE4F0)
#define ACMKPNMKOKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDE4E0)
#define ACMKPNMKOKH_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1DDDE610)
#define ACMKPNMKOKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDE7A0)
#define ACMKPNMKOKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDE620)
#define ACMKPNMKOKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDE920)
#define ACMKPNMKOKH_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1DDDE600)
#define ACMKPNMKOKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDE4A0)
#define ACMKPNMKOKH_LPJGBMNIAIL_OFFSET UNITYSDK_OFFSET(0x1DDDE5E0)
#define ACMKPNMKOKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDEBF0)
#define ACMKPNMKOKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDEB80)
#define ACMKPNMKOKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDE4D0)
#define ACMKPNMKOKH_PLNBIBDNIJK_OFFSET UNITYSDK_OFFSET(0x1DDDE5F0)
#define ACMKPNMKOKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDE970)
#define ACMKPNMKOKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDE9D0)

inline static constexpr unsigned int ACMKPNMKOKH_TypeDefinitionIndex = 33400;

	class ACMKPNMKOKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FKBOOENADFM* GAPGOEGADAD; // 0x18
		::System::UInt32 JEPIGMEMEKE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACMKPNMKOKH")->GetStaticField(0x2B5C0);
		}

		// static const ::System::Object GANGLFDOJDI; // 0x0
		// static const ::System::Object GEPLKKBDGGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACMKPNMKOKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACMKPNMKOKH*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACMKPNMKOKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACMKPNMKOKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACMKPNMKOKH* Clone()
		{
			return ((::ACMKPNMKOKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_CLONE_OFFSET))(this);
		}

		::FKBOOENADFM* LPJGBMNIAIL()
		{
			return ((::FKBOOENADFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_LPJGBMNIAIL_OFFSET))(this);
		}

		::System::Void PLNBIBDNIJK(::FKBOOENADFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKBOOENADFM*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_PLNBIBDNIJK_OFFSET))(this, a1);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACMKPNMKOKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACMKPNMKOKH*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACMKPNMKOKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACMKPNMKOKH*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACMKPNMKOKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
