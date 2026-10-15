#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetupPropagateBeingAttackInTeam; }

#define RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACE130)
#define RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACE140)
#define RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACE100)

namespace RPG::GameCore
{
	class SetupPropagateBeingAttackInTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
