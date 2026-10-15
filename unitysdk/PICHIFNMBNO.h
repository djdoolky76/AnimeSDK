#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PICHIFNMBNO_KHJILCDGLLN.h"
#include "unitysdk/System/Object.h"
class LFIONDMGCOP;
class PICHIFNMBNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PICHIFNMBNO_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DF42930)
#define PICHIFNMBNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF42DE0)
#define PICHIFNMBNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF43300)
#define PICHIFNMBNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF42900)
#define PICHIFNMBNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF42790)
#define PICHIFNMBNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF42780)
#define PICHIFNMBNO_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DF42940)
#define PICHIFNMBNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF429A0)
#define PICHIFNMBNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF42970)
#define PICHIFNMBNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF42BE0)
#define PICHIFNMBNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF42740)
#define PICHIFNMBNO_LLGMNDJDPFF_OFFSET UNITYSDK_OFFSET(0x1DF42880)
#define PICHIFNMBNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF430B0)
#define PICHIFNMBNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF42F20)
#define PICHIFNMBNO_NJLLGBKAGNC_OFFSET UNITYSDK_OFFSET(0x1DF428E0)
#define PICHIFNMBNO_ODNPFOPGDLN_OFFSET UNITYSDK_OFFSET(0x1DF42950)
#define PICHIFNMBNO_OIJAAMILMJF_OFFSET UNITYSDK_OFFSET(0x1DF42960)
#define PICHIFNMBNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF42770)
#define PICHIFNMBNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF42C80)
#define PICHIFNMBNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF42CE0)

	class PICHIFNMBNO : public ::System::Object
	{
	public:
		::System::Object* DCFNJPANFEB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PICHIFNMBNO_KHJILCDGLLN FNDKNGCFKJC; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PICHIFNMBNO")->GetStaticField(0x40B80);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object OCFBLMMNMEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PICHIFNMBNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICHIFNMBNO*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICHIFNMBNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PICHIFNMBNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PICHIFNMBNO* Clone()
		{
			return ((::PICHIFNMBNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PICHIFNMBNO_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::LFIONDMGCOP* LLGMNDJDPFF()
		{
			return ((::LFIONDMGCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_LLGMNDJDPFF_OFFSET))(this);
		}

		::System::Void NJLLGBKAGNC(::LFIONDMGCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIONDMGCOP*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_NJLLGBKAGNC_OFFSET))(this, a1);
		}

		::PICHIFNMBNO_KHJILCDGLLN ODNPFOPGDLN()
		{
			return ((::PICHIFNMBNO_KHJILCDGLLN(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_ODNPFOPGDLN_OFFSET))(this);
		}

		::System::Void OIJAAMILMJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_OIJAAMILMJF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PICHIFNMBNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PICHIFNMBNO*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PICHIFNMBNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICHIFNMBNO*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PICHIFNMBNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
