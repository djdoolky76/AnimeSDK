#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldDescriptorProto_Types_Label.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldDescriptorProto_Types_Type.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class FieldOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BED15F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED2AF0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BECFC70)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BECFB70)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BECFB60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BECFFC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BECFF60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BED04C0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BECFE10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BECF920)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x1BECF380)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BECF370)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASEXTENDEE_OFFSET UNITYSDK_OFFSET(0x1BEBC5A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASJSONNAME_OFFSET UNITYSDK_OFFSET(0x1BECFF30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASLABEL_OFFSET UNITYSDK_OFFSET(0x1BECFD50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1BECFD10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNUMBER_OFFSET UNITYSDK_OFFSET(0x1BECFD30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1BECEF80)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BECFC10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPENAME_OFFSET UNITYSDK_OFFSET(0x1BECF2E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPE_OFFSET UNITYSDK_OFFSET(0x1BECF360)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1BECF060)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1BECF0E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BECEE40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1BECF150)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1BECEF90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1BECFF40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BECF8C0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1BECF2F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BECEEB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BED27F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BED1E10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BECFB00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BECFE80)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x1BECFDC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1BECFEE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x1BECFD40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BECFCC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1BECFD20)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1BECFED0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1BECFF50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1BECFD70)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BECFD60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BED0E50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BED0EB0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto_TypeDefinitionIndex = 5475;

	class FieldDescriptorProto : public ::System::Object
	{
	public:
		::System::String* jsonName_; // 0x10
		::System::String* typeName_; // 0x18
		::System::String* extendee_; // 0x20
		::Google::Protobuf::Reflection::FieldOptions* options_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::System::String* defaultValue_; // 0x38
		::System::String* name_; // 0x40
		::System::Int32 number_; // 0x48
		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label label_; // 0x4C
		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type type_; // 0x50
		::System::Int32 oneofIndex_; // 0x54
		::System::Int32 _hasBits0; // 0x58
		static ::System::String** StaticGet_DefaultValueDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x208D0);
		}

		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x208D8);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x208E0);
		}

		static ::System::String** StaticGet_ExtendeeDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x208E8);
		}

		static ::System::String** StaticGet_TypeNameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x208F0);
		}

		static ::System::String** StaticGet_JsonNameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x208F8);
		}

		static ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type* StaticGet_TypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x6FC0);
		}

		static ::System::Int32* StaticGet_OneofIndexDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x6FC4);
		}

		static ::System::Int32* StaticGet_NumberDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x6FC8);
		}

		static ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label* StaticGet_LabelDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x6FCC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FieldDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, a1);
		}

		::System::Boolean get_HasNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNUMBER_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label get_Label()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_Label(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_LABEL_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASLABEL_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type get_Type()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPE_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void set_TypeName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTypeName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPENAME_OFFSET))(this);
		}

		::System::String* get_Extendee()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET))(this);
		}

		::System::Void set_Extendee(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasExtendee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASEXTENDEE_OFFSET))(this);
		}

		::System::String* get_DefaultValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASDEFAULTVALUE_OFFSET))(this);
		}

		::System::Int32 get_OneofIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET))(this);
		}

		::System::Void set_OneofIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOneofIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASONEOFINDEX_OFFSET))(this);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET))(this);
		}

		::System::Void set_JsonName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJsonName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASJSONNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::FieldOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FieldDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FieldDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
