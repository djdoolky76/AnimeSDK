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

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA03570)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA04A70)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA01BF0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA01AF0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA01AE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA01F40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA01EE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA02440)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1CA01D90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA018A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x1CA01300)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1CA012F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASEXTENDEE_OFFSET UNITYSDK_OFFSET(0x1C9EE520)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASJSONNAME_OFFSET UNITYSDK_OFFSET(0x1CA01EB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASLABEL_OFFSET UNITYSDK_OFFSET(0x1CA01CD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1CA01C90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASNUMBER_OFFSET UNITYSDK_OFFSET(0x1CA01CB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1CA00F00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1CA01B90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPENAME_OFFSET UNITYSDK_OFFSET(0x1CA01260)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_HASTYPE_OFFSET UNITYSDK_OFFSET(0x1CA012E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1CA00FE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1CA01060)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA00DC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1CA010D0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1CA00F10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1CA01EC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1CA01840)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CA01270)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CA00E30)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA04770)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA03D90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA01A80)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1CA01E00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_EXTENDEE_OFFSET UNITYSDK_OFFSET(0x1CA01D40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1CA01E60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x1CA01CC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA01C40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1CA01CA0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1CA01E50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1CA01ED0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CA01CF0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CA01CE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA02DD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA02E30)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto_TypeDefinitionIndex = 5475;

	class FieldDescriptorProto : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::FieldOptions* options_; // 0x10
		::System::String* jsonName_; // 0x18
		::System::String* extendee_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
		::System::String* typeName_; // 0x30
		::System::String* defaultValue_; // 0x38
		::System::String* name_; // 0x40
		::System::Int32 number_; // 0x48
		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type type_; // 0x4C
		::System::Int32 _hasBits0; // 0x50
		::System::Int32 oneofIndex_; // 0x54
		::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label label_; // 0x58
		static ::System::String** StaticGet_JsonNameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x1CE00);
		}

		static ::System::String** StaticGet_TypeNameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x1CE08);
		}

		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x1CE10);
		}

		static ::System::String** StaticGet_ExtendeeDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x1CE18);
		}

		static ::System::String** StaticGet_DefaultValueDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x1CE20);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x1CE28);
		}

		static ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type* StaticGet_TypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x5E60);
		}

		static ::System::Int32* StaticGet_NumberDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x5E64);
		}

		static ::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label* StaticGet_LabelDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Label*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x5E68);
		}

		static ::System::Int32* StaticGet_OneofIndexDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldDescriptorProto")->GetStaticField(0x5E6C);
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
