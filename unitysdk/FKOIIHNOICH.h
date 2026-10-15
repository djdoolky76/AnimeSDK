#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKOIIHNOICH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FKOIIHNOICH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B2DE0)
#define FKOIIHNOICH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B32D0)
#define FKOIIHNOICH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B27A0)
#define FKOIIHNOICH_CONCDLKPPFI_OFFSET UNITYSDK_OFFSET(0x1E3B2850)
#define FKOIIHNOICH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B2730)
#define FKOIIHNOICH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B2720)
#define FKOIIHNOICH_DHLAPPCOIKA_OFFSET UNITYSDK_OFFSET(0x1E3B2840)
#define FKOIIHNOICH_DPHOAJFDHOI_OFFSET UNITYSDK_OFFSET(0x1E3B2870)
#define FKOIIHNOICH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B2960)
#define FKOIIHNOICH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B28E0)
#define FKOIIHNOICH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3B2830)
#define FKOIIHNOICH_FEKAJCBJBPM_OFFSET UNITYSDK_OFFSET(0x1E3B28D0)
#define FKOIIHNOICH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B2A70)
#define FKOIIHNOICH_GOAHLKOAMDP_OFFSET UNITYSDK_OFFSET(0x1E3B2890)
#define FKOIIHNOICH_HHFEJOFBMAD_OFFSET UNITYSDK_OFFSET(0x1E3B28A0)
#define FKOIIHNOICH_JGEDNACHDIB_OFFSET UNITYSDK_OFFSET(0x1E3B28B0)
#define FKOIIHNOICH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B26E0)
#define FKOIIHNOICH_LECGPKPDEKG_OFFSET UNITYSDK_OFFSET(0x1E3B28C0)
#define FKOIIHNOICH_LJPHMFMHMJP_OFFSET UNITYSDK_OFFSET(0x1E3B2860)
#define FKOIIHNOICH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B31B0)
#define FKOIIHNOICH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B30F0)
#define FKOIIHNOICH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3B2820)
#define FKOIIHNOICH_OHBINDPNOJP_OFFSET UNITYSDK_OFFSET(0x1E3B2880)
#define FKOIIHNOICH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B2710)
#define FKOIIHNOICH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B2B30)
#define FKOIIHNOICH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B2B90)

	class FKOIIHNOICH : public ::System::Object
	{
	public:
		::Proto::ItemList* OELAFPJOIAA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EBDEEHICHPD; // 0x20
		::System::UInt32 ODNHJFEDMJO; // 0x24
		::System::UInt32 BPMFNMLGNJE; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt64 NJGCEBDGAGJ; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FKOIIHNOICH")->GetStaticField(0x63EA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NLMKCDILPGB; // 0x0
		// static const ::System::Object ONJCHFLKBOK; // 0x0
		// static const ::System::Object BHLAKOLMCHH; // 0x0
		// static const ::System::Object OEKAABINEDK; // 0x0
		// static const ::System::Object IKMOKOHKAPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKOIIHNOICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKOIIHNOICH*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOIIHNOICH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FKOIIHNOICH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKOIIHNOICH* Clone()
		{
			return ((::FKOIIHNOICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOIIHNOICH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 DHLAPPCOIKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_DHLAPPCOIKA_OFFSET))(this);
		}

		::System::Void CONCDLKPPFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOIIHNOICH_CONCDLKPPFI_OFFSET))(this, a1);
		}

		::System::UInt32 LJPHMFMHMJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_LJPHMFMHMJP_OFFSET))(this);
		}

		::System::Void DPHOAJFDHOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOIIHNOICH_DPHOAJFDHOI_OFFSET))(this, a1);
		}

		::System::UInt32 OHBINDPNOJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_OHBINDPNOJP_OFFSET))(this);
		}

		::System::Void GOAHLKOAMDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOIIHNOICH_GOAHLKOAMDP_OFFSET))(this, a1);
		}

		::Proto::ItemList* HHFEJOFBMAD()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_HHFEJOFBMAD_OFFSET))(this);
		}

		::System::Void JGEDNACHDIB(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_JGEDNACHDIB_OFFSET))(this, a1);
		}

		::System::UInt64 LECGPKPDEKG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_LECGPKPDEKG_OFFSET))(this);
		}

		::System::Void FEKAJCBJBPM(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FKOIIHNOICH_FEKAJCBJBPM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKOIIHNOICH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKOIIHNOICH*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKOIIHNOICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKOIIHNOICH*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKOIIHNOICH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
