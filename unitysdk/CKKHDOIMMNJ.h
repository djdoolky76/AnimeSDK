#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFHGMKOGNG.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RenderTexture; }

#define CKKHDOIMMNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x46C710)

inline static constexpr unsigned int CKKHDOIMMNJ_TypeDefinitionIndex = 64137;

struct alignas(8) CKKHDOIMMNJ
{
	::CAFHGMKOGNG ENDKPBEFBME; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::RenderTexture* CFBOPECEMDC; // 0x18

	::System::Void _ctor(::UnityEngine::RenderTexture* FJEEKLKBFHN, ::CAFHGMKOGNG DMJBFBDLKIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::CAFHGMKOGNG))((::PBYTE)hIl2Cpp + CKKHDOIMMNJ__CTOR_OFFSET))(this, FJEEKLKBFHN, DMJBFBDLKIN);
	}
};
