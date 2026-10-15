#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPHCDCNOBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFPHCDCNOBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2A140)
#define PFPHCDCNOBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A410)
#define PFPHCDCNOBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF29D40)
#define PFPHCDCNOBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF29D10)
#define PFPHCDCNOBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29D00)
#define PFPHCDCNOBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF29F00)
#define PFPHCDCNOBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF29DF0)
#define PFPHCDCNOBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF29FD0)
#define PFPHCDCNOBN_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x1DF29DE0)
#define PFPHCDCNOBN_IEFCKNCCFJN_OFFSET UNITYSDK_OFFSET(0x1DF29DB0)
#define PFPHCDCNOBN_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x1DF29DD0)
#define PFPHCDCNOBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF29C90)
#define PFPHCDCNOBN_KKCMPKEKHLI_OFFSET UNITYSDK_OFFSET(0x1DF29DC0)
#define PFPHCDCNOBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2A290)
#define PFPHCDCNOBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2A250)
#define PFPHCDCNOBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF29CF0)
#define PFPHCDCNOBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2A000)
#define PFPHCDCNOBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2A060)

	class PFPHCDCNOBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PGMIFKLNEFA; // 0x18
		::System::UInt32 FMCFBIJJCBM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PFPHCDCNOBN")->GetStaticField(0x25060);
		}

		// static const ::System::Object BBKOHMKHCLP; // 0x0
		// static const ::System::Object BMLOHFPHLOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFPHCDCNOBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPHCDCNOBN*))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPHCDCNOBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PFPHCDCNOBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFPHCDCNOBN* Clone()
		{
			return ((::PFPHCDCNOBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IEFCKNCCFJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_IEFCKNCCFJN_OFFSET))(this);
		}

		::System::Void KKCMPKEKHLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_KKCMPKEKHLI_OFFSET))(this, a1);
		}

		::System::UInt32 INDOEFMDAOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_INDOEFMDAOK_OFFSET))(this);
		}

		::System::Void GMCOKCKEDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_GMCOKCKEDLC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFPHCDCNOBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFPHCDCNOBN*))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFPHCDCNOBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPHCDCNOBN*))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFPHCDCNOBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
