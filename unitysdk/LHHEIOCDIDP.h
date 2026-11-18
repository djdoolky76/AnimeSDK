#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGOCMOMGAPD.h"

namespace MoleMole::Config { class ConfigNpcIkTrait; }

#define LHHEIOCDIDP_DGIKOIKCNKB_OFFSET UNITYSDK_OFFSET(0x12A47ED0)
#define LHHEIOCDIDP_DJDOIPKIKBI_OFFSET UNITYSDK_OFFSET(0x12A482A0)
#define LHHEIOCDIDP_EFMCDJDHPIA_OFFSET UNITYSDK_OFFSET(0x12A48310)
#define LHHEIOCDIDP_EHMOICCPKLH_OFFSET UNITYSDK_OFFSET(0x12A47FA0)
#define LHHEIOCDIDP_EIJNEFNAMBK_OFFSET UNITYSDK_OFFSET(0x12A48220)
#define LHHEIOCDIDP_FGHIANMGPHK_OFFSET UNITYSDK_OFFSET(0x12A48320)
#define LHHEIOCDIDP_HFMDJEJAAFE_OFFSET UNITYSDK_OFFSET(0x12A48260)
#define LHHEIOCDIDP_HNFGKHOOFGE_OFFSET UNITYSDK_OFFSET(0x12A47AF0)
#define LHHEIOCDIDP_IGHLGGBHPPE_OFFSET UNITYSDK_OFFSET(0x12A48290)
#define LHHEIOCDIDP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x12A48280)
#define LHHEIOCDIDP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x12A48250)
#define LHHEIOCDIDP_KKHNKDCKCIL_OFFSET UNITYSDK_OFFSET(0x12A48270)
#define LHHEIOCDIDP_KLHLEFOKDGP_OFFSET UNITYSDK_OFFSET(0x12A48240)
#define LHHEIOCDIDP_LPEDAJBIEDA_OFFSET UNITYSDK_OFFSET(0x12A48340)
#define LHHEIOCDIDP_MALDDNIEEGI_OFFSET UNITYSDK_OFFSET(0x12A48330)
#define LHHEIOCDIDP_OMPPFNGLCBF_OFFSET UNITYSDK_OFFSET(0x12A47C30)
#define LHHEIOCDIDP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12A47E80)
#define LHHEIOCDIDP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12A47AA0)
#define LHHEIOCDIDP_PHCOPIMMGEL_OFFSET UNITYSDK_OFFSET(0x12A48230)
#define LHHEIOCDIDP__CTOR_OFFSET UNITYSDK_OFFSET(0x12A481E0)

inline static constexpr unsigned int LHHEIOCDIDP_TypeDefinitionIndex = 81085;

class LHHEIOCDIDP
{
public:
	::IGOCMOMGAPD _OIOELJLGGBG_k__BackingField; // 0x28
	::System::Boolean _NKMNEHDPBOD_k__BackingField; // 0x2C
	::System::Boolean _EKJGFHIFMOJ_k__BackingField; // 0x2D
	::System::Boolean GAOAMELLJDF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Single _HCFONNPKIPC_k__BackingField; // 0x30
	::System::Single _AMGPJCGLOIC_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean EIJNEFNAMBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_EIJNEFNAMBK_OFFSET))(this);
	}

	::System::Void PHCOPIMMGEL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_PHCOPIMMGEL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single KLHLEFOKDGP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_KLHLEFOKDGP_OFFSET))(this);
	}

	::System::Void HNFGKHOOFGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_HNFGKHOOFGE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void HFMDJEJAAFE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_HFMDJEJAAFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KKHNKDCKCIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_KKHNKDCKCIL_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void DGIKOIKCNKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_DGIKOIKCNKB_OFFSET))(this);
	}

	::IGOCMOMGAPD IGHLGGBHPPE()
	{
		return ((::IGOCMOMGAPD(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_IGHLGGBHPPE_OFFSET))(this);
	}

	::System::Void DJDOIPKIKBI(::MoleMole::Config::ConfigNpcIkTrait* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigNpcIkTrait*))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_DJDOIPKIKBI_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void EFMCDJDHPIA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_EFMCDJDHPIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FGHIANMGPHK(::IGOCMOMGAPD EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IGOCMOMGAPD))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_FGHIANMGPHK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single MALDDNIEEGI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_MALDDNIEEGI_OFFSET))(this);
	}

	::System::Void OMPPFNGLCBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_OMPPFNGLCBF_OFFSET))(this);
	}

	::System::Void LPEDAJBIEDA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_LPEDAJBIEDA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EHMOICCPKLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEIOCDIDP_EHMOICCPKLH_OFFSET))(this);
	}
};
