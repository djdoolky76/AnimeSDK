#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAKIMICINOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAKIMICINOH_AABABGIBNAC_OFFSET UNITYSDK_OFFSET(0x1E152560)
#define DAKIMICINOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E152930)
#define DAKIMICINOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E152CB0)
#define DAKIMICINOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E152510)
#define DAKIMICINOH_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E152580)
#define DAKIMICINOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1524D0)
#define DAKIMICINOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1524C0)
#define DAKIMICINOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1526A0)
#define DAKIMICINOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1525C0)
#define DAKIMICINOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E152770)
#define DAKIMICINOH_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E1525B0)
#define DAKIMICINOH_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E152590)
#define DAKIMICINOH_JBMPLANBNBK_OFFSET UNITYSDK_OFFSET(0x1E152570)
#define DAKIMICINOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E152480)
#define DAKIMICINOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E152B10)
#define DAKIMICINOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E152AC0)
#define DAKIMICINOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1524B0)
#define DAKIMICINOH_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E1525A0)
#define DAKIMICINOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1527A0)
#define DAKIMICINOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E152800)

	class DAKIMICINOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		::System::UInt32 EADHPLHIAAD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DAKIMICINOH")->GetStaticField(0x249A0);
		}

		// static const ::System::Object LOLPPJLDEGO; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAKIMICINOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAKIMICINOH*))((::PBYTE)hIl2Cpp + DAKIMICINOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAKIMICINOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DAKIMICINOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAKIMICINOH* Clone()
		{
			return ((::DAKIMICINOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AABABGIBNAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_AABABGIBNAC_OFFSET))(this);
		}

		::System::Void JBMPLANBNBK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKIMICINOH_JBMPLANBNBK_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKIMICINOH_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKIMICINOH_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAKIMICINOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAKIMICINOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAKIMICINOH*))((::PBYTE)hIl2Cpp + DAKIMICINOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAKIMICINOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAKIMICINOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAKIMICINOH*))((::PBYTE)hIl2Cpp + DAKIMICINOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAKIMICINOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
