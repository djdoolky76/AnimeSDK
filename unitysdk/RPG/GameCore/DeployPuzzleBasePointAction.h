#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeployPuzzleBasePointActionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployPuzzleBasePointAction; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FB650)
#define RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FB680)
#define RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FB600)

namespace RPG::GameCore
{
	class DeployPuzzleBasePointAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DeployPuzzleBasePointActionType TargetAction; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleBasePointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleBasePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleBasePointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleBasePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
