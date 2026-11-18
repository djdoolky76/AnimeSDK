#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GADAMOACKNE;

#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F07260)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTaskWidgetController_Context_TypeDefinitionIndex = 51662;

	class UIGeneralBattleQuickTaskWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GADAMOACKNE* challengeConfig; // 0x28
		::System::Int32 levelAbilityId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
