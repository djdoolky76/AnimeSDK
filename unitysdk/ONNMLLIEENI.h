#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNMLLIEENI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONNMLLIEENI_BIMJBCDDJAP_OFFSET UNITYSDK_OFFSET(0x1DED2120)
#define ONNMLLIEENI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DED2460)
#define ONNMLLIEENI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED2730)
#define ONNMLLIEENI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DED20B0)
#define ONNMLLIEENI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED2080)
#define ONNMLLIEENI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED2070)
#define ONNMLLIEENI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DED2220)
#define ONNMLLIEENI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DED2140)
#define ONNMLLIEENI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DED22F0)
#define ONNMLLIEENI_GPIDJGOOKIG_OFFSET UNITYSDK_OFFSET(0x1DED2130)
#define ONNMLLIEENI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DED2030)
#define ONNMLLIEENI_LELBEPIMPMC_OFFSET UNITYSDK_OFFSET(0x1DED2100)
#define ONNMLLIEENI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DED25B0)
#define ONNMLLIEENI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DED2570)
#define ONNMLLIEENI_OLALIDNOEOK_OFFSET UNITYSDK_OFFSET(0x1DED2110)
#define ONNMLLIEENI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DED2060)
#define ONNMLLIEENI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DED2320)
#define ONNMLLIEENI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DED2380)

	class ONNMLLIEENI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EGLDDJMEOJC; // 0x18
		::System::UInt32 HCMFKCGKNGC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONNMLLIEENI")->GetStaticField(0x24EF0);
		}

		// static const ::System::Object KPMNBDKJBCI; // 0x0
		// static const ::System::Object DIDDMJMCGLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONNMLLIEENI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNMLLIEENI*))((::PBYTE)hIl2Cpp + ONNMLLIEENI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNMLLIEENI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONNMLLIEENI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONNMLLIEENI* Clone()
		{
			return ((::ONNMLLIEENI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_CLONE_OFFSET))(this);
		}

		::System::UInt32 LELBEPIMPMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_LELBEPIMPMC_OFFSET))(this);
		}

		::System::Void OLALIDNOEOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONNMLLIEENI_OLALIDNOEOK_OFFSET))(this, a1);
		}

		::System::UInt32 BIMJBCDDJAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_BIMJBCDDJAP_OFFSET))(this);
		}

		::System::Void GPIDJGOOKIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONNMLLIEENI_GPIDJGOOKIG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONNMLLIEENI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONNMLLIEENI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONNMLLIEENI*))((::PBYTE)hIl2Cpp + ONNMLLIEENI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONNMLLIEENI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMLLIEENI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONNMLLIEENI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNMLLIEENI*))((::PBYTE)hIl2Cpp + ONNMLLIEENI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONNMLLIEENI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
