#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNKJBOKLHAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNKJBOKLHAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F076B30)
#define NNKJBOKLHAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F076BD0)
#define NNKJBOKLHAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F076820)
#define NNKJBOKLHAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0767F0)
#define NNKJBOKLHAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0767E0)
#define NNKJBOKLHAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F076930)
#define NNKJBOKLHAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F076860)
#define NNKJBOKLHAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F076A90)
#define NNKJBOKLHAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0767A0)
#define NNKJBOKLHAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F076B80)
#define NNKJBOKLHAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F076B50)
#define NNKJBOKLHAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0767D0)
#define NNKJBOKLHAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F076AC0)
#define NNKJBOKLHAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F076B20)

inline static constexpr unsigned int NNKJBOKLHAF_TypeDefinitionIndex = 32259;

	class NNKJBOKLHAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NNKJBOKLHAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNKJBOKLHAF*>**)UnitySDK::FromName("", "NNKJBOKLHAF")->GetStaticField(0x721C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNKJBOKLHAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNKJBOKLHAF*))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKJBOKLHAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNKJBOKLHAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNKJBOKLHAF*>*(*)())((::PBYTE)hIl2Cpp + NNKJBOKLHAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNKJBOKLHAF* Clone()
		{
			return ((::NNKJBOKLHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNKJBOKLHAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNKJBOKLHAF*))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNKJBOKLHAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNKJBOKLHAF*))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNKJBOKLHAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
