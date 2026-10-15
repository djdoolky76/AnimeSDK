#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJEGHJPAMPI.h"
#include "unitysdk/System/Object.h"
class ABEBEOKFKFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABEBEOKFKFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC9470)
#define ABEBEOKFKFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9780)
#define ABEBEOKFKFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC9060)
#define ABEBEOKFKFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC9030)
#define ABEBEOKFKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9020)
#define ABEBEOKFKFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC9220)
#define ABEBEOKFKFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC9110)
#define ABEBEOKFKFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC92F0)
#define ABEBEOKFKFF_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x1DDC90F0)
#define ABEBEOKFKFF_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DDC90E0)
#define ABEBEOKFKFF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DDC90D0)
#define ABEBEOKFKFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC8FB0)
#define ABEBEOKFKFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC9600)
#define ABEBEOKFKFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC95C0)
#define ABEBEOKFKFF_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x1DDC9100)
#define ABEBEOKFKFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9010)
#define ABEBEOKFKFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC9320)
#define ABEBEOKFKFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC9380)

	class ABEBEOKFKFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EJEGHJPAMPI GMPNCOBOFDM; // 0x18
		::System::UInt32 IHHANCNMDMA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABEBEOKFKFF")->GetStaticField(0x38BD0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object FCLKOFBAFMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABEBEOKFKFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBEOKFKFF*))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABEBEOKFKFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABEBEOKFKFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABEBEOKFKFF* Clone()
		{
			return ((::ABEBEOKFKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_CLONE_OFFSET))(this);
		}

		::EJEGHJPAMPI JBIOGKPHKKC()
		{
			return ((::EJEGHJPAMPI(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::EJEGHJPAMPI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJEGHJPAMPI))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABEBEOKFKFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABEBEOKFKFF*))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABEBEOKFKFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBEOKFKFF*))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABEBEOKFKFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
