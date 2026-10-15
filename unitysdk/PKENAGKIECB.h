#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKENAGKIECB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKENAGKIECB_AAEJFKMMOCA_OFFSET UNITYSDK_OFFSET(0x1DF88D60)
#define PKENAGKIECB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF890C0)
#define PKENAGKIECB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF893E0)
#define PKENAGKIECB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF88D00)
#define PKENAGKIECB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF88CC0)
#define PKENAGKIECB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF88CB0)
#define PKENAGKIECB_EIMIAKEOIOK_OFFSET UNITYSDK_OFFSET(0x1DF88D70)
#define PKENAGKIECB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF88E70)
#define PKENAGKIECB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF88D90)
#define PKENAGKIECB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF88F40)
#define PKENAGKIECB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF88C70)
#define PKENAGKIECB_KCNPGKAGHCN_OFFSET UNITYSDK_OFFSET(0x1DF88D50)
#define PKENAGKIECB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF89260)
#define PKENAGKIECB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF89220)
#define PKENAGKIECB_MIKJPMGGJBC_OFFSET UNITYSDK_OFFSET(0x1DF88D80)
#define PKENAGKIECB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF88CA0)
#define PKENAGKIECB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF88F80)
#define PKENAGKIECB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF88FE0)

inline static constexpr unsigned int PKENAGKIECB_TypeDefinitionIndex = 27879;

	class PKENAGKIECB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEJMLAINDAL; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 KMEFIFEHFIB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKENAGKIECB")->GetStaticField(0x10D60);
		}

		// static const ::System::Object PKDGMBAIGBE; // 0x0
		// static const ::System::Object ODLCHHKGJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKENAGKIECB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKENAGKIECB*))((::PBYTE)hIl2Cpp + PKENAGKIECB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKENAGKIECB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKENAGKIECB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKENAGKIECB* Clone()
		{
			return ((::PKENAGKIECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_CLONE_OFFSET))(this);
		}

		::System::Int64 KCNPGKAGHCN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_KCNPGKAGHCN_OFFSET))(this);
		}

		::System::Void AAEJFKMMOCA(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PKENAGKIECB_AAEJFKMMOCA_OFFSET))(this, a1);
		}

		::System::UInt32 EIMIAKEOIOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_EIMIAKEOIOK_OFFSET))(this);
		}

		::System::Void MIKJPMGGJBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKENAGKIECB_MIKJPMGGJBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKENAGKIECB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKENAGKIECB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKENAGKIECB*))((::PBYTE)hIl2Cpp + PKENAGKIECB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKENAGKIECB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKENAGKIECB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKENAGKIECB*))((::PBYTE)hIl2Cpp + PKENAGKIECB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKENAGKIECB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
