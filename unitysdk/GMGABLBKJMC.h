#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDICBBEGKEO.h"
#include "unitysdk/System/Object.h"
class GMGABLBKJMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMGABLBKJMC_AAHMEDFOKNI_OFFSET UNITYSDK_OFFSET(0x1E4D20F0)
#define GMGABLBKJMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D2460)
#define GMGABLBKJMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D2770)
#define GMGABLBKJMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D2050)
#define GMGABLBKJMC_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E4D20C0)
#define GMGABLBKJMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D2020)
#define GMGABLBKJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D2010)
#define GMGABLBKJMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D2210)
#define GMGABLBKJMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D2100)
#define GMGABLBKJMC_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E4D20D0)
#define GMGABLBKJMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D22E0)
#define GMGABLBKJMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D1FA0)
#define GMGABLBKJMC_LMABJDHENPK_OFFSET UNITYSDK_OFFSET(0x1E4D20E0)
#define GMGABLBKJMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D25F0)
#define GMGABLBKJMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D25B0)
#define GMGABLBKJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D2000)
#define GMGABLBKJMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D2310)
#define GMGABLBKJMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D2370)

inline static constexpr unsigned int GMGABLBKJMC_TypeDefinitionIndex = 28772;

	class GMGABLBKJMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMABHKCOLCM; // 0x18
		::FDICBBEGKEO ABLEIKECCKM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMGABLBKJMC")->GetStaticField(0x219C0);
		}

		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object NHDJJANGCBA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMGABLBKJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGABLBKJMC*))((::PBYTE)hIl2Cpp + GMGABLBKJMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMGABLBKJMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMGABLBKJMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMGABLBKJMC* Clone()
		{
			return ((::GMGABLBKJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMGABLBKJMC_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::FDICBBEGKEO LMABJDHENPK()
		{
			return ((::FDICBBEGKEO(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_LMABJDHENPK_OFFSET))(this);
		}

		::System::Void AAHMEDFOKNI(::FDICBBEGKEO a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDICBBEGKEO))((::PBYTE)hIl2Cpp + GMGABLBKJMC_AAHMEDFOKNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMGABLBKJMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMGABLBKJMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMGABLBKJMC*))((::PBYTE)hIl2Cpp + GMGABLBKJMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMGABLBKJMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMGABLBKJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGABLBKJMC*))((::PBYTE)hIl2Cpp + GMGABLBKJMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMGABLBKJMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
