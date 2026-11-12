#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHOHCEGIHGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHOHCEGIHGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB67DC0)
#define KHOHCEGIHGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB67FE0)
#define KHOHCEGIHGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB67A10)
#define KHOHCEGIHGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB679E0)
#define KHOHCEGIHGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB679D0)
#define KHOHCEGIHGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB67B40)
#define KHOHCEGIHGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB67A70)
#define KHOHCEGIHGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB67CB0)
#define KHOHCEGIHGF_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1FB67A50)
#define KHOHCEGIHGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB67990)
#define KHOHCEGIHGF_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1FB67A60)
#define KHOHCEGIHGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB67E80)
#define KHOHCEGIHGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB67E50)
#define KHOHCEGIHGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB679C0)
#define KHOHCEGIHGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB67CE0)
#define KHOHCEGIHGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB67D40)

inline static constexpr unsigned int KHOHCEGIHGF_TypeDefinitionIndex = 31849;

	class KHOHCEGIHGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLFEKHCLHCE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHOHCEGIHGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHOHCEGIHGF*>**)UnitySDK::FromName("", "KHOHCEGIHGF")->GetStaticField(0x11EF0);
		}

		// static const ::System::Object CPHNGFPDBPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHOHCEGIHGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOHCEGIHGF*))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOHCEGIHGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHOHCEGIHGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHOHCEGIHGF*>*(*)())((::PBYTE)hIl2Cpp + KHOHCEGIHGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHOHCEGIHGF* Clone()
		{
			return ((::KHOHCEGIHGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHOHCEGIHGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHOHCEGIHGF*))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHOHCEGIHGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOHCEGIHGF*))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHOHCEGIHGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
