#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCHDLMIOOIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCHDLMIOOIP_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E53E3D0)
#define HCHDLMIOOIP_BEDJDJIMNPA_OFFSET UNITYSDK_OFFSET(0x1E53E430)
#define HCHDLMIOOIP_BIHHPNJGMEC_OFFSET UNITYSDK_OFFSET(0x1E53E420)
#define HCHDLMIOOIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53E930)
#define HCHDLMIOOIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53EE00)
#define HCHDLMIOOIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53E310)
#define HCHDLMIOOIP_CNIKICCCJEO_OFFSET UNITYSDK_OFFSET(0x1E53E400)
#define HCHDLMIOOIP_COPFFBGFBAK_OFFSET UNITYSDK_OFFSET(0x1E53E410)
#define HCHDLMIOOIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53E2C0)
#define HCHDLMIOOIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53E2B0)
#define HCHDLMIOOIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53E530)
#define HCHDLMIOOIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53E480)
#define HCHDLMIOOIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53E5A0)
#define HCHDLMIOOIP_GIBPHJHJHIF_OFFSET UNITYSDK_OFFSET(0x1E53E470)
#define HCHDLMIOOIP_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E53E3B0)
#define HCHDLMIOOIP_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E53E3C0)
#define HCHDLMIOOIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53E240)
#define HCHDLMIOOIP_KBPMPMKDJAB_OFFSET UNITYSDK_OFFSET(0x1E53E440)
#define HCHDLMIOOIP_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E53E3A0)
#define HCHDLMIOOIP_KPPEBLNNKGL_OFFSET UNITYSDK_OFFSET(0x1E53E3F0)
#define HCHDLMIOOIP_LJPNHMLJKEI_OFFSET UNITYSDK_OFFSET(0x1E53E450)
#define HCHDLMIOOIP_LMHIIJPBFPJ_OFFSET UNITYSDK_OFFSET(0x1E53E3E0)
#define HCHDLMIOOIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53ED00)
#define HCHDLMIOOIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53EC90)
#define HCHDLMIOOIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53E2A0)
#define HCHDLMIOOIP_PDMNDBMHAPF_OFFSET UNITYSDK_OFFSET(0x1E53E460)
#define HCHDLMIOOIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53E5F0)
#define HCHDLMIOOIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53E650)

	class HCHDLMIOOIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GOHOKFAPDCI; // 0x18
		::System::UInt32 EGJDFIPLGMO; // 0x1C
		::System::UInt64 DEJFOEHNFJA; // 0x20
		::System::UInt32 NHLNJLAMBBG; // 0x28
		::System::UInt32 KCLJDCMCFBN; // 0x2C
		::System::UInt32 HJEGLCJEOKC; // 0x30
		::System::Boolean FMDLGNMFLID; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCHDLMIOOIP")->GetStaticField(0x30290);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object EIDJNEEOOCF; // 0x0
		// static const ::System::Object PDFOJNFGMJF; // 0x0
		// static const ::System::Object IDOCCLCMLMB; // 0x0
		// static const ::System::Object FIAAMMFEPBM; // 0x0
		// static const ::System::Object MCBJBINKJLN; // 0x0
		// static const ::System::Object JLCOELFOKOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCHDLMIOOIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCHDLMIOOIP*))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHDLMIOOIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCHDLMIOOIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCHDLMIOOIP* Clone()
		{
			return ((::HCHDLMIOOIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt64 IDNFENJBNPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::UInt32 LMHIIJPBFPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_LMHIIJPBFPJ_OFFSET))(this);
		}

		::System::Void KPPEBLNNKGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_KPPEBLNNKGL_OFFSET))(this, a1);
		}

		::System::Boolean CNIKICCCJEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_CNIKICCCJEO_OFFSET))(this);
		}

		::System::Void COPFFBGFBAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_COPFFBGFBAK_OFFSET))(this, a1);
		}

		::System::UInt32 BIHHPNJGMEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_BIHHPNJGMEC_OFFSET))(this);
		}

		::System::Void BEDJDJIMNPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_BEDJDJIMNPA_OFFSET))(this, a1);
		}

		::System::UInt32 KBPMPMKDJAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_KBPMPMKDJAB_OFFSET))(this);
		}

		::System::Void LJPNHMLJKEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_LJPNHMLJKEI_OFFSET))(this, a1);
		}

		::System::UInt32 PDMNDBMHAPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_PDMNDBMHAPF_OFFSET))(this);
		}

		::System::Void GIBPHJHJHIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_GIBPHJHJHIF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCHDLMIOOIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCHDLMIOOIP*))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCHDLMIOOIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCHDLMIOOIP*))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCHDLMIOOIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
