#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceShopWithLastBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPWITHLASTBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208B9E20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPWITHLASTBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208B9E30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPWITHLASTBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208B9DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopWithLastBattleConfig_TypeDefinitionIndex = 19776;

	class GridFightModifierForceShopWithLastBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPWITHLASTBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopWithLastBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopWithLastBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPWITHLASTBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopWithLastBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopWithLastBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPWITHLASTBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
