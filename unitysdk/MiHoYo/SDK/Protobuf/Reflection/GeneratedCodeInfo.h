#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { class FieldCodec; }
namespace MiHoYo::SDK::Protobuf { class MessageParser; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BC073D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC07620)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BC07120)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC07080)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC07030)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BC07220)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC07170)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC07290)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BC06DF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BBF6F70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BC07460)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BC06FD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BC072E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BC07340)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_TypeDefinitionIndex = 35815;

	class GeneratedCodeInfo : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Object*>* annotation_; // 0x10
		static ::MiHoYo::SDK::Protobuf::FieldCodec** StaticGet__repeated_annotation_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "GeneratedCodeInfo")->GetStaticField(0x50620);
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "GeneratedCodeInfo")->GetStaticField(0x50628);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET))(this, a1);
		}

	};
}
