#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHHLBGLNBHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHHLBGLNBHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0D7B0)
#define PHHLBGLNBHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0DA10)
#define PHHLBGLNBHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0D3B0)
#define PHHLBGLNBHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0D320)
#define PHHLBGLNBHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0D2D0)
#define PHHLBGLNBHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0D4E0)
#define PHHLBGLNBHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0D3F0)
#define PHHLBGLNBHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0D5D0)
#define PHHLBGLNBHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF0D290)
#define PHHLBGLNBHE_JNPLBLHMIPP_OFFSET UNITYSDK_OFFSET(0x1DF0D3E0)
#define PHHLBGLNBHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0D870)
#define PHHLBGLNBHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0D820)
#define PHHLBGLNBHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0D2C0)
#define PHHLBGLNBHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0D6D0)
#define PHHLBGLNBHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0D730)

inline static constexpr unsigned int PHHLBGLNBHE_TypeDefinitionIndex = 33651;

	class PHHLBGLNBHE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCCLPMCMKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PHHLBGLNBHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHHLBGLNBHE*>**)UnitySDK::FromName("", "PHHLBGLNBHE")->GetStaticField(0x339E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LIFAFKEPHIB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PHHLBGLNBHE")->GetStaticField(0x339E8);
		}

		// static const ::System::Object PBEGNMKHBOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHHLBGLNBHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHHLBGLNBHE*))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHHLBGLNBHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHHLBGLNBHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHHLBGLNBHE*>*(*)())((::PBYTE)hIl2Cpp + PHHLBGLNBHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHHLBGLNBHE* Clone()
		{
			return ((::PHHLBGLNBHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNPLBLHMIPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_JNPLBLHMIPP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHHLBGLNBHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHHLBGLNBHE*))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHHLBGLNBHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHHLBGLNBHE*))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHHLBGLNBHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
