#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureModifyTeamPlayerSP; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CA690)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CA6A0)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CA650)

namespace RPG::GameCore
{
	class AdventureModifyTeamPlayerSP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::RPG::GameCore::TargetEvaluator* SpecifyTargetType; // 0x30
		::System::Boolean ClientUseGMCommand; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
