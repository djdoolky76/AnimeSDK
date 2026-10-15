#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployPuzzleGiveBackStone; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CE8D0)
#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CE900)
#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CE880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleGiveBackStone_TypeDefinitionIndex = 21980;

	class DeployPuzzleGiveBackStone : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleGiveBackStone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleGiveBackStone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleGiveBackStone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleGiveBackStone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
