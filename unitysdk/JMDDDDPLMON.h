#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FGCOIBFFCHB;
namespace UnityEngine { class Material; }

#define JMDDDDPLMON__CTOR_OFFSET UNITYSDK_OFFSET(0x75E070)

inline static constexpr unsigned int JMDDDDPLMON_TypeDefinitionIndex = 55617;

struct alignas(8) JMDDDDPLMON
{
	::FGCOIBFFCHB* KEHECMCDLFC; // 0x10
	::UnityEngine::Material* EIHICLBDHCB; // 0x18

	::System::Void _ctor(::FGCOIBFFCHB* HODAIDNDKHD, ::UnityEngine::Material* AEIHFBNNLBP)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + JMDDDDPLMON__CTOR_OFFSET))(this, HODAIDNDKHD, AEIHFBNNLBP);
	}
};
