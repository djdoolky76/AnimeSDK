#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMGDLJAJCM;
class OKFKPPNGCOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJMGDLJAJCM_BAPCFHFCCLI_OFFSET UNITYSDK_OFFSET(0x205C4E80)
#define MJMGDLJAJCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205C52B0)
#define MJMGDLJAJCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x205C55B0)
#define MJMGDLJAJCM_CLONE_OFFSET UNITYSDK_OFFSET(0x205C4E30)
#define MJMGDLJAJCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205C4D80)
#define MJMGDLJAJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x205C4D30)
#define MJMGDLJAJCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205C5010)
#define MJMGDLJAJCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x205C4E90)
#define MJMGDLJAJCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205C5130)
#define MJMGDLJAJCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205C4CC0)
#define MJMGDLJAJCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205C53F0)
#define MJMGDLJAJCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205C5350)
#define MJMGDLJAJCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205C4D20)
#define MJMGDLJAJCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205C51A0)
#define MJMGDLJAJCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x205C5200)

inline static constexpr unsigned int MJMGDLJAJCM_TypeDefinitionIndex = 29637;

	class MJMGDLJAJCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OKFKPPNGCOD*>* KIPCOCNFOPC; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::OKFKPPNGCOD*>** StaticGet_LAHAPCNNBBG()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKFKPPNGCOD*>**)UnitySDK::FromName("", "MJMGDLJAJCM")->GetStaticField(0x4D560);
		}

		static ::Google::Protobuf::MessageParser_1<::MJMGDLJAJCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJMGDLJAJCM*>**)UnitySDK::FromName("", "MJMGDLJAJCM")->GetStaticField(0x4D568);
		}

		// static const ::System::Object HCHIEHGHBEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJMGDLJAJCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMGDLJAJCM*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJMGDLJAJCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJMGDLJAJCM*>*(*)())((::PBYTE)hIl2Cpp + MJMGDLJAJCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJMGDLJAJCM* Clone()
		{
			return ((::MJMGDLJAJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKFKPPNGCOD*>* BAPCFHFCCLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKFKPPNGCOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_BAPCFHFCCLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJMGDLJAJCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJMGDLJAJCM*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJMGDLJAJCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMGDLJAJCM*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
