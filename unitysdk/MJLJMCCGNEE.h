#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLNABFMHFFH;
class MJLJMCCGNEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJLJMCCGNEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA1D2F0)
#define MJLJMCCGNEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1D650)
#define MJLJMCCGNEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA1CB20)
#define MJLJMCCGNEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA1CA20)
#define MJLJMCCGNEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1CA10)
#define MJLJMCCGNEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA1CF00)
#define MJLJMCCGNEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA1CCB0)
#define MJLJMCCGNEE_FHBNMMOFJFM_OFFSET UNITYSDK_OFFSET(0x1EA1CC90)
#define MJLJMCCGNEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA1D130)
#define MJLJMCCGNEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA1C9A0)
#define MJLJMCCGNEE_LOGMODHHBON_OFFSET UNITYSDK_OFFSET(0x1EA1CCA0)
#define MJLJMCCGNEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA1D4A0)
#define MJLJMCCGNEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA1D380)
#define MJLJMCCGNEE_NEOGPMLLBKB_OFFSET UNITYSDK_OFFSET(0x1EA1CC70)
#define MJLJMCCGNEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA1CA00)
#define MJLJMCCGNEE_PMNOBPADNKE_OFFSET UNITYSDK_OFFSET(0x1EA1CC80)
#define MJLJMCCGNEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA1D1B0)
#define MJLJMCCGNEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA1D210)

inline static constexpr unsigned int MJLJMCCGNEE_TypeDefinitionIndex = 28269;

	class MJLJMCCGNEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CLNABFMHFFH* AFEGAOEHAHA; // 0x18
		::CLNABFMHFFH* ONANDGLGBMI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MJLJMCCGNEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJLJMCCGNEE*>**)UnitySDK::FromName("", "MJLJMCCGNEE")->GetStaticField(0x4AE40);
		}

		// static const ::System::Object MFFLLMDPGBP; // 0x0
		// static const ::System::Object ECKPJOEHMAH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJLJMCCGNEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJLJMCCGNEE*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJLJMCCGNEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJLJMCCGNEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJLJMCCGNEE*>*(*)())((::PBYTE)hIl2Cpp + MJLJMCCGNEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJLJMCCGNEE* Clone()
		{
			return ((::MJLJMCCGNEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_CLONE_OFFSET))(this);
		}

		::CLNABFMHFFH* NEOGPMLLBKB()
		{
			return ((::CLNABFMHFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_NEOGPMLLBKB_OFFSET))(this);
		}

		::System::Void PMNOBPADNKE(::CLNABFMHFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_PMNOBPADNKE_OFFSET))(this, a1);
		}

		::CLNABFMHFFH* FHBNMMOFJFM()
		{
			return ((::CLNABFMHFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_FHBNMMOFJFM_OFFSET))(this);
		}

		::System::Void LOGMODHHBON(::CLNABFMHFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_LOGMODHHBON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJLJMCCGNEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJLJMCCGNEE*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJLJMCCGNEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJLJMCCGNEE*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
