#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBOLGFEIIOA;
class LMDPKOELKFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CBOLGFEIIOA_BGGFEOJOIDL_OFFSET UNITYSDK_OFFSET(0x1E06F460)
#define CBOLGFEIIOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06FC50)
#define CBOLGFEIIOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E070070)
#define CBOLGFEIIOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06F410)
#define CBOLGFEIIOA_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E06F4A0)
#define CBOLGFEIIOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06F330)
#define CBOLGFEIIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06F320)
#define CBOLGFEIIOA_EIBOEPNDNCM_OFFSET UNITYSDK_OFFSET(0x1E06F480)
#define CBOLGFEIIOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06F670)
#define CBOLGFEIIOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06F4C0)
#define CBOLGFEIIOA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E06F450)
#define CBOLGFEIIOA_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E06F4B0)
#define CBOLGFEIIOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06F950)
#define CBOLGFEIIOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E06F2E0)
#define CBOLGFEIIOA_JPIDJMOFJCP_OFFSET UNITYSDK_OFFSET(0x1E06F490)
#define CBOLGFEIIOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06FEE0)
#define CBOLGFEIIOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06FD80)
#define CBOLGFEIIOA_MPNJGCHJKPA_OFFSET UNITYSDK_OFFSET(0x1E06F470)
#define CBOLGFEIIOA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E06F440)
#define CBOLGFEIIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06F310)
#define CBOLGFEIIOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06FA60)
#define CBOLGFEIIOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06FAC0)

inline static constexpr unsigned int CBOLGFEIIOA_TypeDefinitionIndex = 32748;

	class CBOLGFEIIOA : public ::System::Object
	{
	public:
		::LMDPKOELKFL* FCONOKGGGNG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::Proto::ItemList* BEBNFGDKGJK; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CBOLGFEIIOA")->GetStaticField(0xC8D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JHKEIKHFDON; // 0x0
		// static const ::System::Object EILKNDFFPEP; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBOLGFEIIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBOLGFEIIOA*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOLGFEIIOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CBOLGFEIIOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBOLGFEIIOA* Clone()
		{
			return ((::CBOLGFEIIOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* BGGFEOJOIDL()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_BGGFEOJOIDL_OFFSET))(this);
		}

		::System::Void MPNJGCHJKPA(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_MPNJGCHJKPA_OFFSET))(this, a1);
		}

		::LMDPKOELKFL* EIBOEPNDNCM()
		{
			return ((::LMDPKOELKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_EIBOEPNDNCM_OFFSET))(this);
		}

		::System::Void JPIDJMOFJCP(::LMDPKOELKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMDPKOELKFL*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_JPIDJMOFJCP_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBOLGFEIIOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBOLGFEIIOA*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBOLGFEIIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBOLGFEIIOA*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBOLGFEIIOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
