#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto_Types_EnumReservedRange; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEC7F70)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC8450)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEC7890)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEC7850)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC7840)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEC7A70)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEC7A10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEC7C90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEC7670)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x1BEC7990)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x1BEC7A00)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET UNITYSDK_OFFSET(0x1BEC7980)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BEC7610)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x1BEC7910)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEC82D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEC81F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEC77E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x1BEC79F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x1BEC7970)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEC7D80)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEC7DE0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex = 5484;

	class EnumDescriptorProto_Types_EnumReservedRange : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 end_; // 0x18
		::System::Int32 start_; // 0x1C
		::System::Int32 _hasBits0; // 0x20
		static ::Google::Protobuf::MessageParser_1<::System::Object*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::System::Object*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumReservedRange")->GetStaticField(0x1FB90);
		}

		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumReservedRange")->GetStaticField(0x6B50);
		}

		static ::System::Int32* StaticGet_StartDefaultValue()
		{
			return (::System::Int32*)UnitySDK::FromName("Google.Protobuf.Reflection", "EnumReservedRange")->GetStaticField(0x6B54);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::System::Object*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET))(this, a1);
		}

		::System::Boolean get_HasStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
