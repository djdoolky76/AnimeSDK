#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define FMPEMEANLPJ_LAADEIFHMAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6BE8C0)

inline static constexpr unsigned int FMPEMEANLPJ_LAADEIFHMAH_TypeDefinitionIndex = 62191;

struct alignas(4) FMPEMEANLPJ_LAADEIFHMAH
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO, ::UnityEngine::Jobs::TransformAccess GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + FMPEMEANLPJ_LAADEIFHMAH_EXECUTE_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}
};
