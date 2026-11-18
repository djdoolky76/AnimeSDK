#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMEICONCARDROW02WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEE190)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardRow02WidgetController_Context_TypeDefinitionIndex = 94907;

	class UIBallGameIconCardRow02WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROW02WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
