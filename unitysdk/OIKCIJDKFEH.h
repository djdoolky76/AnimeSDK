#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/NMICPPGOBJH.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define OIKCIJDKFEH_APJOAKBFIKF_OFFSET UNITYSDK_OFFSET(0x15FE33C0)
#define OIKCIJDKFEH_CKEEMKGBPBJ_OFFSET UNITYSDK_OFFSET(0x15FE33B0)
#define OIKCIJDKFEH_DPBEHNBMNLC_OFFSET UNITYSDK_OFFSET(0x15FE3500)
#define OIKCIJDKFEH_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x15FE3340)
#define OIKCIJDKFEH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15FE3030)
#define OIKCIJDKFEH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15FE3110)
#define OIKCIJDKFEH_KKKMIDJKFOK_OFFSET UNITYSDK_OFFSET(0x15FE33A0)
#define OIKCIJDKFEH_LCKMHMAHOOE_OFFSET UNITYSDK_OFFSET(0x15FE3190)
#define OIKCIJDKFEH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15FE3470)
#define OIKCIJDKFEH_NAIPNEBFCAJ_OFFSET UNITYSDK_OFFSET(0x15FE32D0)
#define OIKCIJDKFEH_OBMPCAPNBIJ_OFFSET UNITYSDK_OFFSET(0x15FE3640)
#define OIKCIJDKFEH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15FE2EE0)
#define OIKCIJDKFEH_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x15FE2F40)
#define OIKCIJDKFEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE3080)
#define OIKCIJDKFEH__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE3100)

inline static constexpr unsigned int OIKCIJDKFEH_TypeDefinitionIndex = 76826;

class OIKCIJDKFEH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE; // 0x0
	::System::Action_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*>* NEFFJNLKGCL; // 0x48
	::MoleMole::Battle::Entity* AFDBAJEMDFG; // 0x50
	::MoleMole::Battle::Entity* POAGOOKGABI; // 0x58
	::System::Action_5<::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double>* BPHODFCHLDK; // 0x60
	::MoleMole::Config::BuddyTeamType GNFNMLOFNML; // 0x68
	::System::UInt32 BNJIAGILAGG; // 0x6C
	::System::Boolean FIBDHFDNIEB; // 0x70
	::System::Boolean BMOMKHGODEM; // 0x71
	::System::Boolean _HBMCIMHMKJI_k__BackingField; // 0x72
	::System::Byte _padding0[0x1];
	::NMICPPGOBJH DNNJCFLLECI; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIKCIJDKFEH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_ONCLEAN_OFFSET))(this);
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 PPJIIBGDNAP, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, PPJIIBGDNAP, OBNIAHNMHPF, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_GETCLASSID_OFFSET))(this);
	}

	static ::OIKCIJDKFEH* JFDOOELFAOA()
	{
		return ((::OIKCIJDKFEH*(*)())((::PBYTE)hIl2Cpp + OIKCIJDKFEH_JFDOOELFAOA_OFFSET))();
	}

	::MoleMole::Battle::Entity* LCKMHMAHOOE()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_LCKMHMAHOOE_OFFSET))(this);
	}

	::System::Void NAIPNEBFCAJ(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_NAIPNEBFCAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::NMICPPGOBJH DNNJCFLLECI, ::MoleMole::Config::BuddyTeamType GNFNMLOFNML, ::System::Boolean NBFMPCDJINH)
	{
		return ((::System::Void(*)(::PVOID, ::NMICPPGOBJH, ::MoleMole::Config::BuddyTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_GALGFCPKMGC_OFFSET))(this, DNNJCFLLECI, GNFNMLOFNML, NBFMPCDJINH);
	}

	::System::Boolean KKKMIDJKFOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_KKKMIDJKFOK_OFFSET))(this);
	}

	::System::Void CKEEMKGBPBJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_CKEEMKGBPBJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void APJOAKBFIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_APJOAKBFIKF_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void DPBEHNBMNLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_DPBEHNBMNLC_OFFSET))(this);
	}

	::System::Boolean OBMPCAPNBIJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCIJDKFEH_OBMPCAPNBIJ_OFFSET))(this);
	}
};
