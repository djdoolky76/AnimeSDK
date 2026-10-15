#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIAFBCLIBOD;
class HIIIBFIMIIE;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIAFBCLIBOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFEBF0)
#define BIAFBCLIBOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFEF10)
#define BIAFBCLIBOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFE480)
#define BIAFBCLIBOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFE410)
#define BIAFBCLIBOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFE400)
#define BIAFBCLIBOD_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1DDFE500)
#define BIAFBCLIBOD_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1DDFE540)
#define BIAFBCLIBOD_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1DDFE510)
#define BIAFBCLIBOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFE6A0)
#define BIAFBCLIBOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFE580)
#define BIAFBCLIBOD_FLNBPIICMDL_OFFSET UNITYSDK_OFFSET(0x1DDFE530)
#define BIAFBCLIBOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFE8E0)
#define BIAFBCLIBOD_IDJMCBCFMLH_OFFSET UNITYSDK_OFFSET(0x1DDFE560)
#define BIAFBCLIBOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFE3C0)
#define BIAFBCLIBOD_LPAJDOKIGHA_OFFSET UNITYSDK_OFFSET(0x1DDFE520)
#define BIAFBCLIBOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFEE30)
#define BIAFBCLIBOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFED70)
#define BIAFBCLIBOD_NFKPBJEPJPI_OFFSET UNITYSDK_OFFSET(0x1DDFE570)
#define BIAFBCLIBOD_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1DDFE550)
#define BIAFBCLIBOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFE3F0)
#define BIAFBCLIBOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFEA00)
#define BIAFBCLIBOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFEA60)

inline static constexpr unsigned int BIAFBCLIBOD_TypeDefinitionIndex = 30517;

	class BIAFBCLIBOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::HIIIBFIMIIE* CDAMOJGCPGO; // 0x20
		::System::UInt32 BANPOIIJGMG; // 0x28
		::System::UInt32 FLBKCMIIFFP; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BIAFBCLIBOD")->GetStaticField(0x479E0);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object LOPLGJAHIFF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object DCBGHOGCLMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIAFBCLIBOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIAFBCLIBOD*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIAFBCLIBOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BIAFBCLIBOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIAFBCLIBOD* Clone()
		{
			return ((::BIAFBCLIBOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 LPAJDOKIGHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_LPAJDOKIGHA_OFFSET))(this);
		}

		::System::Void FLNBPIICMDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_FLNBPIICMDL_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::HIIIBFIMIIE* IDJMCBCFMLH()
		{
			return ((::HIIIBFIMIIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_IDJMCBCFMLH_OFFSET))(this);
		}

		::System::Void NFKPBJEPJPI(::HIIIBFIMIIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIIBFIMIIE*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_NFKPBJEPJPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIAFBCLIBOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIAFBCLIBOD*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIAFBCLIBOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIAFBCLIBOD*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIAFBCLIBOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
