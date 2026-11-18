#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define OCCBEABHOAN_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x777050)
#define OCCBEABHOAN_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x777110)
#define OCCBEABHOAN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7770B0)
#define OCCBEABHOAN__CTOR_OFFSET UNITYSDK_OFFSET(0x777040)

inline static constexpr unsigned int OCCBEABHOAN_TypeDefinitionIndex = 72235;

struct alignas(4) OCCBEABHOAN
{
	::System::Single HHGILNNMNAK; // 0x10

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + OCCBEABHOAN__CTOR_OFFSET))(this, FFKBEGIHIGG);
	}

	::System::Single FCFOEJGPDNO(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCCBEABHOAN_FCFOEJGPDNO_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + OCCBEABHOAN_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + OCCBEABHOAN_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
