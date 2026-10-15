#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NINEEGGAMBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NINEEGGAMBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB37CE0)
#define NINEEGGAMBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB37F00)
#define NINEEGGAMBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB37930)
#define NINEEGGAMBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB37900)
#define NINEEGGAMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB378F0)
#define NINEEGGAMBC_EMBPPNMPKAB_OFFSET UNITYSDK_OFFSET(0x1EB37980)
#define NINEEGGAMBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB37A60)
#define NINEEGGAMBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB37990)
#define NINEEGGAMBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB37BD0)
#define NINEEGGAMBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB378B0)
#define NINEEGGAMBC_KBDKDPLNPIM_OFFSET UNITYSDK_OFFSET(0x1EB37970)
#define NINEEGGAMBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB37DA0)
#define NINEEGGAMBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB37D70)
#define NINEEGGAMBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB378E0)
#define NINEEGGAMBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB37C00)
#define NINEEGGAMBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB37C60)

inline static constexpr unsigned int NINEEGGAMBC_TypeDefinitionIndex = 31978;

	class NINEEGGAMBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FCJCPAFKJCA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NINEEGGAMBC")->GetStaticField(0x64970);
		}

		// static const ::System::Object HAGOIANMDEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NINEEGGAMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINEEGGAMBC*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINEEGGAMBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NINEEGGAMBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NINEEGGAMBC* Clone()
		{
			return ((::NINEEGGAMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDKDPLNPIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_KBDKDPLNPIM_OFFSET))(this);
		}

		::System::Void EMBPPNMPKAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINEEGGAMBC_EMBPPNMPKAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NINEEGGAMBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NINEEGGAMBC*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NINEEGGAMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINEEGGAMBC*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
