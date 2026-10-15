#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPresetTurnActorAddLimitedDiceConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60FE50)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60FCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorAddLimitedDiceConfig_TypeDefinitionIndex = 16131;

	class DiceCombatPresetTurnActorAddLimitedDiceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RollCount; // 0x10
		::System::Int32 Result; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
