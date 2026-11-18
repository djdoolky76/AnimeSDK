#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BCPLJJIAKMO;

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMRIGHTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFD710)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemRightWidgetControllerContext_TypeDefinitionIndex = 73619;

	class UIActivityHotpotFoodItemRightWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BCPLJJIAKMO* FoodCfg; // 0x28
		::System::Single BoilRatio; // 0x30
		::System::Single FoodScore; // 0x34
		::System::Boolean ShowBoilRoot; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMRIGHTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
