#pragma once
#include "unitysdk/unitysdk.h"

class JNJDDELLIAH;

#define MOLEMOLE_DUELBATTLETICKSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B36BD0)
#define MOLEMOLE_DUELBATTLETICKSUBSYSTEM_SCHEDULEENEMYACTION_OFFSET UNITYSDK_OFFSET(0x19B36B30)
#define MOLEMOLE_DUELBATTLETICKSUBSYSTEM_SCHEDULEPLAYERTURNOVER_OFFSET UNITYSDK_OFFSET(0x19B36B80)
#define MOLEMOLE_DUELBATTLETICKSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B36EB0)
#define MOLEMOLE_DUELBATTLETICKSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B36ED0)

namespace MoleMole
{
	inline static constexpr unsigned int DuelBattleTickSubSystem_TypeDefinitionIndex = 60328;

	class DuelBattleTickSubSystem
	{
	public:
		// static const ::System::Single AutoStartRetryInterval; // 0x0
		::JNJDDELLIAH* GameContext; // 0x10
		::System::Boolean _enemyTurnOverScheduled; // 0x18
		::System::Boolean _playerTurnOverScheduled; // 0x19
		::System::Boolean _enemyActionScheduled; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single _enemyActionTimer; // 0x1C
		::System::Single _playerTurnOverDelay; // 0x20
		::System::Single _playerTurnOverTimer; // 0x24
		::System::Single _enemyTurnOverDelay; // 0x28
		::System::Single _autoStartRetryTimer; // 0x2C
		::System::Single _enemyActionDelay; // 0x30
		::System::Single _enemyTurnOverTimer; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DUELBATTLETICKSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void ScheduleEnemyAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DUELBATTLETICKSUBSYSTEM_SCHEDULEENEMYACTION_OFFSET))(this);
		}

		::System::Void SchedulePlayerTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DUELBATTLETICKSUBSYSTEM_SCHEDULEPLAYERTURNOVER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DUELBATTLETICKSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DUELBATTLETICKSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
