#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleSingleClickQTEConfig; }

#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D438A10)
#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D438A20)
#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43ABA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSingleClickQTEConfig_TypeDefinitionIndex = 23344;

	class BattleSingleClickQTEConfig : public ::RPG::GameCore::BattleQTEBaseConfig
	{
	public:
		::System::Boolean SkipInAutoBattle; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleSingleClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleSingleClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleSingleClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleSingleClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
