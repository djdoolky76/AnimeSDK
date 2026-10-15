#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployPuzzleGiveBackStone; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FC360)
#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FC390)
#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FC310)

namespace RPG::GameCore
{
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
