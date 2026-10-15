#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNOLIMEEOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FHNOLIMEEOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3933A0)
#define FHNOLIMEEOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3936A0)
#define FHNOLIMEEOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E392DB0)
#define FHNOLIMEEOM_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E392E90)
#define FHNOLIMEEOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E392D40)
#define FHNOLIMEEOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E392D30)
#define FHNOLIMEEOM_EMPPNCDNLJK_OFFSET UNITYSDK_OFFSET(0x1E392E70)
#define FHNOLIMEEOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E392F30)
#define FHNOLIMEEOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E392EB0)
#define FHNOLIMEEOM_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E392EA0)
#define FHNOLIMEEOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3930D0)
#define FHNOLIMEEOM_HLKGMNHEFEI_OFFSET UNITYSDK_OFFSET(0x1E392E80)
#define FHNOLIMEEOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E392CF0)
#define FHNOLIMEEOM_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E392E60)
#define FHNOLIMEEOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3935A0)
#define FHNOLIMEEOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3934F0)
#define FHNOLIMEEOM_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E392E40)
#define FHNOLIMEEOM_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E392E30)
#define FHNOLIMEEOM_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E392E50)
#define FHNOLIMEEOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E392D20)
#define FHNOLIMEEOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E393170)
#define FHNOLIMEEOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3931D0)

	class FHNOLIMEEOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::Boolean BBJIDLMAPDF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ABPDPMHFFNN; // 0x24
		::System::UInt32 POMBFDPLCEF; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHNOLIMEEOM")->GetStaticField(0x5FC70);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object NFAOKNOGDHF; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHNOLIMEEOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNOLIMEEOM*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNOLIMEEOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHNOLIMEEOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHNOLIMEEOM* Clone()
		{
			return ((::FHNOLIMEEOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::UInt32 EMPPNCDNLJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_EMPPNCDNLJK_OFFSET))(this);
		}

		::System::Void HLKGMNHEFEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_HLKGMNHEFEI_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHNOLIMEEOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHNOLIMEEOM*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHNOLIMEEOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNOLIMEEOM*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHNOLIMEEOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
