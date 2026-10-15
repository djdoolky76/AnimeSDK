#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPLIGADGDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPPLIGADGDF_BLNBHLIOFAF_OFFSET UNITYSDK_OFFSET(0x1EBA2E90)
#define NPPLIGADGDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA3220)
#define NPPLIGADGDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA35A0)
#define NPPLIGADGDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA2E00)
#define NPPLIGADGDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA2DC0)
#define NPPLIGADGDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2DB0)
#define NPPLIGADGDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA2F90)
#define NPPLIGADGDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA2EB0)
#define NPPLIGADGDF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EBA2E80)
#define NPPLIGADGDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA3060)
#define NPPLIGADGDF_HJAJKMBAKKP_OFFSET UNITYSDK_OFFSET(0x1EBA2EA0)
#define NPPLIGADGDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA2D70)
#define NPPLIGADGDF_LINOICHODIM_OFFSET UNITYSDK_OFFSET(0x1EBA2E60)
#define NPPLIGADGDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA3400)
#define NPPLIGADGDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA33B0)
#define NPPLIGADGDF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EBA2E70)
#define NPPLIGADGDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2DA0)
#define NPPLIGADGDF_PEGNHFNMFEJ_OFFSET UNITYSDK_OFFSET(0x1EBA2E50)
#define NPPLIGADGDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA3090)
#define NPPLIGADGDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA30F0)

inline static constexpr unsigned int NPPLIGADGDF_TypeDefinitionIndex = 28857;

	class NPPLIGADGDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ALHDKMPKABN; // 0x18
		::System::UInt32 EJOJPAOEEJJ; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPPLIGADGDF")->GetStaticField(0xF290);
		}

		// static const ::System::Object DDAEPENMNIF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ELCBIOCJIAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPPLIGADGDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPLIGADGDF*))((::PBYTE)hIl2Cpp + NPPLIGADGDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPLIGADGDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPPLIGADGDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPPLIGADGDF* Clone()
		{
			return ((::NPPLIGADGDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PEGNHFNMFEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_PEGNHFNMFEJ_OFFSET))(this);
		}

		::System::Void LINOICHODIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPLIGADGDF_LINOICHODIM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPLIGADGDF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BLNBHLIOFAF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_BLNBHLIOFAF_OFFSET))(this);
		}

		::System::Void HJAJKMBAKKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPLIGADGDF_HJAJKMBAKKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPPLIGADGDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPPLIGADGDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPPLIGADGDF*))((::PBYTE)hIl2Cpp + NPPLIGADGDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPPLIGADGDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPPLIGADGDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPLIGADGDF*))((::PBYTE)hIl2Cpp + NPPLIGADGDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPPLIGADGDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
