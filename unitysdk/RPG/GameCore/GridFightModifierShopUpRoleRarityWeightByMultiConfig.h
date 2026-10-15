#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRoleRarityWeightByMultiConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D708230)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D708240)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7081F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleRarityWeightByMultiConfig_TypeDefinitionIndex = 19354;

	class GridFightModifierShopUpRoleRarityWeightByMultiConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleRarityWeightByMultiConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLERARITYWEIGHTBYMULTICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
