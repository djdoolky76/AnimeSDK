#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEE3700)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE3DC0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEE2AF0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEE29F0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE2950)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEE2D70)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEE2D10)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEE30E0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1BEE2C10)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEE2780)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_END_OFFSET UNITYSDK_OFFSET(0x1BEE2C90)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASBEGIN_OFFSET UNITYSDK_OFFSET(0x1BEE2C80)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x1BEE2D00)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASSOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1BEE2C00)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BEE2720)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_SOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1BEE2B40)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEE3C70)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEE3AB0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEE28F0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1BEE2C70)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_END_OFFSET UNITYSDK_OFFSET(0x1BEE2CF0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_SOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1BEE2BB0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEE33B0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEE3410)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex = 5528;

	class GeneratedCodeInfo_Types_Annotation : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* path_; // 0x18
		::System::String* sourceFile_; // 0x20
		::System::Int32 begin_; // 0x28
		::System::Int32 end_; // 0x2C
		::System::Int32 _hasBits0; // 0x30
		static ::Google::Protobuf::MessageParser_1<::System::Object*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::System::Object*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "Annotation")->GetStaticField(0x21E00);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_path_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Int32>**)UnitySDK::FromName("Google.Protobuf.Reflection", "Annotation")->GetStaticField(0x21E08);
		}

		static ::System::String** StaticGet_SourceFileDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "Annotation")->GetStaticField(0x21E10);
		}

		static ::System::Int32* StaticGet_BeginDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "Annotation")->GetStaticField(0x7AC0);
		}

		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "Annotation")->GetStaticField(0x7AC4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::System::Object*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* Clone()
		{
			return ((::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CLONE_OFFSET))(this);
		}

		::System::String* get_SourceFile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_SOURCEFILE_OFFSET))(this);
		}

		::System::Void set_SourceFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_SOURCEFILE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSourceFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASSOURCEFILE_OFFSET))(this);
		}

		::System::Int32 get_Begin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_BEGIN_OFFSET))(this);
		}

		::System::Void set_Begin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_BEGIN_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASBEGIN_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_END_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
