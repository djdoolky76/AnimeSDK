#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPDJDMFMBCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPDJDMFMBCN_AIJEFNDMBED_OFFSET UNITYSDK_OFFSET(0x1E4C9830)
#define GPDJDMFMBCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C9C50)
#define GPDJDMFMBCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C9F60)
#define GPDJDMFMBCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C97D0)
#define GPDJDMFMBCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C9790)
#define GPDJDMFMBCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C9780)
#define GPDJDMFMBCN_EFHDDIHBOIL_OFFSET UNITYSDK_OFFSET(0x1E4C9860)
#define GPDJDMFMBCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C9970)
#define GPDJDMFMBCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C9880)
#define GPDJDMFMBCN_FDONCDDCJMO_OFFSET UNITYSDK_OFFSET(0x1E4C9820)
#define GPDJDMFMBCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C9A50)
#define GPDJDMFMBCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C9740)
#define GPDJDMFMBCN_JMKBAJDDNLI_OFFSET UNITYSDK_OFFSET(0x1E4C9840)
#define GPDJDMFMBCN_LBAMPMBIGBL_OFFSET UNITYSDK_OFFSET(0x1E4C9870)
#define GPDJDMFMBCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C9DC0)
#define GPDJDMFMBCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C9D70)
#define GPDJDMFMBCN_NBIGJGFGBMA_OFFSET UNITYSDK_OFFSET(0x1E4C9850)
#define GPDJDMFMBCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C9770)
#define GPDJDMFMBCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C9A80)
#define GPDJDMFMBCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C9AE0)

inline static constexpr unsigned int GPDJDMFMBCN_TypeDefinitionIndex = 32243;

	class GPDJDMFMBCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AHONAFCGLHM; // 0x18
		::System::UInt32 PKIJPMBHMFD; // 0x1C
		::System::Boolean NHADIJBFADL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GPDJDMFMBCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GPDJDMFMBCN*>**)UnitySDK::FromName("", "GPDJDMFMBCN")->GetStaticField(0x23980);
		}

		// static const ::System::Object DEJOCOOAJHA; // 0x0
		// static const ::System::Object JABPNMLKBJG; // 0x0
		// static const ::System::Object ELKCFLDPMGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPDJDMFMBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPDJDMFMBCN*))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDJDMFMBCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GPDJDMFMBCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GPDJDMFMBCN*>*(*)())((::PBYTE)hIl2Cpp + GPDJDMFMBCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPDJDMFMBCN* Clone()
		{
			return ((::GPDJDMFMBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_CLONE_OFFSET))(this);
		}

		::System::Boolean FDONCDDCJMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_FDONCDDCJMO_OFFSET))(this);
		}

		::System::Void AIJEFNDMBED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_AIJEFNDMBED_OFFSET))(this, a1);
		}

		::System::UInt32 JMKBAJDDNLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_JMKBAJDDNLI_OFFSET))(this);
		}

		::System::Void NBIGJGFGBMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_NBIGJGFGBMA_OFFSET))(this, a1);
		}

		::System::UInt32 EFHDDIHBOIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_EFHDDIHBOIL_OFFSET))(this);
		}

		::System::Void LBAMPMBIGBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_LBAMPMBIGBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPDJDMFMBCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPDJDMFMBCN*))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPDJDMFMBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPDJDMFMBCN*))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPDJDMFMBCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
