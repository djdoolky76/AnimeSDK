#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTurntableGrantReward; }

#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA449C0)
#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA449B0)
#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA44970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTurntableGrantReward_TypeDefinitionIndex = 20818;

	class RogueTurntableGrantReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTurntableGrantReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTurntableGrantReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTurntableGrantReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTurntableGrantReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
