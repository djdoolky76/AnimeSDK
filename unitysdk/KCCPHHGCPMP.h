#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCCPHHGCPMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCCPHHGCPMP_BAEJPFCDJGL_OFFSET UNITYSDK_OFFSET(0x1E7F27C0)
#define KCCPHHGCPMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F2B60)
#define KCCPHHGCPMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2D80)
#define KCCPHHGCPMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F2750)
#define KCCPHHGCPMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F2720)
#define KCCPHHGCPMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2710)
#define KCCPHHGCPMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F28E0)
#define KCCPHHGCPMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F27E0)
#define KCCPHHGCPMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F2A50)
#define KCCPHHGCPMP_GMGJGBFLNPO_OFFSET UNITYSDK_OFFSET(0x1E7F27D0)
#define KCCPHHGCPMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F26A0)
#define KCCPHHGCPMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F2C20)
#define KCCPHHGCPMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F2BF0)
#define KCCPHHGCPMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2700)
#define KCCPHHGCPMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F2A80)
#define KCCPHHGCPMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F2AE0)

inline static constexpr unsigned int KCCPHHGCPMP_TypeDefinitionIndex = 29531;

	class KCCPHHGCPMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JAGHCNDDGFK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KCCPHHGCPMP")->GetStaticField(0xF5E0);
		}

		// static const ::System::Object BNOAAFKEGPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCCPHHGCPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCCPHHGCPMP*))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCCPHHGCPMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KCCPHHGCPMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCCPHHGCPMP* Clone()
		{
			return ((::KCCPHHGCPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_CLONE_OFFSET))(this);
		}

		::System::UInt32 BAEJPFCDJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_BAEJPFCDJGL_OFFSET))(this);
		}

		::System::Void GMGJGBFLNPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_GMGJGBFLNPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCCPHHGCPMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCCPHHGCPMP*))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCCPHHGCPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCCPHHGCPMP*))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCCPHHGCPMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
