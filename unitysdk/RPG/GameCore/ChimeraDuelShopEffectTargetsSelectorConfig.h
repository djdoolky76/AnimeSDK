#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelShopEffectTargetsSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA0B0)
#define RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AA0C0)
#define RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AA020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelShopEffectTargetsSelectorConfig_TypeDefinitionIndex = 15912;

	class ChimeraDuelShopEffectTargetsSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
