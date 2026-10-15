#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMIFHAMFCFE;
class MOIONLDJGJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOIONLDJGJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAAC8B0)
#define MOIONLDJGJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAACC70)
#define MOIONLDJGJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAAC2B0)
#define MOIONLDJGJI_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1EAAC350)
#define MOIONLDJGJI_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1EAAC370)
#define MOIONLDJGJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAAC220)
#define MOIONLDJGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAC210)
#define MOIONLDJGJI_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1EAAC390)
#define MOIONLDJGJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAC540)
#define MOIONLDJGJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAAC3B0)
#define MOIONLDJGJI_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1EAAC380)
#define MOIONLDJGJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAC6D0)
#define MOIONLDJGJI_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1EAAC360)
#define MOIONLDJGJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAAC1D0)
#define MOIONLDJGJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAACAA0)
#define MOIONLDJGJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAACA00)
#define MOIONLDJGJI_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1EAAC3A0)
#define MOIONLDJGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAAC200)
#define MOIONLDJGJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAC710)
#define MOIONLDJGJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAAC770)

inline static constexpr unsigned int MOIONLDJGJI_TypeDefinitionIndex = 29428;

	class MOIONLDJGJI : public ::System::Object
	{
	public:
		::LMIFHAMFCFE* NMABHKCOLCM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOIONLDJGJI")->GetStaticField(0x5A880);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOIONLDJGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOIONLDJGJI*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOIONLDJGJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOIONLDJGJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOIONLDJGJI* Clone()
		{
			return ((::MOIONLDJGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOIONLDJGJI_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::LMIFHAMFCFE* CPEEIHDCIFD()
		{
			return ((::LMIFHAMFCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::LMIFHAMFCFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMIFHAMFCFE*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOIONLDJGJI_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOIONLDJGJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOIONLDJGJI*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOIONLDJGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOIONLDJGJI*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOIONLDJGJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
