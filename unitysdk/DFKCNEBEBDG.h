#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define DFKCNEBEBDG_FFFMODHMCEJ_OFFSET UNITYSDK_OFFSET(0x7DFFF0)
#define DFKCNEBEBDG_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x7E0090)
#define DFKCNEBEBDG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7E0000)
#define DFKCNEBEBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0080)

inline static constexpr unsigned int DFKCNEBEBDG_TypeDefinitionIndex = 74117;

struct alignas(8) DFKCNEBEBDG
{
	::System::Single GEINELFJJOA; // 0x10
	::System::Single LIPKGGPGEPH; // 0x14
	::Foundation::FixedArray3_1<::System::Single> MCGKKACGMDD; // 0x18
	::System::Byte _padding0[0x4];
	::Foundation::FixedArray3_1<::System::Single> BAFINFEKOPM; // 0x24

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + DFKCNEBEBDG__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single FFFMODHMCEJ(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFKCNEBEBDG_FFFMODHMCEJ_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + DFKCNEBEBDG_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + DFKCNEBEBDG_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
