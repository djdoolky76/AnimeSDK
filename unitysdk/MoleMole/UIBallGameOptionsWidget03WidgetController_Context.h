#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMEOPTIONSWIDGET03WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5FE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsWidget03WidgetController_Context_TypeDefinitionIndex = 94915;

	class UIBallGameOptionsWidget03WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28
		::System::Int32 Index; // 0x30
		::System::Int32 BulletID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSWIDGET03WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
