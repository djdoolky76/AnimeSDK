#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIScaryNightInLevelBaseCardWidgetController_Context.h"

class MonoUITableScrollV2;

#define MOLEMOLE_UISCARYNIGHTINLEVELBIGCARDWIDGETCONTROLLER_EVENTPANELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1889A630)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelBigCardWidgetController_EventPanelContext_TypeDefinitionIndex = 83192;

	class UIScaryNightInLevelBigCardWidgetController_EventPanelContext : public ::MoleMole::UIScaryNightInLevelBaseCardWidgetController_Context
	{
	public:
		::MonoUITableScrollV2* ParentScrollView; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBIGCARDWIDGETCONTROLLER_EVENTPANELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
