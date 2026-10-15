#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGBFGLJFLLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGBFGLJFLLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2C480)
#define PGBFGLJFLLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C520)
#define PGBFGLJFLLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2C170)
#define PGBFGLJFLLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2C140)
#define PGBFGLJFLLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C130)
#define PGBFGLJFLLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2C280)
#define PGBFGLJFLLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2C1B0)
#define PGBFGLJFLLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2C3E0)
#define PGBFGLJFLLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2C0F0)
#define PGBFGLJFLLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2C4D0)
#define PGBFGLJFLLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2C4A0)
#define PGBFGLJFLLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C120)
#define PGBFGLJFLLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2C410)
#define PGBFGLJFLLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2C470)

inline static constexpr unsigned int PGBFGLJFLLP_TypeDefinitionIndex = 27411;

	class PGBFGLJFLLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGBFGLJFLLP")->GetStaticField(0x3CB10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGBFGLJFLLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGBFGLJFLLP*))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGBFGLJFLLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGBFGLJFLLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGBFGLJFLLP* Clone()
		{
			return ((::PGBFGLJFLLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGBFGLJFLLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGBFGLJFLLP*))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGBFGLJFLLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGBFGLJFLLP*))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGBFGLJFLLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
