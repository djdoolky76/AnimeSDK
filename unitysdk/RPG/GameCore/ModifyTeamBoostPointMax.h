#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyTeamBoostPointMax; }

#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89B480)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89B490)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89B440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyTeamBoostPointMax_TypeDefinitionIndex = 22607;

	class ModifyTeamBoostPointMax : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyTeamBoostPointMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyTeamBoostPointMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyTeamBoostPointMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyTeamBoostPointMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
