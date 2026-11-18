#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_EGCGFAGAFPD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1981CA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLWidgetController_Context_TypeDefinitionIndex = 59644;

	class UIActivityBattleYCLWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelectQuest; // 0x28
		::ADDEBPHFFIF_EGCGFAGAFPD activityBattleType; // 0x30
		::System::Int32 activityID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
