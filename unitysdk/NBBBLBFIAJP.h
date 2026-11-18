#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define NBBBLBFIAJP_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x808890)
#define NBBBLBFIAJP__CTOR_OFFSET UNITYSDK_OFFSET(0x808800)

inline static constexpr unsigned int NBBBLBFIAJP_TypeDefinitionIndex = 71317;

struct alignas(4) NBBBLBFIAJP
{
	::System::Boolean ICNMNPFEHKL; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Color OINIGOFIAHO; // 0x14
	::UnityEngine::Color ECFMAHOJFEO; // 0x24

	::System::Void _ctor(::System::Boolean PMMGNOPPGEK, ::UnityEngine::Color HFMLCJALFCK, ::UnityEngine::Color JHKOJDMCMFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NBBBLBFIAJP__CTOR_OFFSET))(this, PMMGNOPPGEK, HFMLCJALFCK, JHKOJDMCMFB);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBBLBFIAJP_GPKMPDHNCGL_OFFSET))(this);
	}
};
