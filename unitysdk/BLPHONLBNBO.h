#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLPHONLBNBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLPHONLBNBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF67970)
#define BLPHONLBNBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF67C40)
#define BLPHONLBNBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF675C0)
#define BLPHONLBNBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF67590)
#define BLPHONLBNBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF67580)
#define BLPHONLBNBO_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1DF67630)
#define BLPHONLBNBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF67730)
#define BLPHONLBNBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF67650)
#define BLPHONLBNBO_FLNBPIICMDL_OFFSET UNITYSDK_OFFSET(0x1DF67620)
#define BLPHONLBNBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF67800)
#define BLPHONLBNBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF67540)
#define BLPHONLBNBO_LPAJDOKIGHA_OFFSET UNITYSDK_OFFSET(0x1DF67610)
#define BLPHONLBNBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF67AC0)
#define BLPHONLBNBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF67A80)
#define BLPHONLBNBO_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1DF67640)
#define BLPHONLBNBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF67570)
#define BLPHONLBNBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF67830)
#define BLPHONLBNBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF67890)

inline static constexpr unsigned int BLPHONLBNBO_TypeDefinitionIndex = 32316;

	class BLPHONLBNBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BANPOIIJGMG; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLPHONLBNBO")->GetStaticField(0x4D500);
		}

		// static const ::System::Object LOPLGJAHIFF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLPHONLBNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPHONLBNBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLPHONLBNBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLPHONLBNBO* Clone()
		{
			return ((::BLPHONLBNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 LPAJDOKIGHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_LPAJDOKIGHA_OFFSET))(this);
		}

		::System::Void FLNBPIICMDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPHONLBNBO_FLNBPIICMDL_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPHONLBNBO_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLPHONLBNBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLPHONLBNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
