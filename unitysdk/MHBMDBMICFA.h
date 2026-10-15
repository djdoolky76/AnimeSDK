#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHBMDBMICFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHBMDBMICFA_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1EA2C0C0)
#define MHBMDBMICFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2C4A0)
#define MHBMDBMICFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C7B0)
#define MHBMDBMICFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2C020)
#define MHBMDBMICFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2BFE0)
#define MHBMDBMICFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2BFD0)
#define MHBMDBMICFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2C1C0)
#define MHBMDBMICFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2C0D0)
#define MHBMDBMICFA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA2C080)
#define MHBMDBMICFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2C2A0)
#define MHBMDBMICFA_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1EA2C0B0)
#define MHBMDBMICFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2BF90)
#define MHBMDBMICFA_JJHAEJOCKPB_OFFSET UNITYSDK_OFFSET(0x1EA2C090)
#define MHBMDBMICFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2C610)
#define MHBMDBMICFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2C5C0)
#define MHBMDBMICFA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA2C070)
#define MHBMDBMICFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2BFC0)
#define MHBMDBMICFA_PLJDMOIAGBN_OFFSET UNITYSDK_OFFSET(0x1EA2C0A0)
#define MHBMDBMICFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2C2D0)
#define MHBMDBMICFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2C330)

	class MHBMDBMICFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::Boolean HILCFELNGOM; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHBMDBMICFA")->GetStaticField(0x504B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IOFFJNOAHAM; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHBMDBMICFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHBMDBMICFA*))((::PBYTE)hIl2Cpp + MHBMDBMICFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHBMDBMICFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHBMDBMICFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHBMDBMICFA* Clone()
		{
			return ((::MHBMDBMICFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHBMDBMICFA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean JJHAEJOCKPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_JJHAEJOCKPB_OFFSET))(this);
		}

		::System::Void PLJDMOIAGBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHBMDBMICFA_PLJDMOIAGBN_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHBMDBMICFA_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHBMDBMICFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHBMDBMICFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHBMDBMICFA*))((::PBYTE)hIl2Cpp + MHBMDBMICFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHBMDBMICFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHBMDBMICFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHBMDBMICFA*))((::PBYTE)hIl2Cpp + MHBMDBMICFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHBMDBMICFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
