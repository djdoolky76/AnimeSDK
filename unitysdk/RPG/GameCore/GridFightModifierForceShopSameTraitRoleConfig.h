#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceShopSameTraitRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9420D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9420E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopSameTraitRoleConfig_TypeDefinitionIndex = 19763;

	class GridFightModifierForceShopSameTraitRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopSameTraitRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopSameTraitRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopSameTraitRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopSameTraitRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSAMETRAITROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
