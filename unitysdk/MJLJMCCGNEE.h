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

#define MJLJMCCGNEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205C2CB0)
#define MJLJMCCGNEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x205C3010)
#define MJLJMCCGNEE_CLONE_OFFSET UNITYSDK_OFFSET(0x205C24E0)
#define MJLJMCCGNEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205C23E0)
#define MJLJMCCGNEE_CTOR_OFFSET UNITYSDK_OFFSET(0x205C23D0)
#define MJLJMCCGNEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205C28C0)
#define MJLJMCCGNEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x205C2670)
#define MJLJMCCGNEE_FHBNMMOFJFM_OFFSET UNITYSDK_OFFSET(0x205C2630)
#define MJLJMCCGNEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205C2AF0)
#define MJLJMCCGNEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205C2360)
#define MJLJMCCGNEE_LOGMODHHBON_OFFSET UNITYSDK_OFFSET(0x205C2640)
#define MJLJMCCGNEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205C2E60)
#define MJLJMCCGNEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205C2D40)
#define MJLJMCCGNEE_NEOGPMLLBKB_OFFSET UNITYSDK_OFFSET(0x205C2650)
#define MJLJMCCGNEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205C23C0)
#define MJLJMCCGNEE_PMNOBPADNKE_OFFSET UNITYSDK_OFFSET(0x205C2660)
#define MJLJMCCGNEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205C2B70)
#define MJLJMCCGNEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x205C2BD0)

inline static constexpr unsigned int MJLJMCCGNEE_TypeDefinitionIndex = 28859;

	class MJLJMCCGNEE : public ::System::Object
	{
	public:
		::CLNABFMHFFH* ONANDGLGBMI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CLNABFMHFFH* AFEGAOEHAHA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MJLJMCCGNEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJLJMCCGNEE*>**)UnitySDK::FromName("", "MJLJMCCGNEE")->GetStaticField(0x3E9F0);
		}

		// static const ::System::Object ECKPJOEHMAH; // 0x0
		// static const ::System::Object MFFLLMDPGBP; // 0x0
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

		::CLNABFMHFFH* FHBNMMOFJFM()
		{
			return ((::CLNABFMHFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_FHBNMMOFJFM_OFFSET))(this);
		}

		::System::Void LOGMODHHBON(::CLNABFMHFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_LOGMODHHBON_OFFSET))(this, a1);
		}

		::CLNABFMHFFH* NEOGPMLLBKB()
		{
			return ((::CLNABFMHFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_NEOGPMLLBKB_OFFSET))(this);
		}

		::System::Void PMNOBPADNKE(::CLNABFMHFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + MJLJMCCGNEE_PMNOBPADNKE_OFFSET))(this, a1);
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
