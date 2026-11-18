#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OKJBFPAGNAF;

#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A120E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCombatRowWidgetController_Context_TypeDefinitionIndex = 58133;

	class UIActivityHotPotCombatRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OKJBFPAGNAF* Data; // 0x28
		::System::Boolean FirstClick; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 HotpotLevelID; // 0x34
		::System::Int32 Rank; // 0x38
		::System::Int32 BestScore; // 0x3C
		::System::Single RankPercent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
