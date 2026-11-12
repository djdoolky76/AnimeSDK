#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumValueOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9FC540)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FCD70)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9FBB50)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9FBA60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FBA50)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9FBD20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9FBCC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9FC060)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9FB810)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1C9FBC70)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNUMBER_OFFSET UNITYSDK_OFFSET(0x1C9FBC90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9FBAF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9FB650)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1C9FB740)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9FBCA0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C9FB7B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9FCAB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9FC770)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9FB9F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9FBC20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1C9FBC80)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9FBCB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9FC2E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9FC340)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptorProto_TypeDefinitionIndex = 5487;

	class EnumValueDescriptorProto : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Reflection::EnumValueOptions* options_; // 0x18
		::System::String* name_; // 0x20
		::System::Int32 _hasBits0; // 0x28
		::System::Int32 number_; // 0x2C
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumValueDescriptorProto")->GetStaticField(0x1C420);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumValueDescriptorProto")->GetStaticField(0x1C428);
		}

		static ::System::Int32* StaticGet_NumberDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumValueDescriptorProto")->GetStaticField(0x5C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumValueDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, a1);
		}

		::System::Boolean get_HasNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASNUMBER_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::EnumValueOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumValueDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumValueDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
