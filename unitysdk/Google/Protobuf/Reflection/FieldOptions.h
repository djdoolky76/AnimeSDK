#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldOptions_Types_CType.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldOptions_Types_JSType.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class ExtensionSet_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class FieldOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class Object; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BED3DD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED4290)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1BECFC20)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BED2FA0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BED2470)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BED33F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BED3390)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BED0B80)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_CTYPE_OFFSET UNITYSDK_OFFSET(0x1BED3090)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BED3290)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BED2D60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASCTYPE_OFFSET UNITYSDK_OFFSET(0x1BED3100)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BED3300)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASJSTYPE_OFFSET UNITYSDK_OFFSET(0x1BED3200)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASLAZY_OFFSET UNITYSDK_OFFSET(0x1BED3280)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASPACKED_OFFSET UNITYSDK_OFFSET(0x1BED3180)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASWEAK_OFFSET UNITYSDK_OFFSET(0x1BED3380)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_JSTYPE_OFFSET UNITYSDK_OFFSET(0x1BED3190)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_LAZY_OFFSET UNITYSDK_OFFSET(0x1BED3210)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x1BED3110)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BED2D00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_WEAK_OFFSET UNITYSDK_OFFSET(0x1BED3310)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BED40A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BED24C0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BED2F40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_CTYPE_OFFSET UNITYSDK_OFFSET(0x1BED30F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1BED32F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_JSTYPE_OFFSET UNITYSDK_OFFSET(0x1BED31F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_LAZY_OFFSET UNITYSDK_OFFSET(0x1BED3270)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_PACKED_OFFSET UNITYSDK_OFFSET(0x1BED3170)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_WEAK_OFFSET UNITYSDK_OFFSET(0x1BED3370)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BED3810)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BED3870)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldOptions_TypeDefinitionIndex = 5499;

	class FieldOptions : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::FieldOptions*>* _extensions; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x20
		::Google::Protobuf::Reflection::FieldOptions_Types_JSType jstype_; // 0x28
		::System::Int32 _hasBits0; // 0x2C
		::Google::Protobuf::Reflection::FieldOptions_Types_CType ctype_; // 0x30
		::System::Boolean deprecated_; // 0x34
		::System::Boolean lazy_; // 0x35
		::System::Boolean packed_; // 0x36
		::System::Boolean weak_; // 0x37
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x20D60);
		}

		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x20D68);
		}

		static ::Google::Protobuf::Reflection::FieldOptions_Types_CType* StaticGet_CtypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldOptions_Types_CType*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x76E0);
		}

		static ::Google::Protobuf::Reflection::FieldOptions_Types_JSType* StaticGet_JstypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldOptions_Types_JSType*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x76E4);
		}

		static ::System::Boolean* StaticGet_WeakDefaultValue()
		{
			return (::System::Boolean*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x76E8);
		}

		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x76E9);
		}

		static ::System::Boolean* StaticGet_PackedDefaultValue()
		{
			return (::System::Boolean*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x76EA);
		}

		static ::System::Boolean* StaticGet_LazyDefaultValue()
		{
			return (::System::Boolean*)UnitySDK::FromName("Google.Protobuf.Reflection", "FieldOptions")->GetStaticField(0x76EB);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FieldOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions_Types_CType get_Ctype()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions_Types_CType(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_CTYPE_OFFSET))(this);
		}

		::System::Void set_Ctype(::Google::Protobuf::Reflection::FieldOptions_Types_CType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions_Types_CType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_CTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCtype()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASCTYPE_OFFSET))(this);
		}

		::System::Boolean get_Packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PACKED_OFFSET))(this);
		}

		::System::Void set_Packed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_PACKED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPacked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASPACKED_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions_Types_JSType get_Jstype()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions_Types_JSType(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_JSTYPE_OFFSET))(this);
		}

		::System::Void set_Jstype(::Google::Protobuf::Reflection::FieldOptions_Types_JSType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions_Types_JSType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_JSTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasJstype()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASJSTYPE_OFFSET))(this);
		}

		::System::Boolean get_Lazy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_LAZY_OFFSET))(this);
		}

		::System::Void set_Lazy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_LAZY_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLazy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASLAZY_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean get_Weak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_WEAK_OFFSET))(this);
		}

		::System::Void set_Weak(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_WEAK_OFFSET))(this, a1);
		}

		::System::Boolean get_HasWeak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASWEAK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FieldOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FieldOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
