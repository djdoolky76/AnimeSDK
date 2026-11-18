#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A140620)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController_PrepPageContext_TypeDefinitionIndex = 72404;

	class UIAutoBattlePrepPageController_PrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnUIOpen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
