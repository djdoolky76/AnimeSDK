#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPAKHMFKML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBPAKHMFKML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F545470)
#define EBPAKHMFKML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F545510)
#define EBPAKHMFKML_CLONE_OFFSET UNITYSDK_OFFSET(0x1F545160)
#define EBPAKHMFKML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F545130)
#define EBPAKHMFKML_CTOR_OFFSET UNITYSDK_OFFSET(0x1F545120)
#define EBPAKHMFKML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F545270)
#define EBPAKHMFKML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5451A0)
#define EBPAKHMFKML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5453D0)
#define EBPAKHMFKML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5450E0)
#define EBPAKHMFKML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5454C0)
#define EBPAKHMFKML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F545490)
#define EBPAKHMFKML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F545110)
#define EBPAKHMFKML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F545400)
#define EBPAKHMFKML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F545460)

inline static constexpr unsigned int EBPAKHMFKML_TypeDefinitionIndex = 33718;

	class EBPAKHMFKML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EBPAKHMFKML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBPAKHMFKML*>**)UnitySDK::FromName("", "EBPAKHMFKML")->GetStaticField(0x4CDD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBPAKHMFKML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPAKHMFKML*))((::PBYTE)hIl2Cpp + EBPAKHMFKML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPAKHMFKML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBPAKHMFKML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBPAKHMFKML*>*(*)())((::PBYTE)hIl2Cpp + EBPAKHMFKML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBPAKHMFKML* Clone()
		{
			return ((::EBPAKHMFKML*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBPAKHMFKML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBPAKHMFKML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBPAKHMFKML*))((::PBYTE)hIl2Cpp + EBPAKHMFKML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBPAKHMFKML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBPAKHMFKML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPAKHMFKML*))((::PBYTE)hIl2Cpp + EBPAKHMFKML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBPAKHMFKML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
