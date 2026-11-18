#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define CJNMEKEOCAO_FFFMODHMCEJ_OFFSET UNITYSDK_OFFSET(0x73BF80)
#define CJNMEKEOCAO_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x73C0C0)
#define CJNMEKEOCAO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x73C030)
#define CJNMEKEOCAO__CTOR_OFFSET UNITYSDK_OFFSET(0x73BF70)

inline static constexpr unsigned int CJNMEKEOCAO_TypeDefinitionIndex = 60302;

struct alignas(8) CJNMEKEOCAO
{
	::Foundation::FixedArray3_1<::System::Single> MOLPEGFDICG; // 0x10

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + CJNMEKEOCAO__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single FFFMODHMCEJ(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJNMEKEOCAO_FFFMODHMCEJ_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + CJNMEKEOCAO_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + CJNMEKEOCAO_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
