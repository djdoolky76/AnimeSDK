#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJKLLJELADJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJKLLJELADJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB4BE70)
#define NJKLLJELADJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C1F0)
#define NJKLLJELADJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB4BA50)
#define NJKLLJELADJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB4BA10)
#define NJKLLJELADJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4BA00)
#define NJKLLJELADJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB4BBE0)
#define NJKLLJELADJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB4BB00)
#define NJKLLJELADJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB4BAD0)
#define NJKLLJELADJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB4BCB0)
#define NJKLLJELADJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB4B9C0)
#define NJKLLJELADJ_KIAPBGGFFNF_OFFSET UNITYSDK_OFFSET(0x1EB4BAA0)
#define NJKLLJELADJ_LPPONEBGJPM_OFFSET UNITYSDK_OFFSET(0x1EB4BAB0)
#define NJKLLJELADJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB4C050)
#define NJKLLJELADJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB4C000)
#define NJKLLJELADJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB4BAC0)
#define NJKLLJELADJ_OKBFMMFNLOM_OFFSET UNITYSDK_OFFSET(0x1EB4BAE0)
#define NJKLLJELADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB4B9F0)
#define NJKLLJELADJ_PONHHILCPOM_OFFSET UNITYSDK_OFFSET(0x1EB4BAF0)
#define NJKLLJELADJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB4BCE0)
#define NJKLLJELADJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB4BD40)

inline static constexpr unsigned int NJKLLJELADJ_TypeDefinitionIndex = 26394;

	class NJKLLJELADJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HFOPACOPLCF; // 0x18
		::System::UInt32 BHGBIAIECLI; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NJKLLJELADJ")->GetStaticField(0x65510);
		}

		// static const ::System::Object MIGBCDIELLF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FCALMHEGJJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJKLLJELADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKLLJELADJ*))((::PBYTE)hIl2Cpp + NJKLLJELADJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJKLLJELADJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NJKLLJELADJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJKLLJELADJ* Clone()
		{
			return ((::NJKLLJELADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 KIAPBGGFFNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_KIAPBGGFFNF_OFFSET))(this);
		}

		::System::Void LPPONEBGJPM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJKLLJELADJ_LPPONEBGJPM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJKLLJELADJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OKBFMMFNLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_OKBFMMFNLOM_OFFSET))(this);
		}

		::System::Void PONHHILCPOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJKLLJELADJ_PONHHILCPOM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJKLLJELADJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJKLLJELADJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJKLLJELADJ*))((::PBYTE)hIl2Cpp + NJKLLJELADJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJKLLJELADJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJKLLJELADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKLLJELADJ*))((::PBYTE)hIl2Cpp + NJKLLJELADJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJKLLJELADJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
