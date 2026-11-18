#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

#define GKJJHDHELAH_BENPPGDKCMP_OFFSET UNITYSDK_OFFSET(0x654730)
#define GKJJHDHELAH_CFCINGMBCEJ_OFFSET UNITYSDK_OFFSET(0x359150)
#define GKJJHDHELAH_FEKINBJDNBE_OFFSET UNITYSDK_OFFSET(0x6546E0)
#define GKJJHDHELAH_FFCMGLFMEBM_OFFSET UNITYSDK_OFFSET(0x654720)
#define GKJJHDHELAH_FKILHPFEHBK_OFFSET UNITYSDK_OFFSET(0x6546F0)
#define GKJJHDHELAH_JCLBECLDIMC_OFFSET UNITYSDK_OFFSET(0x440210)
#define GKJJHDHELAH_LIMBELDIMDC_OFFSET UNITYSDK_OFFSET(0x359320)
#define GKJJHDHELAH_MCOOJCFKJMG_OFFSET UNITYSDK_OFFSET(0x654700)
#define GKJJHDHELAH_OADHFOAFKEE_OFFSET UNITYSDK_OFFSET(0x654710)
#define GKJJHDHELAH_OCLINMEHBAC_OFFSET UNITYSDK_OFFSET(0x42D920)

inline static constexpr unsigned int GKJJHDHELAH_TypeDefinitionIndex = 58020;

struct alignas(4) GKJJHDHELAH
{
	::MoleMole::Config::BaseProperty _DNBCLBPKHNK_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::Double _NDEFLNAJGGF_k__BackingField; // 0x18
	::System::Double _ABJLGHIFEBH_k__BackingField; // 0x20
	::System::Double _LNKKCEKAGMF_k__BackingField; // 0x28
	::System::Boolean _KKJLNKAJHAL_k__BackingField; // 0x30

	::System::Void CFCINGMBCEJ(::MoleMole::Config::BaseProperty EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + GKJJHDHELAH_CFCINGMBCEJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FEKINBJDNBE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKJJHDHELAH_FEKINBJDNBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double JCLBECLDIMC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJHDHELAH_JCLBECLDIMC_OFFSET))(this);
	}

	::System::Double OCLINMEHBAC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJHDHELAH_OCLINMEHBAC_OFFSET))(this);
	}

	::System::Void FKILHPFEHBK(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GKJJHDHELAH_FKILHPFEHBK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean MCOOJCFKJMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJHDHELAH_MCOOJCFKJMG_OFFSET))(this);
	}

	::MoleMole::Config::BaseProperty LIMBELDIMDC()
	{
		return ((::MoleMole::Config::BaseProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJHDHELAH_LIMBELDIMDC_OFFSET))(this);
	}

	::System::Void OADHFOAFKEE(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GKJJHDHELAH_OADHFOAFKEE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double FFCMGLFMEBM()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJHDHELAH_FFCMGLFMEBM_OFFSET))(this);
	}

	::System::Void BENPPGDKCMP(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GKJJHDHELAH_BENPPGDKCMP_OFFSET))(this, EGEGIMGMJHN);
	}
};
