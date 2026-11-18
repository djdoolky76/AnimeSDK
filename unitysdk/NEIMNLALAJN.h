#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define NEIMNLALAJN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x6E98A0)
#define NEIMNLALAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x3DDCF0)

inline static constexpr unsigned int NEIMNLALAJN_TypeDefinitionIndex = 52390;

struct alignas(8) NEIMNLALAJN
{
	::UnityEngine::Camera* KONLMDBCDCK; // 0x10
	::UnityEngine::RectTransform* CFNBMEDKDGO; // 0x18
	::UnityEngine::RectTransform* KNDHFNCHIAP; // 0x20

	::System::Void _ctor(::UnityEngine::Camera* LLFDABJAHII, ::UnityEngine::RectTransform* NFIOCAACPOH, ::UnityEngine::RectTransform* CPLJMNFCJGL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NEIMNLALAJN__CTOR_OFFSET))(this, LLFDABJAHII, NFIOCAACPOH, CPLJMNFCJGL);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMNLALAJN_PHOADBJGFBE_OFFSET))(this);
	}
};
