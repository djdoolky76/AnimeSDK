#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C470)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameFillWidgetController_Context_TypeDefinitionIndex = 95041;

	class UIBallGameFillWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
