#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJBPJPEDLJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJBPJPEDLJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B03A0)
#define EJBPJPEDLJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B0670)
#define EJBPJPEDLJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AFFF0)
#define EJBPJPEDLJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AFFC0)
#define EJBPJPEDLJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFFB0)
#define EJBPJPEDLJL_EMJONBGEKGB_OFFSET UNITYSDK_OFFSET(0x1E2B0040)
#define EJBPJPEDLJL_EOGHDDBKPDA_OFFSET UNITYSDK_OFFSET(0x1E2B0050)
#define EJBPJPEDLJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B0160)
#define EJBPJPEDLJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B0080)
#define EJBPJPEDLJL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2B0070)
#define EJBPJPEDLJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B0230)
#define EJBPJPEDLJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2AFF70)
#define EJBPJPEDLJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B04F0)
#define EJBPJPEDLJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B04B0)
#define EJBPJPEDLJL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2B0060)
#define EJBPJPEDLJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFFA0)
#define EJBPJPEDLJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B0260)
#define EJBPJPEDLJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B02C0)

	class EJBPJPEDLJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LNCOAPGLKGB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJBPJPEDLJL")->GetStaticField(0x4A930);
		}

		// static const ::System::Object KJDJDPPBIFJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJBPJPEDLJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJBPJPEDLJL*))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBPJPEDLJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJBPJPEDLJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJBPJPEDLJL* Clone()
		{
			return ((::EJBPJPEDLJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMJONBGEKGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_EMJONBGEKGB_OFFSET))(this);
		}

		::System::Void EOGHDDBKPDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_EOGHDDBKPDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJBPJPEDLJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJBPJPEDLJL*))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJBPJPEDLJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJBPJPEDLJL*))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJBPJPEDLJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
