#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray4_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define LLAHJMAHNPB_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x784EC0)
#define LLAHJMAHNPB_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x784F60)
#define LLAHJMAHNPB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x784ED0)
#define LLAHJMAHNPB__CTOR_OFFSET UNITYSDK_OFFSET(0x784EB0)

inline static constexpr unsigned int LLAHJMAHNPB_TypeDefinitionIndex = 69928;

struct alignas(8) LLAHJMAHNPB
{
	::System::Single GEINELFJJOA; // 0x10
	::System::Single LIPKGGPGEPH; // 0x14
	::Foundation::FixedArray4_1<::System::Single> FGPIIAFAFEI; // 0x18

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + LLAHJMAHNPB__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single FCFOEJGPDNO(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLAHJMAHNPB_FCFOEJGPDNO_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + LLAHJMAHNPB_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + LLAHJMAHNPB_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
