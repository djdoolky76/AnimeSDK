#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPJCKMPBAFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E049420)
#define BPJCKMPBAFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E049750)
#define BPJCKMPBAFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E048E70)
#define BPJCKMPBAFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E048E30)
#define BPJCKMPBAFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E048E20)
#define BPJCKMPBAFC_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E048EE0)
#define BPJCKMPBAFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E048F50)
#define BPJCKMPBAFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E048F20)
#define BPJCKMPBAFC_FLNBPIICMDL_OFFSET UNITYSDK_OFFSET(0x1E048F10)
#define BPJCKMPBAFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E049140)
#define BPJCKMPBAFC_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1E048EC0)
#define BPJCKMPBAFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E048DE0)
#define BPJCKMPBAFC_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x1E048ED0)
#define BPJCKMPBAFC_LPAJDOKIGHA_OFFSET UNITYSDK_OFFSET(0x1E048F00)
#define BPJCKMPBAFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0495B0)
#define BPJCKMPBAFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E049550)
#define BPJCKMPBAFC_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E048EF0)
#define BPJCKMPBAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E048E10)
#define BPJCKMPBAFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E049260)
#define BPJCKMPBAFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0492C0)

inline static constexpr unsigned int BPJCKMPBAFC_TypeDefinitionIndex = 32326;

	class BPJCKMPBAFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BANPOIIJGMG; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		::System::Single CECIENHJIOP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPJCKMPBAFC")->GetStaticField(0x425A0);
		}

		// static const ::System::Object BPGLOJPGFEK; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object LOPLGJAHIFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPJCKMPBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJCKMPBAFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPJCKMPBAFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPJCKMPBAFC* Clone()
		{
			return ((::BPJCKMPBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_CLONE_OFFSET))(this);
		}

		::System::Single HHMFILFAMNA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 LPAJDOKIGHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_LPAJDOKIGHA_OFFSET))(this);
		}

		::System::Void FLNBPIICMDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_FLNBPIICMDL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPJCKMPBAFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPJCKMPBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPJCKMPBAFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
