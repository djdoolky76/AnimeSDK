#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FNCMEPFAEKF_DEGPELHMCLL_COMPARE_OFFSET UNITYSDK_OFFSET(0x682400)
#define FNCMEPFAEKF_DEGPELHMCLL__CTOR_OFFSET UNITYSDK_OFFSET(0x358800)

inline static constexpr unsigned int FNCMEPFAEKF_DEGPELHMCLL_TypeDefinitionIndex = 50727;

struct alignas(4) FNCMEPFAEKF_DEGPELHMCLL
{
	::System::Single MHIBJAKLALH; // 0x10

	::System::Void _ctor(::System::Single LFGNKEBFFBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_DEGPELHMCLL__CTOR_OFFSET))(this, LFGNKEBFFBB);
	}

	::System::Int32 Compare(::UnityEngine::Vector2 KILPCOMOCMD, ::UnityEngine::Vector2 BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_DEGPELHMCLL_COMPARE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
