#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageOptions; }
namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6A8770)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6A8960)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1C68E8C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6A8220)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1C68FA00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6A8390)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6A8330)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C68EF00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C6A8300)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6A7FE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MAPENTRY_OFFSET UNITYSDK_OFFSET(0x1C699A30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x1C699EB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x1C6A82E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C694EB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6A8840)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6A81C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C6A8310)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MAPENTRY_OFFSET UNITYSDK_OFFSET(0x1C6A8320)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x1C6A82D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x1C6A82F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6A8450)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6A84B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageOptions_TypeDefinitionIndex = 36716;

	class MessageOptions : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::System::Boolean messageSetWireFormat_; // 0x18
		::System::Boolean noStandardDescriptorAccessor_; // 0x19
		::System::Boolean deprecated_; // 0x1A
		::System::Boolean mapEntry_; // 0x1B
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "MessageOptions")->GetStaticField(0x672E0);
		}

		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "MessageOptions")->GetStaticField(0x672E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_MessageSetWireFormat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MESSAGESETWIREFORMAT_OFFSET))(this);
		}

		::System::Void set_MessageSetWireFormat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MESSAGESETWIREFORMAT_OFFSET))(this, a1);
		}

		::System::Boolean get_NoStandardDescriptorAccessor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this);
		}

		::System::Void set_NoStandardDescriptorAccessor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this, a1);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean get_MapEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MAPENTRY_OFFSET))(this);
		}

		::System::Void set_MapEntry(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MAPENTRY_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

	};
}
