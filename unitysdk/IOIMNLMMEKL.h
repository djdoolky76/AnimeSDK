#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLEFOLJLJJ.h"
#include "unitysdk/OPADOPFDNGD.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class CanvasGroup; }

#define IOIMNLMMEKL_HCJKGBACALF_OFFSET UNITYSDK_OFFSET(0x16AB6440)
#define IOIMNLMMEKL_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x62BE50)
#define IOIMNLMMEKL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x791170)
#define IOIMNLMMEKL__CTOR_OFFSET UNITYSDK_OFFSET(0x791080)

inline static constexpr unsigned int IOIMNLMMEKL_TypeDefinitionIndex = 75927;

struct alignas(8) IOIMNLMMEKL
{
	::UnityEngine::CanvasGroup* KEHECMCDLFC; // 0x10
	::System::Single JAPACFEMANE; // 0x18
	::System::Single LLOJCOLCKJL; // 0x1C
	::INLEFOLJLJJ GJCNOIEHIBG; // 0x20

	::System::Void _ctor(::UnityEngine::CanvasGroup* HODAIDNDKHD, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IOIMNLMMEKL__CTOR_OFFSET))(this, HODAIDNDKHD, KDEHMPGOCEP, PADJNMGMGHO, MDPPNMIPDMP);
	}

	::System::Void _ctor_1(::UnityEngine::CanvasGroup* HODAIDNDKHD, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::INLEFOLJLJJ& JIJFBNLHFGK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single, ::System::Single, ::INLEFOLJLJJ&))((::PBYTE)hIl2Cpp + IOIMNLMMEKL__CTOR_1_OFFSET))(this, HODAIDNDKHD, KDEHMPGOCEP, PADJNMGMGHO, JIJFBNLHFGK);
	}

	/*
	static ::IOIMNLMMEKL HCJKGBACALF(::UnityEngine::CanvasGroup* HODAIDNDKHD, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP, ::OPADOPFDNGD MDEIMMJBCDP)
	{
		return ((::IOIMNLMMEKL(*)(::UnityEngine::CanvasGroup*, ::System::Single, ::System::Single, ::OPADOPFDNGD))((::PBYTE)hIl2Cpp + IOIMNLMMEKL_HCJKGBACALF_OFFSET))(HODAIDNDKHD, PADJNMGMGHO, MDPPNMIPDMP, MDEIMMJBCDP);
	}
	*/

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIMNLMMEKL_PDAADHDFGKP_OFFSET))(this);
	}
};
