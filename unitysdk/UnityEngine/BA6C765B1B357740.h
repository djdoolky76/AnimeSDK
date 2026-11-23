#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define UNITYENGINE_BA6C765B1B357740__CTOR_OFFSET UNITYSDK_OFFSET(0x2D643F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BA6C765B1B357740_TypeDefinitionIndex = 17059;

	struct alignas(4) BA6C765B1B357740
	{
		::UnityEngine::E46B881AA2636190 A5FA8CDBD22AC52F; // 0x10
		::System::Single E08B03F04EFC6266; // 0x20

		::System::Void _ctor(::UnityEngine::E46B881AA2636190 E955C02910D334F4, ::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BA6C765B1B357740__CTOR_OFFSET))(this, E955C02910D334F4, FF0A37159A523E06);
		}
	};
}
