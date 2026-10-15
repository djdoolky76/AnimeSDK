#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class ListValue; }
namespace Google::Protobuf::WellKnownTypes { class Value; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B8AEB00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8AEEC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x1B8AE690)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8AE510)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AE4C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B8AE860)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B8AE6E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B8AE980)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B8AE280)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B8AE220)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B8AED00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B8AEBA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B8AE460)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B8AE9F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B8AEA50)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue_TypeDefinitionIndex = 5436;

	class ListValue : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Value*>* values_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_values_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "ListValue")->GetStaticField(0x1A840);
		}

		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "ListValue")->GetStaticField(0x1A848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
