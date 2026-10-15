#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHBHIHJAOPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHBHIHJAOPB_AENILPKCOAO_OFFSET UNITYSDK_OFFSET(0x1E387380)
#define FHBHIHJAOPB_BNEHLMBOAHH_OFFSET UNITYSDK_OFFSET(0x1E3873B0)
#define FHBHIHJAOPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3876F0)
#define FHBHIHJAOPB_CBKAEJJLNNH_OFFSET UNITYSDK_OFFSET(0x1E387390)
#define FHBHIHJAOPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E387A70)
#define FHBHIHJAOPB_CKBPEJBMNIK_OFFSET UNITYSDK_OFFSET(0x1E3873D0)
#define FHBHIHJAOPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E387300)
#define FHBHIHJAOPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3872C0)
#define FHBHIHJAOPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3872B0)
#define FHBHIHJAOPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E387460)
#define FHBHIHJAOPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3873E0)
#define FHBHIHJAOPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E387530)
#define FHBHIHJAOPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E387240)
#define FHBHIHJAOPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3878D0)
#define FHBHIHJAOPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E387880)
#define FHBHIHJAOPB_MJEHCLPOMGL_OFFSET UNITYSDK_OFFSET(0x1E3873A0)
#define FHBHIHJAOPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3872A0)
#define FHBHIHJAOPB_PDNMFMKOGNB_OFFSET UNITYSDK_OFFSET(0x1E3873C0)
#define FHBHIHJAOPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E387560)
#define FHBHIHJAOPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3875C0)

inline static constexpr unsigned int FHBHIHJAOPB_TypeDefinitionIndex = 29272;

	class FHBHIHJAOPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDHIGHBIAIC; // 0x18
		::System::UInt32 CKEEENCFNLE; // 0x1C
		::System::UInt32 LHNBMOFGFCN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHBHIHJAOPB")->GetStaticField(0x5F0D0);
		}

		// static const ::System::Object GOGOMALLEOM; // 0x0
		// static const ::System::Object KDAJDNKFCOO; // 0x0
		// static const ::System::Object JEMHNFIFKCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHBHIHJAOPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHBHIHJAOPB*))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHBHIHJAOPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHBHIHJAOPB* Clone()
		{
			return ((::FHBHIHJAOPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENILPKCOAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_AENILPKCOAO_OFFSET))(this);
		}

		::System::Void CBKAEJJLNNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CBKAEJJLNNH_OFFSET))(this, a1);
		}

		::System::UInt32 MJEHCLPOMGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_MJEHCLPOMGL_OFFSET))(this);
		}

		::System::Void BNEHLMBOAHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_BNEHLMBOAHH_OFFSET))(this, a1);
		}

		::System::UInt32 PDNMFMKOGNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_PDNMFMKOGNB_OFFSET))(this);
		}

		::System::Void CKBPEJBMNIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CKBPEJBMNIK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHBHIHJAOPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHBHIHJAOPB*))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHBHIHJAOPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHBHIHJAOPB*))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHBHIHJAOPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
