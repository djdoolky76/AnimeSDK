#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOMBOPLGJJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOMBOPLGJJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB61800)
#define NOMBOPLGJJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB61AD0)
#define NOMBOPLGJJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB61450)
#define NOMBOPLGJJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB61420)
#define NOMBOPLGJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB61410)
#define NOMBOPLGJJC_DCCGNCLAHBA_OFFSET UNITYSDK_OFFSET(0x1EB614A0)
#define NOMBOPLGJJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB615C0)
#define NOMBOPLGJJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB614E0)
#define NOMBOPLGJJC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB614D0)
#define NOMBOPLGJJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB61690)
#define NOMBOPLGJJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB613D0)
#define NOMBOPLGJJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB61950)
#define NOMBOPLGJJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB61910)
#define NOMBOPLGJJC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB614C0)
#define NOMBOPLGJJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB61400)
#define NOMBOPLGJJC_PHHMJFOFEPA_OFFSET UNITYSDK_OFFSET(0x1EB614B0)
#define NOMBOPLGJJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB616C0)
#define NOMBOPLGJJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB61720)

inline static constexpr unsigned int NOMBOPLGJJC_TypeDefinitionIndex = 27969;

	class NOMBOPLGJJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 AOMPJLMLKCC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NOMBOPLGJJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOMBOPLGJJC*>**)UnitySDK::FromName("", "NOMBOPLGJJC")->GetStaticField(0xB8A0);
		}

		// static const ::System::Object LDCHHPMKPHH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOMBOPLGJJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOMBOPLGJJC*))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMBOPLGJJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOMBOPLGJJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOMBOPLGJJC*>*(*)())((::PBYTE)hIl2Cpp + NOMBOPLGJJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOMBOPLGJJC* Clone()
		{
			return ((::NOMBOPLGJJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 DCCGNCLAHBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_DCCGNCLAHBA_OFFSET))(this);
		}

		::System::Void PHHMJFOFEPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_PHHMJFOFEPA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOMBOPLGJJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOMBOPLGJJC*))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOMBOPLGJJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOMBOPLGJJC*))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOMBOPLGJJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
