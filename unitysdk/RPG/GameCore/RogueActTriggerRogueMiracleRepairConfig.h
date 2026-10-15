#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMiracleRepairConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A25C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A25D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2580)

namespace RPG::GameCore
{
	class RogueActTriggerRogueMiracleRepairConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
