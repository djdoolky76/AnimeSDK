#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAJHFEKAPMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAJHFEKAPMN_AFEAMKJDDLJ_OFFSET UNITYSDK_OFFSET(0x1DEEF420)
#define PAJHFEKAPMN_AOPIDBNIOMF_OFFSET UNITYSDK_OFFSET(0x1DEEF410)
#define PAJHFEKAPMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEEF780)
#define PAJHFEKAPMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF9A0)
#define PAJHFEKAPMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEF3D0)
#define PAJHFEKAPMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEF3A0)
#define PAJHFEKAPMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF390)
#define PAJHFEKAPMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEF500)
#define PAJHFEKAPMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEF430)
#define PAJHFEKAPMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEEF670)
#define PAJHFEKAPMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEEF350)
#define PAJHFEKAPMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEEF840)
#define PAJHFEKAPMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEEF810)
#define PAJHFEKAPMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF380)
#define PAJHFEKAPMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEEF6A0)
#define PAJHFEKAPMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEEF700)

inline static constexpr unsigned int PAJHFEKAPMN_TypeDefinitionIndex = 29562;

	class PAJHFEKAPMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JFGFDGJKCFP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PAJHFEKAPMN")->GetStaticField(0x32020);
		}

		// static const ::System::Object DMCEDFLFKCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAJHFEKAPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAJHFEKAPMN*))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAJHFEKAPMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PAJHFEKAPMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAJHFEKAPMN* Clone()
		{
			return ((::PAJHFEKAPMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 AOPIDBNIOMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_AOPIDBNIOMF_OFFSET))(this);
		}

		::System::Void AFEAMKJDDLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_AFEAMKJDDLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAJHFEKAPMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAJHFEKAPMN*))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAJHFEKAPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAJHFEKAPMN*))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAJHFEKAPMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
