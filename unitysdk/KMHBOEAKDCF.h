#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHBOEAKDCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMHBOEAKDCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E89A270)
#define KMHBOEAKDCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89A540)
#define KMHBOEAKDCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E899EC0)
#define KMHBOEAKDCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E899E90)
#define KMHBOEAKDCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E899E80)
#define KMHBOEAKDCF_DOCELCHPNKA_OFFSET UNITYSDK_OFFSET(0x1E899F40)
#define KMHBOEAKDCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E89A030)
#define KMHBOEAKDCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E899F50)
#define KMHBOEAKDCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E89A100)
#define KMHBOEAKDCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E899E40)
#define KMHBOEAKDCF_JODBIKCOKPA_OFFSET UNITYSDK_OFFSET(0x1E899F10)
#define KMHBOEAKDCF_LENHNHPNHLM_OFFSET UNITYSDK_OFFSET(0x1E899F30)
#define KMHBOEAKDCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E89A3C0)
#define KMHBOEAKDCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E89A380)
#define KMHBOEAKDCF_MGHDAHFEGHK_OFFSET UNITYSDK_OFFSET(0x1E899F20)
#define KMHBOEAKDCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E899E70)
#define KMHBOEAKDCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E89A130)
#define KMHBOEAKDCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E89A190)

	class KMHBOEAKDCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DDFOLMPHEKD; // 0x18
		::System::UInt32 LAPDJOMDENI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KMHBOEAKDCF")->GetStaticField(0x22490);
		}

		// static const ::System::Object ILFADHBKBCA; // 0x0
		// static const ::System::Object OFIPFNEENJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMHBOEAKDCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMHBOEAKDCF*))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMHBOEAKDCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KMHBOEAKDCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMHBOEAKDCF* Clone()
		{
			return ((::KMHBOEAKDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JODBIKCOKPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_JODBIKCOKPA_OFFSET))(this);
		}

		::System::Void MGHDAHFEGHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_MGHDAHFEGHK_OFFSET))(this, a1);
		}

		::System::UInt32 LENHNHPNHLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_LENHNHPNHLM_OFFSET))(this);
		}

		::System::Void DOCELCHPNKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_DOCELCHPNKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMHBOEAKDCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMHBOEAKDCF*))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMHBOEAKDCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMHBOEAKDCF*))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMHBOEAKDCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
