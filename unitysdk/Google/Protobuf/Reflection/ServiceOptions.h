#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class ExtensionSet_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class ServiceOptions; }
namespace Google::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA249A0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA24C50)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA22B50)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA242D0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA23860)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA24560)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA24500)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA23130)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1CA24480)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA24090)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1CA244F0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1CA24030)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA24A50)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA238B0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA24270)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1CA244E0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA247E0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA24840)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceOptions_TypeDefinitionIndex = 5510;

	class ServiceOptions : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::ServiceOptions*>* _extensions; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x20
		::System::Boolean deprecated_; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _hasBits0; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "ServiceOptions")->GetStaticField(0x1E8C0);
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "ServiceOptions")->GetStaticField(0x1E8C8);
		}

		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)UnitySDK::FromName("Google.Protobuf.Reflection", "ServiceOptions")->GetStaticField(0x69F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::ServiceOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::ServiceOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::ServiceOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
