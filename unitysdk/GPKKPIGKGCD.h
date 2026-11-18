#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray4_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define GPKKPIGKGCD_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x7210B0)
#define GPKKPIGKGCD_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x7211E0)
#define GPKKPIGKGCD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x721160)
#define GPKKPIGKGCD__CTOR_OFFSET UNITYSDK_OFFSET(0x7210A0)

inline static constexpr unsigned int GPKKPIGKGCD_TypeDefinitionIndex = 64508;

struct alignas(8) GPKKPIGKGCD
{
	::Foundation::FixedArray4_1<::System::Single> FGPIIAFAFEI; // 0x10

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + GPKKPIGKGCD__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single FCFOEJGPDNO(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPKKPIGKGCD_FCFOEJGPDNO_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + GPKKPIGKGCD_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + GPKKPIGKGCD_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
