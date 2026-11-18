#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_EGCGFAGAFPD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ACTIVITYCOMBATPAUSESTAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x131B4810)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPauseStageWidgetContext_TypeDefinitionIndex = 71413;

	class ActivityCombatPauseStageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelectQuest; // 0x28
		::System::Int32 activityID; // 0x30
		::ADDEBPHFFIF_EGCGFAGAFPD activityBattleType; // 0x34
		::System::Int32 targetQuestID; // 0x38
		::System::Boolean scrollToQuest; // 0x3C
		::System::Boolean scrollToUnlockQuest; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSESTAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
