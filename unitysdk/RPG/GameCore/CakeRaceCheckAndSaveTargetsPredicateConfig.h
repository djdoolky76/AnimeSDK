#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace RPG::GameCore { class CakeRaceCheckAndSaveTargetsPredicateConfig; }

#define RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B080)
#define RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54B090)
#define RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E430)

namespace RPG::GameCore
{
	class CakeRaceCheckAndSaveTargetsPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* Selector; // 0x18
		::System::Boolean IsSave; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 GreaterThanNums; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECHECKANDSAVETARGETSPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
