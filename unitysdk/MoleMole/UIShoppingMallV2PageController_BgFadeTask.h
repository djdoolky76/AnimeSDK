#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIShoppingMallV2PageController_BgAnimationState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LOKLFPPFFPO.h"

#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER_BGFADETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallV2PageController_BgFadeTask_TypeDefinitionIndex = 77168;

	struct alignas(4) UIShoppingMallV2PageController_BgFadeTask
	{
		::MoleMole::UIShoppingMallV2PageController_BgAnimationState AnimationState; // 0x10

		::System::Void _ctor(::MoleMole::UIShoppingMallV2PageController_BgAnimationState state, ::LOKLFPPFFPO targetTabGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIShoppingMallV2PageController_BgAnimationState, ::LOKLFPPFFPO))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER_BGFADETASK__CTOR_OFFSET))(this, state, targetTabGroupData);
		}
	};
}
