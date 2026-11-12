#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class GeneratedCodeInfo; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA140C0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA143C0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA13C50)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA13BA0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13B50)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA13E20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA13CA0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA13F40)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA13910)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1CA138B0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA14200)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA14160)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA13AF0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA13FB0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA14010)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_TypeDefinitionIndex = 5526;

	class GeneratedCodeInfo : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::Object*>* annotation_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::Object*>** StaticGet__repeated_annotation_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Object*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "GeneratedCodeInfo")->GetStaticField(0x1E5C0);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "GeneratedCodeInfo")->GetStaticField(0x1E5C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::GeneratedCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::GeneratedCodeInfo* Clone()
		{
			return ((::Google::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::GeneratedCodeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::GeneratedCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
