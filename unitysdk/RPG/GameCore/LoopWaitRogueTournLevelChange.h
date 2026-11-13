#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitRogueTournLevelChange; }

#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F07B040)
#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F07B050)
#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F07B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRogueTournLevelChange_TypeDefinitionIndex = 21580;

	class LoopWaitRogueTournLevelChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRogueTournLevelChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRogueTournLevelChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRogueTournLevelChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRogueTournLevelChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
