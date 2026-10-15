#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHLJLKOPEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIHLJLKOPEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF68130)
#define PIHLJLKOPEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF68400)
#define PIHLJLKOPEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF67D80)
#define PIHLJLKOPEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF67D50)
#define PIHLJLKOPEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF471E0)
#define PIHLJLKOPEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF67EF0)
#define PIHLJLKOPEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF67E10)
#define PIHLJLKOPEE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF67E00)
#define PIHLJLKOPEE_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1DF67DD0)
#define PIHLJLKOPEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF67FC0)
#define PIHLJLKOPEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF471A0)
#define PIHLJLKOPEE_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1DF67DE0)
#define PIHLJLKOPEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF68280)
#define PIHLJLKOPEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF68240)
#define PIHLJLKOPEE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF67DF0)
#define PIHLJLKOPEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF471D0)
#define PIHLJLKOPEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF67FF0)
#define PIHLJLKOPEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF68050)

	class PIHLJLKOPEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 BOHLIADLMJN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIHLJLKOPEE")->GetStaticField(0x41260);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIHLJLKOPEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHLJLKOPEE*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIHLJLKOPEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIHLJLKOPEE* Clone()
		{
			return ((::PIHLJLKOPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIHLJLKOPEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIHLJLKOPEE*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIHLJLKOPEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHLJLKOPEE*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
