#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPPBALGDGEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPPBALGDGEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E319890)
#define EPPBALGDGEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E319B70)
#define EPPBALGDGEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3194A0)
#define EPPBALGDGEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E319410)
#define EPPBALGDGEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3193D0)
#define EPPBALGDGEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E319620)
#define EPPBALGDGEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3194E0)
#define EPPBALGDGEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E319740)
#define EPPBALGDGEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E319390)
#define EPPBALGDGEF_LDJDEAAFBDO_OFFSET UNITYSDK_OFFSET(0x1E3194D0)
#define EPPBALGDGEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3199D0)
#define EPPBALGDGEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E319930)
#define EPPBALGDGEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3193C0)
#define EPPBALGDGEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3197B0)
#define EPPBALGDGEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E319810)

inline static constexpr unsigned int EPPBALGDGEF_TypeDefinitionIndex = 26186;

	class EPPBALGDGEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* IEIAMDNMEGE; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_MKCJBDAIGPG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EPPBALGDGEF")->GetStaticField(0x56E10);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPPBALGDGEF")->GetStaticField(0x56E18);
		}

		// static const ::System::Object LKIPIBILNOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPPBALGDGEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPPBALGDGEF*))((::PBYTE)hIl2Cpp + EPPBALGDGEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPPBALGDGEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPPBALGDGEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPPBALGDGEF* Clone()
		{
			return ((::EPPBALGDGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* LDJDEAAFBDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_LDJDEAAFBDO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPPBALGDGEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPPBALGDGEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPPBALGDGEF*))((::PBYTE)hIl2Cpp + EPPBALGDGEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPPBALGDGEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPPBALGDGEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPPBALGDGEF*))((::PBYTE)hIl2Cpp + EPPBALGDGEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPPBALGDGEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
