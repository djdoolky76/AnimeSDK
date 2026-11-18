#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ANAAPIFINJE;
namespace UnityEngine { class Material; }

#define PEFLGMDFCKM_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x7E0610)
#define PEFLGMDFCKM__CTOR_OFFSET UNITYSDK_OFFSET(0x3A07D0)

inline static constexpr unsigned int PEFLGMDFCKM_TypeDefinitionIndex = 82006;

struct alignas(8) PEFLGMDFCKM
{
	::ANAAPIFINJE* EFFAONJBCOG; // 0x10
	::System::Single MAEKHCIBIBD; // 0x18

	::System::Void _ctor(::ANAAPIFINJE* LJBPECKCCEA, ::System::Single BFGHPIFHKAO)
	{
		return ((::System::Void(*)(::PVOID, ::ANAAPIFINJE*, ::System::Single))((::PBYTE)hIl2Cpp + PEFLGMDFCKM__CTOR_OFFSET))(this, LJBPECKCCEA, BFGHPIFHKAO);
	}

	::System::Void JLIMOLHLFAK(::UnityEngine::Material* KCJLLHBJJKJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PEFLGMDFCKM_JLIMOLHLFAK_OFFSET))(this, KCJLLHBJJKJ);
	}
};
