#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumOptions; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9F8990)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9F9240)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9F7FF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9F7E60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7DC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9F8130)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9F80D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9F83C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7B80)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1C9F8090)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9F7F90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9F76F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9F80B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C9F7B20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C9F80A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9F8FF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9F8BA0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7D60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9F8040)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9F80C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9F86D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9F8730)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_TypeDefinitionIndex = 5482;

	class EnumDescriptorProto : public ::System::Object
	{
	public:
		::System::String* name_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>* value_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* reservedName_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::System::Object*>* reservedRange_; // 0x30
		::Google::Protobuf::Reflection::EnumOptions* options_; // 0x38
		static ::Google::Protobuf::FieldCodec_1<::System::Object*>** StaticGet__repeated_reservedRange_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Object*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumDescriptorProto")->GetStaticField(0x1BB60);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumDescriptorProto")->GetStaticField(0x1BB68);
		}

		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumDescriptorProto")->GetStaticField(0x1BB70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_reservedName_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumDescriptorProto")->GetStaticField(0x1BB78);
		}

		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>** StaticGet__repeated_value_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumDescriptorProto")->GetStaticField(0x1BB80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>* get_Value()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_VALUE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::EnumOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
