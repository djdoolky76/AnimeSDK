#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EECAE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameToolbarBOSSWidgetController_Context_TypeDefinitionIndex = 95106;

	class UIBallGameToolbarBOSSWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
