#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1057F100)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMarketPurchaseHistoryWidgetController_Context_TypeDefinitionIndex = 48885;

	class UIZenkovMarketPurchaseHistoryWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* OnUpdateScrollViewSwitchPlatformUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
