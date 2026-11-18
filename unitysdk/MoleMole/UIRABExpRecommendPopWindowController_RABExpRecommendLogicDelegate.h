#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate.h"

#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_RABEXPRECOMMENDLOGICDELEGATE_SETDESC_OFFSET UNITYSDK_OFFSET(0x147F5800)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_RABEXPRECOMMENDLOGICDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x147F5AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpRecommendPopWindowController_RABExpRecommendLogicDelegate_TypeDefinitionIndex = 56891;

	class UIRABExpRecommendPopWindowController_RABExpRecommendLogicDelegate : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_RABEXPRECOMMENDLOGICDELEGATE__CTOR_OFFSET))(this);
		}

		::System::Void SetDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_RABEXPRECOMMENDLOGICDELEGATE_SETDESC_OFFSET))(this);
		}
	};
}
