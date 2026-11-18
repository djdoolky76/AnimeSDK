#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define FGHCKKKFHHE_PEICADJMJPM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x724FB0)

inline static constexpr unsigned int FGHCKKKFHHE_PEICADJMJPM_TypeDefinitionIndex = 52117;

struct alignas(8) FGHCKKKFHHE_PEICADJMJPM
{
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> BBGMJNFDBPM; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO, ::UnityEngine::Jobs::TransformAccess GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_PEICADJMJPM_EXECUTE_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}
};
