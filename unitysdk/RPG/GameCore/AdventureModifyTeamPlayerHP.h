#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureModifyTeamPlayerHP; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CA2E0)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CA2F0)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CA2A0)

namespace RPG::GameCore
{
	class AdventureModifyTeamPlayerHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x18
		::RPG::GameCore::DynamicFloat* MinRatio; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30
		::RPG::GameCore::TargetEvaluator* SpecifyTargetType; // 0x38
		::System::Boolean ClientUseGMCommand; // 0x40
		::System::Boolean TriggerCommonEffect; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifyTeamPlayerHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifyTeamPlayerHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifyTeamPlayerHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifyTeamPlayerHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
