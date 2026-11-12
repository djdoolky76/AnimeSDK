#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIMDEJMFCO;
class LGEFLGJIGIJ;
class MGGBPKANFOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMIMDEJMFCO_AJLAGFDFFBC_OFFSET UNITYSDK_OFFSET(0x1F7E6030)
#define GMIMDEJMFCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7E6690)
#define GMIMDEJMFCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6A80)
#define GMIMDEJMFCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7E6000)
#define GMIMDEJMFCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7E5F30)
#define GMIMDEJMFCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5EF0)
#define GMIMDEJMFCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7E6250)
#define GMIMDEJMFCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7E6060)
#define GMIMDEJMFCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7E6420)
#define GMIMDEJMFCO_IDINJFFGDBL_OFFSET UNITYSDK_OFFSET(0x1F7E6040)
#define GMIMDEJMFCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7E5EB0)
#define GMIMDEJMFCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7E6880)
#define GMIMDEJMFCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7E6780)
#define GMIMDEJMFCO_NPAPHOJLOHJ_OFFSET UNITYSDK_OFFSET(0x1F7E6050)
#define GMIMDEJMFCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5EE0)
#define GMIMDEJMFCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7E6510)
#define GMIMDEJMFCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7E6570)

inline static constexpr unsigned int GMIMDEJMFCO_TypeDefinitionIndex = 34311;

	class GMIMDEJMFCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LGEFLGJIGIJ*>* AKPGBHIAFFI; // 0x18
		::MGGBPKANFOA* ECNDOJOLBIH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LGEFLGJIGIJ*>** StaticGet_JHBHPDMNJKB()
		{
			return (::Google::Protobuf::FieldCodec_1<::LGEFLGJIGIJ*>**)UnitySDK::FromName("", "GMIMDEJMFCO")->GetStaticField(0x18D00);
		}

		static ::Google::Protobuf::MessageParser_1<::GMIMDEJMFCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMIMDEJMFCO*>**)UnitySDK::FromName("", "GMIMDEJMFCO")->GetStaticField(0x18D08);
		}

		// static const ::System::Object EGJELLHDDKD; // 0x0
		// static const ::System::Object OOLDPOABLDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMIMDEJMFCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIMDEJMFCO*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIMDEJMFCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMIMDEJMFCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMIMDEJMFCO*>*(*)())((::PBYTE)hIl2Cpp + GMIMDEJMFCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMIMDEJMFCO* Clone()
		{
			return ((::GMIMDEJMFCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_CLONE_OFFSET))(this);
		}

		::MGGBPKANFOA* AJLAGFDFFBC()
		{
			return ((::MGGBPKANFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_AJLAGFDFFBC_OFFSET))(this);
		}

		::System::Void IDINJFFGDBL(::MGGBPKANFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGGBPKANFOA*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_IDINJFFGDBL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGEFLGJIGIJ*>* NPAPHOJLOHJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGEFLGJIGIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_NPAPHOJLOHJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMIMDEJMFCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMIMDEJMFCO*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMIMDEJMFCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIMDEJMFCO*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMIMDEJMFCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
