#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POGMMMGBNCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POGMMMGBNCH_AMONAKNHNPL_OFFSET UNITYSDK_OFFSET(0x1DFCAD10)
#define POGMMMGBNCH_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1DFCACF0)
#define POGMMMGBNCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFCB040)
#define POGMMMGBNCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCB310)
#define POGMMMGBNCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFCAC90)
#define POGMMMGBNCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFCAC60)
#define POGMMMGBNCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCAC50)
#define POGMMMGBNCH_EGBOLDOFOEM_OFFSET UNITYSDK_OFFSET(0x1DFCAD00)
#define POGMMMGBNCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFCAE00)
#define POGMMMGBNCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFCAD20)
#define POGMMMGBNCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFCAED0)
#define POGMMMGBNCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFCAC10)
#define POGMMMGBNCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFCB190)
#define POGMMMGBNCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFCB150)
#define POGMMMGBNCH_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1DFCACE0)
#define POGMMMGBNCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFCAC40)
#define POGMMMGBNCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFCAF00)
#define POGMMMGBNCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFCAF60)

	class POGMMMGBNCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		::System::UInt32 IHODDKNKKOM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "POGMMMGBNCH")->GetStaticField(0x434E0);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object AKDGEBMBHAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POGMMMGBNCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POGMMMGBNCH*))((::PBYTE)hIl2Cpp + POGMMMGBNCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POGMMMGBNCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + POGMMMGBNCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POGMMMGBNCH* Clone()
		{
			return ((::POGMMMGBNCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POGMMMGBNCH_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 EGBOLDOFOEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_EGBOLDOFOEM_OFFSET))(this);
		}

		::System::Void AMONAKNHNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POGMMMGBNCH_AMONAKNHNPL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POGMMMGBNCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POGMMMGBNCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POGMMMGBNCH*))((::PBYTE)hIl2Cpp + POGMMMGBNCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POGMMMGBNCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POGMMMGBNCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POGMMMGBNCH*))((::PBYTE)hIl2Cpp + POGMMMGBNCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POGMMMGBNCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
