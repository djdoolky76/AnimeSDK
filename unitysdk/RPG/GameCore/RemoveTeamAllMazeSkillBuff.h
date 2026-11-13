#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveTeamAllMazeSkillBuff; }

#define RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F242DF0)
#define RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F242E00)
#define RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F242DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveTeamAllMazeSkillBuff_TypeDefinitionIndex = 22644;

	class RemoveTeamAllMazeSkillBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
