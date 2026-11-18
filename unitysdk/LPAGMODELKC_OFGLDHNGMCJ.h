#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/Cinemachine/LensSettings.h"

#define LPAGMODELKC_OFGLDHNGMCJ_HIALFBMNIGM_OFFSET UNITYSDK_OFFSET(0x748E20)
#define LPAGMODELKC_OFGLDHNGMCJ_PKBPHMDIPIO_OFFSET UNITYSDK_OFFSET(0x748E60)

inline static constexpr unsigned int LPAGMODELKC_OFGLDHNGMCJ_TypeDefinitionIndex = 58280;

struct alignas(4) LPAGMODELKC_OFGLDHNGMCJ
{
	::UnityEngine::Rect BJGJDONDJNL; // 0x10
	::UnityEngine::Rect NCFMHBEHNFL; // 0x20
	::System::Single OGCENAKFFHG; // 0x30
	::System::Single GJGHMJMIFDP; // 0x34
	::System::Single POABJAGPEDC; // 0x38
	::System::Single LAMNKHHFDOH; // 0x3C
	::UnityEngine::Rect IALJBPINFHD; // 0x40
	::UnityEngine::Rect LCPDHMMINMI; // 0x50

	::UnityEngine::Rect HIALFBMNIGM(::UnityEngine::Rect EFJIJAKONMI, ::System::Single ECMOEENIHME, ::System::Single BKGFICGJCGF, ::System::Single KHPPKNBOGIB)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_OFGLDHNGMCJ_HIALFBMNIGM_OFFSET))(this, EFJIJAKONMI, ECMOEENIHME, BKGFICGJCGF, KHPPKNBOGIB);
	}

	::System::Void PKBPHMDIPIO(::Cinemachine::LensSettings FJPNEGOEHBN, ::UnityEngine::Rect DKGABENLOJL, ::UnityEngine::Rect MHHDMNNNMEI, ::System::Single PGKMDKFHFMH)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings, ::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_OFGLDHNGMCJ_PKBPHMDIPIO_OFFSET))(this, FJPNEGOEHBN, DKGABENLOJL, MHHDMNNNMEI, PGKMDKFHFMH);
	}
};
