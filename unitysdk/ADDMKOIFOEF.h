#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADDMKOIFOEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ADDMKOIFOEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDE0F30)
#define ADDMKOIFOEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE0FD0)
#define ADDMKOIFOEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDE0C20)
#define ADDMKOIFOEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE0BF0)
#define ADDMKOIFOEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE0BE0)
#define ADDMKOIFOEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDE0D30)
#define ADDMKOIFOEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE0C60)
#define ADDMKOIFOEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE0E90)
#define ADDMKOIFOEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDE0BA0)
#define ADDMKOIFOEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDE0F80)
#define ADDMKOIFOEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDE0F50)
#define ADDMKOIFOEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDE0BD0)
#define ADDMKOIFOEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDE0EC0)
#define ADDMKOIFOEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDE0F20)

inline static constexpr unsigned int ADDMKOIFOEF_TypeDefinitionIndex = 30698;

	class ADDMKOIFOEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ADDMKOIFOEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ADDMKOIFOEF*>**)UnitySDK::FromName("", "ADDMKOIFOEF")->GetStaticField(0x2B7E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ADDMKOIFOEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADDMKOIFOEF*))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADDMKOIFOEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ADDMKOIFOEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ADDMKOIFOEF*>*(*)())((::PBYTE)hIl2Cpp + ADDMKOIFOEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ADDMKOIFOEF* Clone()
		{
			return ((::ADDMKOIFOEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ADDMKOIFOEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ADDMKOIFOEF*))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ADDMKOIFOEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADDMKOIFOEF*))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ADDMKOIFOEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
