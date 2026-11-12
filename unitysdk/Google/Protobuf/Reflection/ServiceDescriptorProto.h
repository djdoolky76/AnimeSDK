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
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace Google::Protobuf::Reflection { class ServiceOptions; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA23450)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA23D70)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA22BA0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA22960)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA22910)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA22CE0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA22C80)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA22FB0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA226D0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1CA22C40)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1CA22B40)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1CA22C50)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA22020)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1CA22C60)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1CA22670)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA23A70)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA235D0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA228B0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA22BF0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1CA22C70)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA23220)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA23280)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto_TypeDefinitionIndex = 5489;

	class ServiceDescriptorProto : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>* method_; // 0x10
		::Google::Protobuf::Reflection::ServiceOptions* options_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::String* name_; // 0x28
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)UnitySDK::FromName("Google.Protobuf.Reflection", "ServiceDescriptorProto")->GetStaticField(0x1E850);
		}

		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__repeated_method_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "ServiceDescriptorProto")->GetStaticField(0x1E858);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "ServiceDescriptorProto")->GetStaticField(0x1E860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::ServiceDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>* get_Method()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_METHOD_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::ServiceOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::ServiceDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::ServiceDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
