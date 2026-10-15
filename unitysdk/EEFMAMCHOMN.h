#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFMAMCHOMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEFMAMCHOMN_ANIKNPPGIDE_OFFSET UNITYSDK_OFFSET(0x1E267E20)
#define EEFMAMCHOMN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1E267DB0)
#define EEFMAMCHOMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E268420)
#define EEFMAMCHOMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2689C0)
#define EEFMAMCHOMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E267D20)
#define EEFMAMCHOMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E267CD0)
#define EEFMAMCHOMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E267CC0)
#define EEFMAMCHOMN_DFJKOGJIALE_OFFSET UNITYSDK_OFFSET(0x1E267E50)
#define EEFMAMCHOMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E267F60)
#define EEFMAMCHOMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E267ED0)
#define EEFMAMCHOMN_FEKKBJDOJDE_OFFSET UNITYSDK_OFFSET(0x1E267DE0)
#define EEFMAMCHOMN_FENDLAFCNPE_OFFSET UNITYSDK_OFFSET(0x1E267DD0)
#define EEFMAMCHOMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E267FE0)
#define EEFMAMCHOMN_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1E267DC0)
#define EEFMAMCHOMN_HLHJBEPAFFM_OFFSET UNITYSDK_OFFSET(0x1E267E40)
#define EEFMAMCHOMN_HLOJLCPCAAE_OFFSET UNITYSDK_OFFSET(0x1E267E60)
#define EEFMAMCHOMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E267C80)
#define EEFMAMCHOMN_KNGJFHKOLEO_OFFSET UNITYSDK_OFFSET(0x1E267E30)
#define EEFMAMCHOMN_LBFJLDGLNBI_OFFSET UNITYSDK_OFFSET(0x1E267E10)
#define EEFMAMCHOMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E268860)
#define EEFMAMCHOMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2687D0)
#define EEFMAMCHOMN_NGJEAOHOMED_OFFSET UNITYSDK_OFFSET(0x1E267D90)
#define EEFMAMCHOMN_OBBDCHIPOKF_OFFSET UNITYSDK_OFFSET(0x1E267DA0)
#define EEFMAMCHOMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E267CB0)
#define EEFMAMCHOMN_PJFLPGEMNEK_OFFSET UNITYSDK_OFFSET(0x1E267DF0)
#define EEFMAMCHOMN_PKILLOAFBGE_OFFSET UNITYSDK_OFFSET(0x1E267E80)
#define EEFMAMCHOMN_PLHEMJDOHGD_OFFSET UNITYSDK_OFFSET(0x1E267E00)
#define EEFMAMCHOMN_PPOCIGAAPMC_OFFSET UNITYSDK_OFFSET(0x1E267E70)
#define EEFMAMCHOMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2680B0)
#define EEFMAMCHOMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E268110)

	class EEFMAMCHOMN : public ::System::Object
	{
	public:
		::System::String* KOHLFMGBIEM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GDDAHMLCCMK; // 0x20
		::System::UInt32 CLADFMOEPCK; // 0x24
		::System::UInt32 KLKLECBGCAD; // 0x28
		::System::UInt32 PAONNOJABEB; // 0x2C
		::System::UInt32 HHKEHNKMILI; // 0x30
		::System::UInt32 HHAMLDMFAGJ; // 0x34
		::System::UInt32 PBINJKKIHJH; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EEFMAMCHOMN")->GetStaticField(0x178C0);
		}

		// static const ::System::Object JHLJPNJDKPE; // 0x0
		// static const ::System::Object MIPCBMDOFEN; // 0x0
		// static const ::System::Object EDNEODGIOLH; // 0x0
		// static const ::System::Object NOAIPDOKDEA; // 0x0
		// static const ::System::Object IPPEKMLENLA; // 0x0
		// static const ::System::Object HCNNIHOAGEM; // 0x0
		// static const ::System::Object BCLPNIINGPF; // 0x0
		// static const ::System::Object GMONBBNINOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEFMAMCHOMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFMAMCHOMN*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFMAMCHOMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EEFMAMCHOMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEFMAMCHOMN* Clone()
		{
			return ((::EEFMAMCHOMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NGJEAOHOMED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_NGJEAOHOMED_OFFSET))(this);
		}

		::System::Void OBBDCHIPOKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_OBBDCHIPOKF_OFFSET))(this, a1);
		}

		::System::UInt32 BGDKFHEBDFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::UInt32 FENDLAFCNPE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_FENDLAFCNPE_OFFSET))(this);
		}

		::System::Void FEKKBJDOJDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_FEKKBJDOJDE_OFFSET))(this, a1);
		}

		::System::UInt32 PJFLPGEMNEK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_PJFLPGEMNEK_OFFSET))(this);
		}

		::System::Void PLHEMJDOHGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_PLHEMJDOHGD_OFFSET))(this, a1);
		}

		::System::UInt32 LBFJLDGLNBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_LBFJLDGLNBI_OFFSET))(this);
		}

		::System::Void ANIKNPPGIDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_ANIKNPPGIDE_OFFSET))(this, a1);
		}

		::System::UInt32 KNGJFHKOLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_KNGJFHKOLEO_OFFSET))(this);
		}

		::System::Void HLHJBEPAFFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_HLHJBEPAFFM_OFFSET))(this, a1);
		}

		::System::UInt32 DFJKOGJIALE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_DFJKOGJIALE_OFFSET))(this);
		}

		::System::Void HLOJLCPCAAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_HLOJLCPCAAE_OFFSET))(this, a1);
		}

		::System::String* PPOCIGAAPMC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_PPOCIGAAPMC_OFFSET))(this);
		}

		::System::Void PKILLOAFBGE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_PKILLOAFBGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEFMAMCHOMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEFMAMCHOMN*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEFMAMCHOMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFMAMCHOMN*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEFMAMCHOMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
