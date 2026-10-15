#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPAHJFEBEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBPAHJFEBEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E247AF0)
#define EBPAHJFEBEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E247E10)
#define EBPAHJFEBEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E247730)
#define EBPAHJFEBEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2476F0)
#define EBPAHJFEBEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2476E0)
#define EBPAHJFEBEP_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E2477A0)
#define EBPAHJFEBEP_EOCIBPOCKIG_OFFSET UNITYSDK_OFFSET(0x1E247780)
#define EBPAHJFEBEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2478A0)
#define EBPAHJFEBEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2477C0)
#define EBPAHJFEBEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E247970)
#define EBPAHJFEBEP_HBFGPMECPLC_OFFSET UNITYSDK_OFFSET(0x1E247790)
#define EBPAHJFEBEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2476A0)
#define EBPAHJFEBEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E247C90)
#define EBPAHJFEBEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E247C50)
#define EBPAHJFEBEP_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E2477B0)
#define EBPAHJFEBEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2476D0)
#define EBPAHJFEBEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2479B0)
#define EBPAHJFEBEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E247A10)

	class EBPAHJFEBEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 KANCOFHLMEA; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBPAHJFEBEP")->GetStaticField(0x18040);
		}

		// static const ::System::Object NLMFDMLIDHJ; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBPAHJFEBEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPAHJFEBEP*))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPAHJFEBEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBPAHJFEBEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBPAHJFEBEP* Clone()
		{
			return ((::EBPAHJFEBEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_CLONE_OFFSET))(this);
		}

		::System::UInt64 EOCIBPOCKIG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_EOCIBPOCKIG_OFFSET))(this);
		}

		::System::Void HBFGPMECPLC(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_HBFGPMECPLC_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBPAHJFEBEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBPAHJFEBEP*))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBPAHJFEBEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPAHJFEBEP*))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBPAHJFEBEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
