#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLBNGBNHCCD.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"

class FCBNEBOPNIF;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ALHAPODEOKO_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x134E1590)
#define ALHAPODEOKO_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x134E13A0)
#define ALHAPODEOKO_HJBCJGIFIMO_OFFSET UNITYSDK_OFFSET(0x134E1320)
#define ALHAPODEOKO_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x134E1710)
#define ALHAPODEOKO_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x134E1700)
#define ALHAPODEOKO_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x134E1400)
#define ALHAPODEOKO_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x134E1310)
#define ALHAPODEOKO_MADBJJAGDCH_OFFSET UNITYSDK_OFFSET(0x134E1380)
#define ALHAPODEOKO_NKPAIGDICAK_OFFSET UNITYSDK_OFFSET(0x134E1390)
#define ALHAPODEOKO_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x134E1660)
#define ALHAPODEOKO__CTOR_OFFSET UNITYSDK_OFFSET(0x134E1650)

inline static constexpr unsigned int ALHAPODEOKO_TypeDefinitionIndex = 55653;

class ALHAPODEOKO : public ::KLBNGBNHCCD
{
public:
	::System::Int32 _KPIAMNLGAMC_k__BackingField; // 0x318

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHAPODEOKO__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHAPODEOKO_LJEEJABBAHD_OFFSET))(this);
	}

	::System::String* HJBCJGIFIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHAPODEOKO_HJBCJGIFIMO_OFFSET))(this);
	}

	::System::Int32 MADBJJAGDCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHAPODEOKO_MADBJJAGDCH_OFFSET))(this);
	}

	::System::Void NKPAIGDICAK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALHAPODEOKO_NKPAIGDICAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ALHAPODEOKO_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHAPODEOKO_JLHBKJKDGDE_OFFSET))(this);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ALHAPODEOKO_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ALHAPODEOKO_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHAPODEOKO_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ALHAPODEOKO_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}
};
