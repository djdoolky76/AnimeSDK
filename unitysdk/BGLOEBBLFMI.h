#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLOEBBLFMI;
class NAPFNBJDIOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGLOEBBLFMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA7CCD0)
#define BGLOEBBLFMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7CFE0)
#define BGLOEBBLFMI_CHAJIKFNCJJ_OFFSET UNITYSDK_OFFSET(0x1EA7C800)
#define BGLOEBBLFMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA7C790)
#define BGLOEBBLFMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA7C730)
#define BGLOEBBLFMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C720)
#define BGLOEBBLFMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA7C9C0)
#define BGLOEBBLFMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA7C840)
#define BGLOEBBLFMI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA7C830)
#define BGLOEBBLFMI_FJDFGAHOPMH_OFFSET UNITYSDK_OFFSET(0x1EA7C810)
#define BGLOEBBLFMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA7CB40)
#define BGLOEBBLFMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA7C6E0)
#define BGLOEBBLFMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA7CE30)
#define BGLOEBBLFMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA7CDA0)
#define BGLOEBBLFMI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA7C820)
#define BGLOEBBLFMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C710)
#define BGLOEBBLFMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA7CB90)
#define BGLOEBBLFMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA7CBF0)

	class BGLOEBBLFMI : public ::System::Object
	{
	public:
		::NAPFNBJDIOO* HIBPKLOJLAP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGLOEBBLFMI")->GetStaticField(0x43100);
		}

		// static const ::System::Object IKLEMOJDPND; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGLOEBBLFMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLOEBBLFMI*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLOEBBLFMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGLOEBBLFMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGLOEBBLFMI* Clone()
		{
			return ((::BGLOEBBLFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_CLONE_OFFSET))(this);
		}

		::NAPFNBJDIOO* CHAJIKFNCJJ()
		{
			return ((::NAPFNBJDIOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_CHAJIKFNCJJ_OFFSET))(this);
		}

		::System::Void FJDFGAHOPMH(::NAPFNBJDIOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAPFNBJDIOO*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_FJDFGAHOPMH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGLOEBBLFMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGLOEBBLFMI*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGLOEBBLFMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLOEBBLFMI*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGLOEBBLFMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
