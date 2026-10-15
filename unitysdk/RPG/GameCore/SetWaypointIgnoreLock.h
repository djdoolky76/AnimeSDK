#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetWaypointIgnoreLock; }

#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9EB0)
#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC9EC0)
#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC9E80)

namespace RPG::GameCore
{
	class SetWaypointIgnoreLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetWaypointIgnoreLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetWaypointIgnoreLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetWaypointIgnoreLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetWaypointIgnoreLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
