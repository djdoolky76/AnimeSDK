#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1266F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardRowWidgetController_Context_TypeDefinitionIndex = 95065;

	class UIBallGameIconCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
