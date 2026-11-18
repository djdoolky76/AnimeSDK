#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define KEEALPHMJIP_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x6FB170)
#define KEEALPHMJIP_MPPFDGIKINE_OFFSET UNITYSDK_OFFSET(0x6FB070)
#define KEEALPHMJIP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6FB100)
#define KEEALPHMJIP_OAJJFNNGLJD_OFFSET UNITYSDK_OFFSET(0x6FB0F0)
#define KEEALPHMJIP_OMLBLFGFFPL_OFFSET UNITYSDK_OFFSET(0x358A70)
#define KEEALPHMJIP__CTOR_OFFSET UNITYSDK_OFFSET(0x6FB050)

inline static constexpr unsigned int KEEALPHMJIP_TypeDefinitionIndex = 78229;

struct alignas(4) KEEALPHMJIP
{
	::System::Single EJHAAFNCPIH; // 0x10

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + KEEALPHMJIP__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single MPPFDGIKINE(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEEALPHMJIP_MPPFDGIKINE_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Single OAJJFNNGLJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEALPHMJIP_OAJJFNNGLJD_OFFSET))(this);
	}

	::System::Single OMLBLFGFFPL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEALPHMJIP_OMLBLFGFFPL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + KEEALPHMJIP_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + KEEALPHMJIP_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
