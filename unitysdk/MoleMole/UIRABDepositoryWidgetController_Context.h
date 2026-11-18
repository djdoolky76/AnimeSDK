#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16778DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryWidgetController_Context_TypeDefinitionIndex = 67763;

	class UIRABDepositoryWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SelectBuddyConfigId; // 0x28
		::DPHLOBCHIEA ContextHandle; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
