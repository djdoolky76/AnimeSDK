#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNICDFFMDDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNICDFFMDDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBB490)
#define PNICDFFMDDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBB6F0)
#define PNICDFFMDDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBB040)
#define PNICDFFMDDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBB000)
#define PNICDFFMDDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBAFF0)
#define PNICDFFMDDB_EMMFANHJMCN_OFFSET UNITYSDK_OFFSET(0x1DFBB0F0)
#define PNICDFFMDDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBB210)
#define PNICDFFMDDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBB100)
#define PNICDFFMDDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBB2F0)
#define PNICDFFMDDB_IDKBECCMJIA_OFFSET UNITYSDK_OFFSET(0x1DFBB0E0)
#define PNICDFFMDDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFBAF80)
#define PNICDFFMDDB_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1DFBB0D0)
#define PNICDFFMDDB_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1DFBB0C0)
#define PNICDFFMDDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBB570)
#define PNICDFFMDDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBB530)
#define PNICDFFMDDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBAFE0)
#define PNICDFFMDDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBB320)
#define PNICDFFMDDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBB380)

inline static constexpr unsigned int PNICDFFMDDB_TypeDefinitionIndex = 34641;

	class PNICDFFMDDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AMOPIFLCGOO; // 0x18
		::System::Boolean ECKFPGOKDBK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNICDFFMDDB")->GetStaticField(0x24F20);
		}

		// static const ::System::Object KKHPBDAEOLM; // 0x0
		// static const ::System::Object AFJMDPFOBGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNICDFFMDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNICDFFMDDB*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNICDFFMDDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNICDFFMDDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNICDFFMDDB* Clone()
		{
			return ((::PNICDFFMDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNICDFFMDDB_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean IDKBECCMJIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_IDKBECCMJIA_OFFSET))(this);
		}

		::System::Void EMMFANHJMCN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNICDFFMDDB_EMMFANHJMCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNICDFFMDDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNICDFFMDDB*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNICDFFMDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNICDFFMDDB*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
