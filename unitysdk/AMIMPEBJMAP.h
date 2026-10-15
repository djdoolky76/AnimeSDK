#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALGMICKCABI.h"
#include "unitysdk/System/Object.h"
class AMIMPEBJMAP;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMIMPEBJMAP_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1E523990)
#define AMIMPEBJMAP_BCKDBELPMKK_OFFSET UNITYSDK_OFFSET(0x1E523940)
#define AMIMPEBJMAP_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1E5239A0)
#define AMIMPEBJMAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E523E80)
#define AMIMPEBJMAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5242B0)
#define AMIMPEBJMAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E523880)
#define AMIMPEBJMAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E523800)
#define AMIMPEBJMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5237B0)
#define AMIMPEBJMAP_EGDGBLELPJF_OFFSET UNITYSDK_OFFSET(0x1E523910)
#define AMIMPEBJMAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E523A40)
#define AMIMPEBJMAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5239B0)
#define AMIMPEBJMAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E523B60)
#define AMIMPEBJMAP_IDBKPEABODK_OFFSET UNITYSDK_OFFSET(0x1E523920)
#define AMIMPEBJMAP_IIPEAGGANHI_OFFSET UNITYSDK_OFFSET(0x1E523930)
#define AMIMPEBJMAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E523770)
#define AMIMPEBJMAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5240E0)
#define AMIMPEBJMAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E524080)
#define AMIMPEBJMAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5237A0)
#define AMIMPEBJMAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E523C90)
#define AMIMPEBJMAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E523CF0)

	class AMIMPEBJMAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::ByteString* BIGJIHHEEOC; // 0x18
		::System::UInt32 GAKLHAGDGDE; // 0x20
		::ALGMICKCABI ADOPAOCMEOG; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMIMPEBJMAP")->GetStaticField(0x3C910);
		}

		// static const ::System::Object EOEGCOAGEAI; // 0x0
		// static const ::System::Object LJFDLELNKKB; // 0x0
		// static const ::System::Object ELFGGGHJCFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMIMPEBJMAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMIMPEBJMAP*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIMPEBJMAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMIMPEBJMAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMIMPEBJMAP* Clone()
		{
			return ((::AMIMPEBJMAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGDGBLELPJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_EGDGBLELPJF_OFFSET))(this);
		}

		::System::Void IDBKPEABODK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_IDBKPEABODK_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* IIPEAGGANHI()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_IIPEAGGANHI_OFFSET))(this);
		}

		::System::Void BCKDBELPMKK(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_BCKDBELPMKK_OFFSET))(this, a1);
		}

		::ALGMICKCABI AJOPEKGIJFO()
		{
			return ((::ALGMICKCABI(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void BKMJJABNDMA(::ALGMICKCABI a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALGMICKCABI))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_BKMJJABNDMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMIMPEBJMAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMIMPEBJMAP*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMIMPEBJMAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMIMPEBJMAP*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMIMPEBJMAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
