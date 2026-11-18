#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGOLKBHLMLB.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define NLEADNBMGIE_BNOMIHAHMPB_OFFSET UNITYSDK_OFFSET(0xED314E0)
#define NLEADNBMGIE_EFIHDPPKOGO_OFFSET UNITYSDK_OFFSET(0xED315B0)
#define NLEADNBMGIE_IECCGEHLFCO_OFFSET UNITYSDK_OFFSET(0xED31420)
#define NLEADNBMGIE_LHCIKCHCNEF_OFFSET UNITYSDK_OFFSET(0xED316F0)
#define NLEADNBMGIE_LHDADKDGBNP_OFFSET UNITYSDK_OFFSET(0xED31540)
#define NLEADNBMGIE_LPPLBMAMAHN_OFFSET UNITYSDK_OFFSET(0xED31810)
#define NLEADNBMGIE_MALLIOHBKEJ_OFFSET UNITYSDK_OFFSET(0xED31820)
#define NLEADNBMGIE_MKMNJBIFBBI_OFFSET UNITYSDK_OFFSET(0xED31770)
#define NLEADNBMGIE_OMCEMIFCFGN_OFFSET UNITYSDK_OFFSET(0xED31650)
#define NLEADNBMGIE_PIGADFPOLNM_OFFSET UNITYSDK_OFFSET(0xED31480)
#define NLEADNBMGIE__CTOR_OFFSET UNITYSDK_OFFSET(0xED315A0)

inline static constexpr unsigned int NLEADNBMGIE_TypeDefinitionIndex = 53925;

class NLEADNBMGIE : public ::OGOLKBHLMLB
{
public:
	::UnityEngine::Vector2 KEKLBHHFDGI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEADNBMGIE__CTOR_OFFSET))(this);
	}

	::System::Single IECCGEHLFCO(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_IECCGEHLFCO_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single PIGADFPOLNM(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_PIGADFPOLNM_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single BNOMIHAHMPB(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_BNOMIHAHMPB_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single LHDADKDGBNP(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_LHDADKDGBNP_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single EFIHDPPKOGO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_EFIHDPPKOGO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single OMCEMIFCFGN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_OMCEMIFCFGN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LHCIKCHCNEF(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NLEADNBMGIE_LHCIKCHCNEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single MKMNJBIFBBI(::System::Single MIALFKCCCPI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_MKMNJBIFBBI_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Vector2 LPPLBMAMAHN()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEADNBMGIE_LPPLBMAMAHN_OFFSET))(this);
	}

	::System::Single MALLIOHBKEJ(::System::Single MIALFKCCCPI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLEADNBMGIE_MALLIOHBKEJ_OFFSET))(this, MIALFKCCCPI);
	}
};
