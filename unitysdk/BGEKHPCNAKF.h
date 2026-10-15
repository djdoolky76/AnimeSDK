#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEKHPCNAKF;
class CIEEKOEECHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGEKHPCNAKF_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1EA73890)
#define BGEKHPCNAKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA73D30)
#define BGEKHPCNAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA74020)
#define BGEKHPCNAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA737F0)
#define BGEKHPCNAKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA73780)
#define BGEKHPCNAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA73770)
#define BGEKHPCNAKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA73A30)
#define BGEKHPCNAKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA738B0)
#define BGEKHPCNAKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA73880)
#define BGEKHPCNAKF_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1EA738A0)
#define BGEKHPCNAKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA73BB0)
#define BGEKHPCNAKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA73730)
#define BGEKHPCNAKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA73E80)
#define BGEKHPCNAKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA73E00)
#define BGEKHPCNAKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA73870)
#define BGEKHPCNAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA73760)
#define BGEKHPCNAKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA73BF0)
#define BGEKHPCNAKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA73C50)

	class BGEKHPCNAKF : public ::System::Object
	{
	public:
		::CIEEKOEECHB* ILEOLMKCJMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGEKHPCNAKF")->GetStaticField(0x42B00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IBBLPNOMPNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGEKHPCNAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEKHPCNAKF*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEKHPCNAKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGEKHPCNAKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGEKHPCNAKF* Clone()
		{
			return ((::BGEKHPCNAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::CIEEKOEECHB* BFLBEIIBIKN()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_BFLBEIIBIKN_OFFSET))(this);
		}

		::System::Void FLJOBDNCFEP(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_FLJOBDNCFEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGEKHPCNAKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGEKHPCNAKF*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGEKHPCNAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEKHPCNAKF*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGEKHPCNAKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
