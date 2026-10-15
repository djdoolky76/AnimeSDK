#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLastKillFinish; }

#define RPG_GAMECORE_SETLASTKILLFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7470)
#define RPG_GAMECORE_SETLASTKILLFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB7480)
#define RPG_GAMECORE_SETLASTKILLFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB73B0)

namespace RPG::GameCore
{
	class SetLastKillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		// static const ::System::String* LevelResultEndFinishEventStr; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLastKillFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLastKillFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
