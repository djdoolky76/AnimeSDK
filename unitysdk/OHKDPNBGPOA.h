#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHKDPNBGPOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHKDPNBGPOA_BJCLADJHOHD_OFFSET UNITYSDK_OFFSET(0x1DE36F10)
#define OHKDPNBGPOA_BPOEJLPNFOA_OFFSET UNITYSDK_OFFSET(0x1DE36ED0)
#define OHKDPNBGPOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE37460)
#define OHKDPNBGPOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE375D0)
#define OHKDPNBGPOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE36E40)
#define OHKDPNBGPOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE36E00)
#define OHKDPNBGPOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE36DF0)
#define OHKDPNBGPOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE37030)
#define OHKDPNBGPOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE36F60)
#define OHKDPNBGPOA_GAPPAFAMOBJ_OFFSET UNITYSDK_OFFSET(0x1DE36F20)
#define OHKDPNBGPOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE370C0)
#define OHKDPNBGPOA_GJBAKKICPKH_OFFSET UNITYSDK_OFFSET(0x1DE36F40)
#define OHKDPNBGPOA_HCOKDKFBOEP_OFFSET UNITYSDK_OFFSET(0x1DE36F30)
#define OHKDPNBGPOA_ICCBNIGLPNJ_OFFSET UNITYSDK_OFFSET(0x1DE36EE0)
#define OHKDPNBGPOA_IKNLJDHLMNJ_OFFSET UNITYSDK_OFFSET(0x1DE36F00)
#define OHKDPNBGPOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE36D80)
#define OHKDPNBGPOA_JMBHOHHLNOB_OFFSET UNITYSDK_OFFSET(0x1DE36F50)
#define OHKDPNBGPOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE37510)
#define OHKDPNBGPOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE374B0)
#define OHKDPNBGPOA_NIPGAPMMJMC_OFFSET UNITYSDK_OFFSET(0x1DE36EC0)
#define OHKDPNBGPOA_OLPNDEDNGFF_OFFSET UNITYSDK_OFFSET(0x1DE36EF0)
#define OHKDPNBGPOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE36DE0)
#define OHKDPNBGPOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE37110)
#define OHKDPNBGPOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE37170)

inline static constexpr unsigned int OHKDPNBGPOA_TypeDefinitionIndex = 28891;

	class OHKDPNBGPOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JLEIMHHHPOO; // 0x18
		::System::Boolean LCLMGLALNPO; // 0x19
		::System::Boolean LDMIPAJMJNL; // 0x1A
		::System::Boolean LIPAINNBLDF; // 0x1B
		::System::Boolean IJGDGNDLMAC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OHKDPNBGPOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHKDPNBGPOA*>**)UnitySDK::FromName("", "OHKDPNBGPOA")->GetStaticField(0x19F80);
		}

		// static const ::System::Object KKCJBGCFIDE; // 0x0
		// static const ::System::Object BJODAFKFOEM; // 0x0
		// static const ::System::Object IFLMBNBPOKO; // 0x0
		// static const ::System::Object ILGFEJBOCMC; // 0x0
		// static const ::System::Object OJHJIOLBLJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHKDPNBGPOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHKDPNBGPOA*))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHKDPNBGPOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHKDPNBGPOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHKDPNBGPOA*>*(*)())((::PBYTE)hIl2Cpp + OHKDPNBGPOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHKDPNBGPOA* Clone()
		{
			return ((::OHKDPNBGPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_CLONE_OFFSET))(this);
		}

		::System::Boolean NIPGAPMMJMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_NIPGAPMMJMC_OFFSET))(this);
		}

		::System::Void BPOEJLPNFOA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_BPOEJLPNFOA_OFFSET))(this, a1);
		}

		::System::Boolean ICCBNIGLPNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_ICCBNIGLPNJ_OFFSET))(this);
		}

		::System::Void OLPNDEDNGFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_OLPNDEDNGFF_OFFSET))(this, a1);
		}

		::System::Boolean IKNLJDHLMNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_IKNLJDHLMNJ_OFFSET))(this);
		}

		::System::Void BJCLADJHOHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_BJCLADJHOHD_OFFSET))(this, a1);
		}

		::System::Boolean GAPPAFAMOBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_GAPPAFAMOBJ_OFFSET))(this);
		}

		::System::Void HCOKDKFBOEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_HCOKDKFBOEP_OFFSET))(this, a1);
		}

		::System::Boolean GJBAKKICPKH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_GJBAKKICPKH_OFFSET))(this);
		}

		::System::Void JMBHOHHLNOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_JMBHOHHLNOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHKDPNBGPOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHKDPNBGPOA*))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHKDPNBGPOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHKDPNBGPOA*))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHKDPNBGPOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
