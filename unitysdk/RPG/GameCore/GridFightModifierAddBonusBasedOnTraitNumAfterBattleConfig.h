#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBONUSBASEDONTRAITNUMAFTERBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060ACD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBONUSBASEDONTRAITNUMAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060ACE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBONUSBASEDONTRAITNUMAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060AC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig_TypeDefinitionIndex = 19809;

	class GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBONUSBASEDONTRAITNUMAFTERBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBONUSBASEDONTRAITNUMAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddBonusBasedOnTraitNumAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBONUSBASEDONTRAITNUMAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
