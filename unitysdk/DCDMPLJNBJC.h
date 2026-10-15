#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCDMPLJNBJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCDMPLJNBJC_AEEOAHGOGGE_OFFSET UNITYSDK_OFFSET(0x1E13B120)
#define DCDMPLJNBJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13B4F0)
#define DCDMPLJNBJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13B780)
#define DCDMPLJNBJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13B070)
#define DCDMPLJNBJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13B030)
#define DCDMPLJNBJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13B020)
#define DCDMPLJNBJC_ENOBOBELOMB_OFFSET UNITYSDK_OFFSET(0x1E13B110)
#define DCDMPLJNBJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13B1A0)
#define DCDMPLJNBJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13B140)
#define DCDMPLJNBJC_FBGJODAEJPN_OFFSET UNITYSDK_OFFSET(0x1E13B130)
#define DCDMPLJNBJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13B290)
#define DCDMPLJNBJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13AFE0)
#define DCDMPLJNBJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13B6E0)
#define DCDMPLJNBJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13B690)
#define DCDMPLJNBJC_NNKHKCHPEKF_OFFSET UNITYSDK_OFFSET(0x1E13B0C0)
#define DCDMPLJNBJC_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1E13B0E0)
#define DCDMPLJNBJC_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1E13B0F0)
#define DCDMPLJNBJC_OOILLAJKOBD_OFFSET UNITYSDK_OFFSET(0x1E13B100)
#define DCDMPLJNBJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13B010)
#define DCDMPLJNBJC_PKFNJBLOLNM_OFFSET UNITYSDK_OFFSET(0x1E13B0D0)
#define DCDMPLJNBJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13B2C0)
#define DCDMPLJNBJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13B320)

inline static constexpr unsigned int DCDMPLJNBJC_TypeDefinitionIndex = 33630;

	class DCDMPLJNBJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBINIPAAKFD; // 0x18
		::System::UInt32 KOJDOFOIEFN; // 0x1C
		::System::Boolean LOEPIAFBCIJ; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 PBEOFHHEDOM; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DCDMPLJNBJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCDMPLJNBJC*>**)UnitySDK::FromName("", "DCDMPLJNBJC")->GetStaticField(0x23B90);
		}

		// static const ::System::Object HFEOODPKCBN; // 0x0
		// static const ::System::Object OPKLCINAFJC; // 0x0
		// static const ::System::Object IAMEGLBLKPK; // 0x0
		// static const ::System::Object JACOLNHHOAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCDMPLJNBJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCDMPLJNBJC*))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCDMPLJNBJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCDMPLJNBJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCDMPLJNBJC*>*(*)())((::PBYTE)hIl2Cpp + DCDMPLJNBJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCDMPLJNBJC* Clone()
		{
			return ((::DCDMPLJNBJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNKHKCHPEKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_NNKHKCHPEKF_OFFSET))(this);
		}

		::System::Void PKFNJBLOLNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_PKFNJBLOLNM_OFFSET))(this, a1);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::UInt32 OOILLAJKOBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_OOILLAJKOBD_OFFSET))(this);
		}

		::System::Void ENOBOBELOMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_ENOBOBELOMB_OFFSET))(this, a1);
		}

		::System::UInt32 AEEOAHGOGGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_AEEOAHGOGGE_OFFSET))(this);
		}

		::System::Void FBGJODAEJPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_FBGJODAEJPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCDMPLJNBJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCDMPLJNBJC*))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCDMPLJNBJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCDMPLJNBJC*))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCDMPLJNBJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
