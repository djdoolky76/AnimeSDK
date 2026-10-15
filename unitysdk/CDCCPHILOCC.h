#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDCCPHILOCC_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E080030)
#define CDCCPHILOCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E080380)
#define CDCCPHILOCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E080650)
#define CDCCPHILOCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07FFD0)
#define CDCCPHILOCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07FFA0)
#define CDCCPHILOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07FF90)
#define CDCCPHILOCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E080140)
#define CDCCPHILOCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E080060)
#define CDCCPHILOCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E080210)
#define CDCCPHILOCC_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E080020)
#define CDCCPHILOCC_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E080050)
#define CDCCPHILOCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07FF50)
#define CDCCPHILOCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0804D0)
#define CDCCPHILOCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E080490)
#define CDCCPHILOCC_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E080040)
#define CDCCPHILOCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07FF80)
#define CDCCPHILOCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E080240)
#define CDCCPHILOCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0802A0)

	class CDCCPHILOCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 OEPOBIODAJH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDCCPHILOCC")->GetStaticField(0xEC00);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDCCPHILOCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDCCPHILOCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDCCPHILOCC* Clone()
		{
			return ((::CDCCPHILOCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCCPHILOCC_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCCPHILOCC_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDCCPHILOCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
