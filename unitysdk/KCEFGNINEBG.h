#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEFGNINEBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCEFGNINEBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F48A0)
#define KCEFGNINEBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4940)
#define KCEFGNINEBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F4590)
#define KCEFGNINEBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F4560)
#define KCEFGNINEBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4550)
#define KCEFGNINEBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F46A0)
#define KCEFGNINEBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F45D0)
#define KCEFGNINEBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F4800)
#define KCEFGNINEBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F4510)
#define KCEFGNINEBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F48F0)
#define KCEFGNINEBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F48C0)
#define KCEFGNINEBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4540)
#define KCEFGNINEBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F4830)
#define KCEFGNINEBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F4890)

inline static constexpr unsigned int KCEFGNINEBG_TypeDefinitionIndex = 33454;

	class KCEFGNINEBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KCEFGNINEBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCEFGNINEBG*>**)UnitySDK::FromName("", "KCEFGNINEBG")->GetStaticField(0xF970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCEFGNINEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCEFGNINEBG*))((::PBYTE)hIl2Cpp + KCEFGNINEBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCEFGNINEBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCEFGNINEBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCEFGNINEBG*>*(*)())((::PBYTE)hIl2Cpp + KCEFGNINEBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCEFGNINEBG* Clone()
		{
			return ((::KCEFGNINEBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEFGNINEBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCEFGNINEBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCEFGNINEBG*))((::PBYTE)hIl2Cpp + KCEFGNINEBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCEFGNINEBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCEFGNINEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCEFGNINEBG*))((::PBYTE)hIl2Cpp + KCEFGNINEBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCEFGNINEBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
