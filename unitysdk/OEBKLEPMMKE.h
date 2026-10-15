#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEBKLEPMMKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEBKLEPMMKE_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DE23620)
#define OEBKLEPMMKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE23980)
#define OEBKLEPMMKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE23C50)
#define OEBKLEPMMKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE235D0)
#define OEBKLEPMMKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE235A0)
#define OEBKLEPMMKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE23590)
#define OEBKLEPMMKE_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DE23630)
#define OEBKLEPMMKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE23740)
#define OEBKLEPMMKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE23660)
#define OEBKLEPMMKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE23810)
#define OEBKLEPMMKE_JGGAAODHDCF_OFFSET UNITYSDK_OFFSET(0x1DE23650)
#define OEBKLEPMMKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE23550)
#define OEBKLEPMMKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE23AD0)
#define OEBKLEPMMKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE23A90)
#define OEBKLEPMMKE_NLFHLOKALPG_OFFSET UNITYSDK_OFFSET(0x1DE23640)
#define OEBKLEPMMKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE23580)
#define OEBKLEPMMKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE23840)
#define OEBKLEPMMKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE238A0)

	class OEBKLEPMMKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		::System::UInt32 LICILOLFFAB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OEBKLEPMMKE")->GetStaticField(0x14490);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object COMMLNIDMCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEBKLEPMMKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEBKLEPMMKE*))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEBKLEPMMKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OEBKLEPMMKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEBKLEPMMKE* Clone()
		{
			return ((::OEBKLEPMMKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 NLFHLOKALPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_NLFHLOKALPG_OFFSET))(this);
		}

		::System::Void JGGAAODHDCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_JGGAAODHDCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEBKLEPMMKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEBKLEPMMKE*))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEBKLEPMMKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEBKLEPMMKE*))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEBKLEPMMKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
