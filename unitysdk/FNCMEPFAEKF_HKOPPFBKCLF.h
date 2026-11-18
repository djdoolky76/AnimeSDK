#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FNCMEPFAEKF_HKOPPFBKCLF_COMPARE_OFFSET UNITYSDK_OFFSET(0x6C2AC0)
#define FNCMEPFAEKF_HKOPPFBKCLF__CTOR_OFFSET UNITYSDK_OFFSET(0x358800)

inline static constexpr unsigned int FNCMEPFAEKF_HKOPPFBKCLF_TypeDefinitionIndex = 50728;

struct alignas(4) FNCMEPFAEKF_HKOPPFBKCLF
{
	::System::Single MHIBJAKLALH; // 0x10

	::System::Void _ctor(::System::Single LFGNKEBFFBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_HKOPPFBKCLF__CTOR_OFFSET))(this, LFGNKEBFFBB);
	}

	::System::Int32 Compare(::UnityEngine::Vector2 KILPCOMOCMD, ::UnityEngine::Vector2 BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_HKOPPFBKCLF_COMPARE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
