#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DCFKHKBLIMA;

#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147F35A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryPropertyDescWidgetController_Context_TypeDefinitionIndex = 73023;

	class UIRABDepositoryPropertyDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DCFKHKBLIMA* BuddyData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
