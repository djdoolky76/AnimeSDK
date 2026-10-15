#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBBEOELJNPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBBEOELJNPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBABB00)
#define OBBEOELJNPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBABDD0)
#define OBBEOELJNPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBAB750)
#define OBBEOELJNPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBAB720)
#define OBBEOELJNPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAB710)
#define OBBEOELJNPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBAB8C0)
#define OBBEOELJNPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBAB7E0)
#define OBBEOELJNPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EBAB7B0)
#define OBBEOELJNPA_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1EBAB7C0)
#define OBBEOELJNPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBAB990)
#define OBBEOELJNPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBAB6D0)
#define OBBEOELJNPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBABC50)
#define OBBEOELJNPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBABC10)
#define OBBEOELJNPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EBAB7A0)
#define OBBEOELJNPA_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1EBAB7D0)
#define OBBEOELJNPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBAB700)
#define OBBEOELJNPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBAB9C0)
#define OBBEOELJNPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBABA20)

inline static constexpr unsigned int OBBEOELJNPA_TypeDefinitionIndex = 28183;

	class OBBEOELJNPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OBBEOELJNPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBBEOELJNPA*>**)UnitySDK::FromName("", "OBBEOELJNPA")->GetStaticField(0xFEF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBBEOELJNPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBBEOELJNPA*))((::PBYTE)hIl2Cpp + OBBEOELJNPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBBEOELJNPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBBEOELJNPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBBEOELJNPA*>*(*)())((::PBYTE)hIl2Cpp + OBBEOELJNPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBBEOELJNPA* Clone()
		{
			return ((::OBBEOELJNPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBBEOELJNPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBBEOELJNPA_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBBEOELJNPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBBEOELJNPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBBEOELJNPA*))((::PBYTE)hIl2Cpp + OBBEOELJNPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBBEOELJNPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBBEOELJNPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBBEOELJNPA*))((::PBYTE)hIl2Cpp + OBBEOELJNPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBBEOELJNPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
