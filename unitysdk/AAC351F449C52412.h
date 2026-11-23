#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AAC351F449C52412_EB87D382B393BF5A_OFFSET UNITYSDK_OFFSET(0x26351A0)
#define AAC351F449C52412_FEF52257D4CBD6BB_OFFSET UNITYSDK_OFFSET(0x2635080)

inline static constexpr unsigned int AAC351F449C52412_TypeDefinitionIndex = 6051;

struct alignas(4) AAC351F449C52412
{
	::UnityEngine::Vector3 F992283872969A10; // 0x10
	::UnityEngine::Vector3 A85A1122CA554D2D; // 0x1C
	::UnityEngine::Vector3 FF370D5436AFF6B9; // 0x28
	::UnityEngine::Vector3 EC7C3BAD2FF64F75; // 0x34

	::UnityEngine::Vector3 EB87D382B393BF5A(::System::Single BBCFEC7DB309E927)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAC351F449C52412_EB87D382B393BF5A_OFFSET))(this, BBCFEC7DB309E927);
	}

	::UnityEngine::Vector3 FEF52257D4CBD6BB(::System::Single BBCFEC7DB309E927)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAC351F449C52412_FEF52257D4CBD6BB_OFFSET))(this, BBCFEC7DB309E927);
	}
};
