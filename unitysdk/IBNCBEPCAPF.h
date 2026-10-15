#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBNCBEPCAPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBNCBEPCAPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61AFE0)
#define IBNCBEPCAPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61B080)
#define IBNCBEPCAPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61ACD0)
#define IBNCBEPCAPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61ACA0)
#define IBNCBEPCAPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61AC90)
#define IBNCBEPCAPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61ADE0)
#define IBNCBEPCAPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61AD10)
#define IBNCBEPCAPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61AF40)
#define IBNCBEPCAPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61AC50)
#define IBNCBEPCAPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61B030)
#define IBNCBEPCAPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61B000)
#define IBNCBEPCAPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61AC80)
#define IBNCBEPCAPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61AF70)
#define IBNCBEPCAPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61AFD0)

	class IBNCBEPCAPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IBNCBEPCAPF")->GetStaticField(0x421E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBNCBEPCAPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBNCBEPCAPF*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IBNCBEPCAPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBNCBEPCAPF* Clone()
		{
			return ((::IBNCBEPCAPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBNCBEPCAPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBNCBEPCAPF*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBNCBEPCAPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBNCBEPCAPF*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
