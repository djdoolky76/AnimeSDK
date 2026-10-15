#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPLJJNHCJIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPLJJNHCJIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E9990)
#define EPLJJNHCJIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9A30)
#define EPLJJNHCJIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E9630)
#define EPLJJNHCJIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E9600)
#define EPLJJNHCJIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E95F0)
#define EPLJJNHCJIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E9790)
#define EPLJJNHCJIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E96A0)
#define EPLJJNHCJIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E98F0)
#define EPLJJNHCJIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E9580)
#define EPLJJNHCJIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E99E0)
#define EPLJJNHCJIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E99B0)
#define EPLJJNHCJIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E95E0)
#define EPLJJNHCJIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E9920)
#define EPLJJNHCJIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E9980)

inline static constexpr unsigned int EPLJJNHCJIF_TypeDefinitionIndex = 29505;

	class EPLJJNHCJIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EPLJJNHCJIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPLJJNHCJIF*>**)UnitySDK::FromName("", "EPLJJNHCJIF")->GetStaticField(0x4A660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPLJJNHCJIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPLJJNHCJIF*))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPLJJNHCJIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPLJJNHCJIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPLJJNHCJIF*>*(*)())((::PBYTE)hIl2Cpp + EPLJJNHCJIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPLJJNHCJIF* Clone()
		{
			return ((::EPLJJNHCJIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPLJJNHCJIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPLJJNHCJIF*))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPLJJNHCJIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPLJJNHCJIF*))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPLJJNHCJIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
