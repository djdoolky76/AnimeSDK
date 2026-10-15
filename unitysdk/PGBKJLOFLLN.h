#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGBKJLOFLLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGBKJLOFLLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2CAF0)
#define PGBKJLOFLLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2CD10)
#define PGBKJLOFLLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2C740)
#define PGBKJLOFLLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2C710)
#define PGBKJLOFLLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C700)
#define PGBKJLOFLLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2C870)
#define PGBKJLOFLLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2C7A0)
#define PGBKJLOFLLN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF2C790)
#define PGBKJLOFLLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2C9E0)
#define PGBKJLOFLLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2C6C0)
#define PGBKJLOFLLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2CBB0)
#define PGBKJLOFLLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2CB80)
#define PGBKJLOFLLN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF2C780)
#define PGBKJLOFLLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C6F0)
#define PGBKJLOFLLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2CA10)
#define PGBKJLOFLLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2CA70)

	class PGBKJLOFLLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGBKJLOFLLN")->GetStaticField(0x3CC00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGBKJLOFLLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGBKJLOFLLN*))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGBKJLOFLLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGBKJLOFLLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGBKJLOFLLN* Clone()
		{
			return ((::PGBKJLOFLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGBKJLOFLLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGBKJLOFLLN*))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGBKJLOFLLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGBKJLOFLLN*))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGBKJLOFLLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
