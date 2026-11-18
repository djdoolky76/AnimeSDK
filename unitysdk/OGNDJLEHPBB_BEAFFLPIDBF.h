#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMDAEPNIIEE.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class AnimCurveParam; }

#define OGNDJLEHPBB_BEAFFLPIDBF_ALCHCNHLCOK_OFFSET UNITYSDK_OFFSET(0x702330)
#define OGNDJLEHPBB_BEAFFLPIDBF_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x778750)
#define OGNDJLEHPBB_BEAFFLPIDBF_BDIMJLIPICL_OFFSET UNITYSDK_OFFSET(0x3CF550)
#define OGNDJLEHPBB_BEAFFLPIDBF_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x778770)
#define OGNDJLEHPBB_BEAFFLPIDBF_IGMOCLGENLA_OFFSET UNITYSDK_OFFSET(0x359720)
#define OGNDJLEHPBB_BEAFFLPIDBF_LEHBBHCDIPG_OFFSET UNITYSDK_OFFSET(0x408720)
#define OGNDJLEHPBB_BEAFFLPIDBF_MBCJCMKLKOH_OFFSET UNITYSDK_OFFSET(0x6ADB00)
#define OGNDJLEHPBB_BEAFFLPIDBF_MLGCPLEIKIG_OFFSET UNITYSDK_OFFSET(0x3CEBD0)
#define OGNDJLEHPBB_BEAFFLPIDBF_NBBPHLBEOMO_OFFSET UNITYSDK_OFFSET(0x3593F0)
#define OGNDJLEHPBB_BEAFFLPIDBF_OLLOMKPLHIK_OFFSET UNITYSDK_OFFSET(0x778760)

inline static constexpr unsigned int OGNDJLEHPBB_BEAFFLPIDBF_TypeDefinitionIndex = 87856;

struct alignas(8) OGNDJLEHPBB_BEAFFLPIDBF
{
	::MoleMole::UICameraAtom _FKEDEGKBAIJ_k__BackingField; // 0x10
	::MoleMole::Config::AnimCurveParam* _CKFLOKPBGGM_k__BackingField; // 0x30
	::MoleMole::Config::AnimCurveParam* _PODAMMMAGPE_k__BackingField; // 0x38
	::MoleMole::Config::AnimCurveParam* _LGNOHOOJIJD_k__BackingField; // 0x40
	::GMDAEPNIIEE _HBLEIHCPMMP_k__BackingField; // 0x48

	::System::Void NBBPHLBEOMO(::MoleMole::UICameraAtom EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_NBBPHLBEOMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::GMDAEPNIIEE APCKPKCNFJE()
	{
		return ((::GMDAEPNIIEE(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_APCKPKCNFJE_OFFSET))(this);
	}

	::MoleMole::UICameraAtom IGMOCLGENLA()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_IGMOCLGENLA_OFFSET))(this);
	}

	::System::Void OLLOMKPLHIK(::MoleMole::Config::AnimCurveParam* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimCurveParam*))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_OLLOMKPLHIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::AnimCurveParam* LEHBBHCDIPG()
	{
		return ((::MoleMole::Config::AnimCurveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_LEHBBHCDIPG_OFFSET))(this);
	}

	::MoleMole::Config::AnimCurveParam* MLGCPLEIKIG()
	{
		return ((::MoleMole::Config::AnimCurveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_MLGCPLEIKIG_OFFSET))(this);
	}

	::MoleMole::Config::AnimCurveParam* BDIMJLIPICL()
	{
		return ((::MoleMole::Config::AnimCurveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_BDIMJLIPICL_OFFSET))(this);
	}

	::System::Void ALCHCNHLCOK(::MoleMole::Config::AnimCurveParam* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimCurveParam*))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_ALCHCNHLCOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DFIBDGKNBMP(::GMDAEPNIIEE EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GMDAEPNIIEE))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MBCJCMKLKOH(::MoleMole::Config::AnimCurveParam* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimCurveParam*))((::PBYTE)hIl2Cpp + OGNDJLEHPBB_BEAFFLPIDBF_MBCJCMKLKOH_OFFSET))(this, EGEGIMGMJHN);
	}
};
