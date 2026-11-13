#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDEDMOPFKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIDEDMOPFKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBC7EA0)
#define GIDEDMOPFKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBC80C0)
#define GIDEDMOPFKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBC7A90)
#define GIDEDMOPFKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBC7A60)
#define GIDEDMOPFKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC7A50)
#define GIDEDMOPFKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBC7C20)
#define GIDEDMOPFKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBC7B20)
#define GIDEDMOPFKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBC7D90)
#define GIDEDMOPFKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBC79E0)
#define GIDEDMOPFKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBC7F60)
#define GIDEDMOPFKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBC7F30)
#define GIDEDMOPFKF_NCOKKJBNOHA_OFFSET UNITYSDK_OFFSET(0x1FBC7B10)
#define GIDEDMOPFKF_PBDCPINNEHB_OFFSET UNITYSDK_OFFSET(0x1FBC7B00)
#define GIDEDMOPFKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBC7A40)
#define GIDEDMOPFKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBC7DC0)
#define GIDEDMOPFKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBC7E20)

inline static constexpr unsigned int GIDEDMOPFKF_TypeDefinitionIndex = 29853;

	class GIDEDMOPFKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFKCJLGPJIF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GIDEDMOPFKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIDEDMOPFKF*>**)UnitySDK::FromName("", "GIDEDMOPFKF")->GetStaticField(0x106D0);
		}

		// static const ::System::Object OAAJLFDLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIDEDMOPFKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDEDMOPFKF*))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIDEDMOPFKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIDEDMOPFKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIDEDMOPFKF*>*(*)())((::PBYTE)hIl2Cpp + GIDEDMOPFKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIDEDMOPFKF* Clone()
		{
			return ((::GIDEDMOPFKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PBDCPINNEHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_PBDCPINNEHB_OFFSET))(this);
		}

		::System::Void NCOKKJBNOHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_NCOKKJBNOHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIDEDMOPFKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIDEDMOPFKF*))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIDEDMOPFKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDEDMOPFKF*))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIDEDMOPFKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
