#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJBPJMDKALB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJBPJMDKALB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2055C230)
#define PJBPJMDKALB_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055C510)
#define PJBPJMDKALB_CLONE_OFFSET UNITYSDK_OFFSET(0x2055BD50)
#define PJBPJMDKALB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2055BD10)
#define PJBPJMDKALB_CTOR_OFFSET UNITYSDK_OFFSET(0x2055BD00)
#define PJBPJMDKALB_DBJFMIIKOLM_OFFSET UNITYSDK_OFFSET(0x2055BDD0)
#define PJBPJMDKALB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2055BF30)
#define PJBPJMDKALB_EQUALS_OFFSET UNITYSDK_OFFSET(0x2055BE30)
#define PJBPJMDKALB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2055BDC0)
#define PJBPJMDKALB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2055C030)
#define PJBPJMDKALB_HLDMKCACKBD_OFFSET UNITYSDK_OFFSET(0x2055BDE0)
#define PJBPJMDKALB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2055BCC0)
#define PJBPJMDKALB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2055C360)
#define PJBPJMDKALB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2055C310)
#define PJBPJMDKALB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2055BDB0)
#define PJBPJMDKALB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2055BCF0)
#define PJBPJMDKALB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2055C0E0)
#define PJBPJMDKALB_WRITETO_OFFSET UNITYSDK_OFFSET(0x2055C140)

inline static constexpr unsigned int PJBPJMDKALB_TypeDefinitionIndex = 32477;

	class PJBPJMDKALB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* AFFMLKCPDIJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PJBPJMDKALB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJBPJMDKALB*>**)UnitySDK::FromName("", "PJBPJMDKALB")->GetStaticField(0x3E700);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FHCHOCDKMEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJBPJMDKALB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJBPJMDKALB*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBPJMDKALB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJBPJMDKALB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJBPJMDKALB*>*(*)())((::PBYTE)hIl2Cpp + PJBPJMDKALB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJBPJMDKALB* Clone()
		{
			return ((::PJBPJMDKALB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJBPJMDKALB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* DBJFMIIKOLM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_DBJFMIIKOLM_OFFSET))(this);
		}

		::System::Void HLDMKCACKBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_HLDMKCACKBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJBPJMDKALB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJBPJMDKALB*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJBPJMDKALB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJBPJMDKALB*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJBPJMDKALB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
