#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierShopModifyRarityWeightConfig; }

#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66E0B0)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66E0C0)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66E070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierShopModifyRarityWeightConfig_TypeDefinitionIndex = 19264;

	class FateModifierShopModifyRarityWeightConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierShopModifyRarityWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYRARITYWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
