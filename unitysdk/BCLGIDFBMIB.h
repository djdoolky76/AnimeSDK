#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define BCLGIDFBMIB_FFFMODHMCEJ_OFFSET UNITYSDK_OFFSET(0x5E6590)
#define BCLGIDFBMIB_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x5E6650)
#define BCLGIDFBMIB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x5E65F0)

inline static constexpr unsigned int BCLGIDFBMIB_TypeDefinitionIndex = 60905;

struct alignas(4) BCLGIDFBMIB
{
	::System::Single FFFMODHMCEJ(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCLGIDFBMIB_FFFMODHMCEJ_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + BCLGIDFBMIB_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + BCLGIDFBMIB_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
