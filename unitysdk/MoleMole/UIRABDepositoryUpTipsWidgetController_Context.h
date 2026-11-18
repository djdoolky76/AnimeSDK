#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NPAAPNEKAEP.h"

#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF3C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryUpTipsWidgetController_Context_TypeDefinitionIndex = 82755;

	class UIRABDepositoryUpTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NPAAPNEKAEP ChangeValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
