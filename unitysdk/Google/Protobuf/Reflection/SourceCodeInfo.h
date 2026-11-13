#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class SourceCodeInfo; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F394AC0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F394E80)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F394640)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3944C0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F394470)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F394820)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3946A0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F394940)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F394230)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1F394690)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F3941D0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F394CC0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F394B60)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F394410)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3949B0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F394A10)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_TypeDefinitionIndex = 5521;

	class SourceCodeInfo : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::Object*>* location_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "SourceCodeInfo")->GetStaticField(0x22230);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Object*>** StaticGet__repeated_location_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Object*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "SourceCodeInfo")->GetStaticField(0x22238);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo* Clone()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::Object*>* get_Location()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_LOCATION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::SourceCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
