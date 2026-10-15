#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKDBPNEFEJG.h"
#include "unitysdk/System/Object.h"
class BKHKMFEDPBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKHKMFEDPBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF581B0)
#define BKHKMFEDPBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF584C0)
#define BKHKMFEDPBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF57DF0)
#define BKHKMFEDPBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF57DC0)
#define BKHKMFEDPBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF57DB0)
#define BKHKMFEDPBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF57F60)
#define BKHKMFEDPBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF57E80)
#define BKHKMFEDPBE_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1DF57E70)
#define BKHKMFEDPBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF58030)
#define BKHKMFEDPBE_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1DF57E60)
#define BKHKMFEDPBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF57D70)
#define BKHKMFEDPBE_KNFGFHBHDOE_OFFSET UNITYSDK_OFFSET(0x1DF57E50)
#define BKHKMFEDPBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF58340)
#define BKHKMFEDPBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF58300)
#define BKHKMFEDPBE_NBPHFAPIBCK_OFFSET UNITYSDK_OFFSET(0x1DF57E40)
#define BKHKMFEDPBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF57DA0)
#define BKHKMFEDPBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF58060)
#define BKHKMFEDPBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF580C0)

inline static constexpr unsigned int BKHKMFEDPBE_TypeDefinitionIndex = 25984;

	class BKHKMFEDPBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MKDBPNEFEJG AFHHMCKLLAJ; // 0x18
		::System::UInt32 KEPJHNJCPCJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BKHKMFEDPBE")->GetStaticField(0x4B920);
		}

		// static const ::System::Object KAEFMCIIFIC; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKHKMFEDPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHKMFEDPBE*))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHKMFEDPBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BKHKMFEDPBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKHKMFEDPBE* Clone()
		{
			return ((::BKHKMFEDPBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 NBPHFAPIBCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_NBPHFAPIBCK_OFFSET))(this);
		}

		::System::Void KNFGFHBHDOE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_KNFGFHBHDOE_OFFSET))(this, a1);
		}

		::MKDBPNEFEJG JBENBABCOGB()
		{
			return ((::MKDBPNEFEJG(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::MKDBPNEFEJG a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDBPNEFEJG))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKHKMFEDPBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKHKMFEDPBE*))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKHKMFEDPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHKMFEDPBE*))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKHKMFEDPBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
