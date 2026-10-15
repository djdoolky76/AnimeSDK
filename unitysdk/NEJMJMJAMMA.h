#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJMJMJAMMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEJMJMJAMMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF7C30)
#define NEJMJMJAMMA_CCBEMOHMDJC_OFFSET UNITYSDK_OFFSET(0x1EAF7900)
#define NEJMJMJAMMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF7FC0)
#define NEJMJMJAMMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF7840)
#define NEJMJMJAMMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF7800)
#define NEJMJMJAMMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF77F0)
#define NEJMJMJAMMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF79A0)
#define NEJMJMJAMMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF7920)
#define NEJMJMJAMMA_GBLLNDCPJPL_OFFSET UNITYSDK_OFFSET(0x1EAF78F0)
#define NEJMJMJAMMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF7A70)
#define NEJMJMJAMMA_HBPPPGLAHAF_OFFSET UNITYSDK_OFFSET(0x1EAF7910)
#define NEJMJMJAMMA_IBMEBHNABMO_OFFSET UNITYSDK_OFFSET(0x1EAF78C0)
#define NEJMJMJAMMA_INHFNPLPKHA_OFFSET UNITYSDK_OFFSET(0x1EAF78E0)
#define NEJMJMJAMMA_JGCDKDFJMFG_OFFSET UNITYSDK_OFFSET(0x1EAF78D0)
#define NEJMJMJAMMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF7780)
#define NEJMJMJAMMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF7E10)
#define NEJMJMJAMMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF7DC0)
#define NEJMJMJAMMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF77E0)
#define NEJMJMJAMMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF7AA0)
#define NEJMJMJAMMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF7B00)

	class NEJMJMJAMMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HFECOPGBKAL; // 0x18
		::System::UInt32 NGJKOHIFBJG; // 0x1C
		::System::UInt32 JLGIDFIGHCK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEJMJMJAMMA")->GetStaticField(0x5E060);
		}

		// static const ::System::Object DLJJJNFADDN; // 0x0
		// static const ::System::Object DHBDPGLENEO; // 0x0
		// static const ::System::Object PEEEPAIOHBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEJMJMJAMMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJMJMJAMMA*))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJMJMJAMMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEJMJMJAMMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEJMJMJAMMA* Clone()
		{
			return ((::NEJMJMJAMMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IBMEBHNABMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_IBMEBHNABMO_OFFSET))(this);
		}

		::System::Void JGCDKDFJMFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_JGCDKDFJMFG_OFFSET))(this, a1);
		}

		::System::UInt32 INHFNPLPKHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_INHFNPLPKHA_OFFSET))(this);
		}

		::System::Void GBLLNDCPJPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_GBLLNDCPJPL_OFFSET))(this, a1);
		}

		::System::UInt32 CCBEMOHMDJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_CCBEMOHMDJC_OFFSET))(this);
		}

		::System::Void HBPPPGLAHAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_HBPPPGLAHAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEJMJMJAMMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEJMJMJAMMA*))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEJMJMJAMMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJMJMJAMMA*))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEJMJMJAMMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
