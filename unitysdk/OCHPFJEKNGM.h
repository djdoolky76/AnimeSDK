#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCHPFJEKNGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OCHPFJEKNGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE14C60)
#define OCHPFJEKNGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE14F80)
#define OCHPFJEKNGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE146D0)
#define OCHPFJEKNGM_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DE14770)
#define OCHPFJEKNGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE14660)
#define OCHPFJEKNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE14650)
#define OCHPFJEKNGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE14910)
#define OCHPFJEKNGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE14790)
#define OCHPFJEKNGM_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DE14780)
#define OCHPFJEKNGM_GEKIABKDINF_OFFSET UNITYSDK_OFFSET(0x1DE14760)
#define OCHPFJEKNGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE14A90)
#define OCHPFJEKNGM_JIHCNBCLLKP_OFFSET UNITYSDK_OFFSET(0x1DE14750)
#define OCHPFJEKNGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE14610)
#define OCHPFJEKNGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE14DC0)
#define OCHPFJEKNGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE14D30)
#define OCHPFJEKNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE14640)
#define OCHPFJEKNGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE14B20)
#define OCHPFJEKNGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE14B80)

	class OCHPFJEKNGM : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CPGOPLHGNIP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCHPFJEKNGM")->GetStaticField(0x12CB0);
		}

		// static const ::System::Object DNGBFNAFCEG; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCHPFJEKNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCHPFJEKNGM*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCHPFJEKNGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCHPFJEKNGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCHPFJEKNGM* Clone()
		{
			return ((::OCHPFJEKNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHCNBCLLKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_JIHCNBCLLKP_OFFSET))(this);
		}

		::System::Void GEKIABKDINF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_GEKIABKDINF_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCHPFJEKNGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCHPFJEKNGM*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCHPFJEKNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCHPFJEKNGM*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCHPFJEKNGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
