#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPENENIMEFE;
class CLPENACKJJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPENENIMEFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E042820)
#define BPENENIMEFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E042C00)
#define BPENENIMEFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0421B0)
#define BPENENIMEFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E042110)
#define BPENENIMEFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E042100)
#define BPENENIMEFE_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E0422E0)
#define BPENENIMEFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E042420)
#define BPENENIMEFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0422F0)
#define BPENENIMEFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0425B0)
#define BPENENIMEFE_GFCLDNCDPPM_OFFSET UNITYSDK_OFFSET(0x1E042290)
#define BPENENIMEFE_IBOCNGPMJAP_OFFSET UNITYSDK_OFFSET(0x1E0422C0)
#define BPENENIMEFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E042090)
#define BPENENIMEFE_KCNFLKNHICG_OFFSET UNITYSDK_OFFSET(0x1E0422B0)
#define BPENENIMEFE_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E0422D0)
#define BPENENIMEFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0429F0)
#define BPENENIMEFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E042900)
#define BPENENIMEFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0420F0)
#define BPENENIMEFE_PKPOGDCMELH_OFFSET UNITYSDK_OFFSET(0x1E0422A0)
#define BPENENIMEFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E042650)
#define BPENENIMEFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0426B0)

inline static constexpr unsigned int BPENENIMEFE_TypeDefinitionIndex = 29496;

	class BPENENIMEFE : public ::System::Object
	{
	public:
		::CLPENACKJJE* CKLMOPBJJHL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DJIJMBMGAPB; // 0x20
		::System::Boolean IHDNAECOFPG; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPENENIMEFE")->GetStaticField(0x14670);
		}

		// static const ::System::Object KCMIIKHFJLL; // 0x0
		// static const ::System::Object AJEJIGGPPGP; // 0x0
		// static const ::System::Object HDEAOOJANDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPENENIMEFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPENENIMEFE*))((::PBYTE)hIl2Cpp + BPENENIMEFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPENENIMEFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPENENIMEFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPENENIMEFE* Clone()
		{
			return ((::BPENENIMEFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_CLONE_OFFSET))(this);
		}

		::CLPENACKJJE* GFCLDNCDPPM()
		{
			return ((::CLPENACKJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_GFCLDNCDPPM_OFFSET))(this);
		}

		::System::Void PKPOGDCMELH(::CLPENACKJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPENACKJJE*))((::PBYTE)hIl2Cpp + BPENENIMEFE_PKPOGDCMELH_OFFSET))(this, a1);
		}

		::System::Boolean KCNFLKNHICG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_KCNFLKNHICG_OFFSET))(this);
		}

		::System::Void IBOCNGPMJAP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPENENIMEFE_IBOCNGPMJAP_OFFSET))(this, a1);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPENENIMEFE_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPENENIMEFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPENENIMEFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPENENIMEFE*))((::PBYTE)hIl2Cpp + BPENENIMEFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPENENIMEFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPENENIMEFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPENENIMEFE*))((::PBYTE)hIl2Cpp + BPENENIMEFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPENENIMEFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
