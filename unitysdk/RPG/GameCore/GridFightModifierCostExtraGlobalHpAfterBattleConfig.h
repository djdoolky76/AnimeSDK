#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierCostExtraGlobalHpAfterBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705E40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705E50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCostExtraGlobalHpAfterBattleConfig_TypeDefinitionIndex = 19406;

	class GridFightModifierCostExtraGlobalHpAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCostExtraGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOSTEXTRAGLOBALHPAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
