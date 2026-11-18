#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVBATTLEINFOTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1671A070)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBattleInfoTipsWidgetController_Context_TypeDefinitionIndex = 40792;

	class UIZenkovBattleInfoTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowInMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATTLEINFOTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
