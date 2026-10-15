#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEIEEEFKLFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEIEEEFKLFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63A6C0)
#define IEIEEEFKLFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63AA40)
#define IEIEEEFKLFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E63A2A0)
#define IEIEEEFKLFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E63A260)
#define IEIEEEFKLFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63A250)
#define IEIEEEFKLFA_EBCDHFKJKNG_OFFSET UNITYSDK_OFFSET(0x1E63A310)
#define IEIEEEFKLFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E63A430)
#define IEIEEEFKLFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E63A350)
#define IEIEEEFKLFA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E63A340)
#define IEIEEEFKLFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E63A500)
#define IEIEEEFKLFA_HNPIDLJGENF_OFFSET UNITYSDK_OFFSET(0x1E63A2F0)
#define IEIEEEFKLFA_JDEBDMKPDKF_OFFSET UNITYSDK_OFFSET(0x1E63A320)
#define IEIEEEFKLFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E63A210)
#define IEIEEEFKLFA_JOIFOMBKBEA_OFFSET UNITYSDK_OFFSET(0x1E63A300)
#define IEIEEEFKLFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63A8A0)
#define IEIEEEFKLFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63A850)
#define IEIEEEFKLFA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E63A330)
#define IEIEEEFKLFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E63A240)
#define IEIEEEFKLFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E63A530)
#define IEIEEEFKLFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E63A590)

	class IEIEEEFKLFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GFDCHFGLMFG; // 0x1C
		::System::UInt32 CCAJAJLNLAD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEIEEEFKLFA")->GetStaticField(0x485C0);
		}

		// static const ::System::Object FCLIMNNJMGN; // 0x0
		// static const ::System::Object MLOCKBDGJHI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEIEEEFKLFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIEEEFKLFA*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEIEEEFKLFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEIEEEFKLFA* Clone()
		{
			return ((::IEIEEEFKLFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HNPIDLJGENF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_HNPIDLJGENF_OFFSET))(this);
		}

		::System::Void JOIFOMBKBEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_JOIFOMBKBEA_OFFSET))(this, a1);
		}

		::System::UInt32 EBCDHFKJKNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_EBCDHFKJKNG_OFFSET))(this);
		}

		::System::Void JDEBDMKPDKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_JDEBDMKPDKF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEIEEEFKLFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEIEEEFKLFA*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEIEEEFKLFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIEEEFKLFA*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
