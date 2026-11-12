#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONMMBJHCHIN.h"
#include "unitysdk/System/Object.h"
class HIPEONEPCFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIPEONEPCFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F89B320)
#define HIPEONEPCFF_CBBOHNAEMBN_OFFSET UNITYSDK_OFFSET(0x1F89ADE0)
#define HIPEONEPCFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89B670)
#define HIPEONEPCFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F89AD40)
#define HIPEONEPCFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F89ACF0)
#define HIPEONEPCFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89ACE0)
#define HIPEONEPCFF_EIOGEBGMJEI_OFFSET UNITYSDK_OFFSET(0x1F89ADD0)
#define HIPEONEPCFF_EOGAKLEODAP_OFFSET UNITYSDK_OFFSET(0x1F89ADB0)
#define HIPEONEPCFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F89AF50)
#define HIPEONEPCFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F89AE40)
#define HIPEONEPCFF_FMJFCDNCODB_OFFSET UNITYSDK_OFFSET(0x1F89ADF0)
#define HIPEONEPCFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F89B060)
#define HIPEONEPCFF_GFNBDKJJOCC_OFFSET UNITYSDK_OFFSET(0x1F89ADC0)
#define HIPEONEPCFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F89ACA0)
#define HIPEONEPCFF_LNAJIHJMOII_OFFSET UNITYSDK_OFFSET(0x1F89ADA0)
#define HIPEONEPCFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F89B4A0)
#define HIPEONEPCFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F89B440)
#define HIPEONEPCFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F89ACD0)
#define HIPEONEPCFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F89B120)
#define HIPEONEPCFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F89B180)

inline static constexpr unsigned int HIPEONEPCFF_TypeDefinitionIndex = 32993;

	class HIPEONEPCFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* APJJPMIKPIK; // 0x18
		::System::Boolean KANHAPIFLOM; // 0x20
		::System::Byte _padding0[0x3];
		::ONMMBJHCHIN INJGECDAJIA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>**)UnitySDK::FromName("", "HIPEONEPCFF")->GetStaticField(0x33290);
		}

		// static const ::System::Object BCGONOOIJBD; // 0x0
		// static const ::System::Object OPKAOFANLJI; // 0x0
		// static const ::System::Object AHCJNILFHBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIPEONEPCFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIPEONEPCFF*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPEONEPCFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>*(*)())((::PBYTE)hIl2Cpp + HIPEONEPCFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIPEONEPCFF* Clone()
		{
			return ((::HIPEONEPCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CLONE_OFFSET))(this);
		}

		::ONMMBJHCHIN LNAJIHJMOII()
		{
			return ((::ONMMBJHCHIN(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_LNAJIHJMOII_OFFSET))(this);
		}

		::System::Void EOGAKLEODAP(::ONMMBJHCHIN a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONMMBJHCHIN))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EOGAKLEODAP_OFFSET))(this, a1);
		}

		::System::Boolean GFNBDKJJOCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_GFNBDKJJOCC_OFFSET))(this);
		}

		::System::Void EIOGEBGMJEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EIOGEBGMJEI_OFFSET))(this, a1);
		}

		::System::String* CBBOHNAEMBN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CBBOHNAEMBN_OFFSET))(this);
		}

		::System::Void FMJFCDNCODB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_FMJFCDNCODB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIPEONEPCFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIPEONEPCFF*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIPEONEPCFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIPEONEPCFF*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
