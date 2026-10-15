#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncReforgeMagicUnitCostConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA462D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA462E0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA465E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeMagicUnitCostConfig_TypeDefinitionIndex = 18032;

	class RogueWorkbenchFuncReforgeMagicUnitCostConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncReforgeMagicUnitCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEMAGICUNITCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
