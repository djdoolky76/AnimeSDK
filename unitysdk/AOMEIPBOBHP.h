#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define AOMEIPBOBHP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9720C0)

inline static constexpr unsigned int AOMEIPBOBHP_TypeDefinitionIndex = 8026;

struct alignas(4) AOMEIPBOBHP
{
	::System::Int32 MOINKMGDCNO; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO, ::UnityEngine::Jobs::TransformAccess GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + AOMEIPBOBHP_EXECUTE_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}
};
