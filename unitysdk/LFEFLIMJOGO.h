#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFEFLIMJOGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFEFLIMJOGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93BA10)
#define LFEFLIMJOGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93BAB0)
#define LFEFLIMJOGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93B700)
#define LFEFLIMJOGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93B6D0)
#define LFEFLIMJOGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93B6C0)
#define LFEFLIMJOGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93B810)
#define LFEFLIMJOGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93B740)
#define LFEFLIMJOGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93B970)
#define LFEFLIMJOGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93B680)
#define LFEFLIMJOGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93BA60)
#define LFEFLIMJOGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93BA30)
#define LFEFLIMJOGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93B6B0)
#define LFEFLIMJOGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93B9A0)
#define LFEFLIMJOGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93BA00)

inline static constexpr unsigned int LFEFLIMJOGO_TypeDefinitionIndex = 29442;

	class LFEFLIMJOGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LFEFLIMJOGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFEFLIMJOGO*>**)UnitySDK::FromName("", "LFEFLIMJOGO")->GetStaticField(0x3A890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFEFLIMJOGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFEFLIMJOGO*))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFEFLIMJOGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFEFLIMJOGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFEFLIMJOGO*>*(*)())((::PBYTE)hIl2Cpp + LFEFLIMJOGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFEFLIMJOGO* Clone()
		{
			return ((::LFEFLIMJOGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFEFLIMJOGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFEFLIMJOGO*))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFEFLIMJOGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFEFLIMJOGO*))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFEFLIMJOGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
