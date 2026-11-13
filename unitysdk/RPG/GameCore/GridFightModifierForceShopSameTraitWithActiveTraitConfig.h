#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceShopSameTraitWithActiveTraitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITWITHACTIVETRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208B9D60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITWITHACTIVETRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208B9D70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITWITHACTIVETRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208B9D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopSameTraitWithActiveTraitConfig_TypeDefinitionIndex = 19774;

	class GridFightModifierForceShopSameTraitWithActiveTraitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITWITHACTIVETRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopSameTraitWithActiveTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopSameTraitWithActiveTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITWITHACTIVETRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopSameTraitWithActiveTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopSameTraitWithActiveTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITWITHACTIVETRAITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
