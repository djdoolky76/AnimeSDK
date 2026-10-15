#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierAddTraitCountByDefeatFixedEnemyConfig; }

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B170)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B180)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByDefeatFixedEnemyConfig_TypeDefinitionIndex = 19286;

	class FateModifierAddTraitCountByDefeatFixedEnemyConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
