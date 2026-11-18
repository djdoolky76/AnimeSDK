#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define KDACPOHLKJL_BMJLJBBAECJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x750A00)

inline static constexpr unsigned int KDACPOHLKJL_BMJLJBBAECJ_TypeDefinitionIndex = 65697;

struct alignas(8) KDACPOHLKJL_BMJLJBBAECJ
{
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> DPLLBIGGBIP; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO, ::UnityEngine::Jobs::TransformAccess GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + KDACPOHLKJL_BMJLJBBAECJ_EXECUTE_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}
};
