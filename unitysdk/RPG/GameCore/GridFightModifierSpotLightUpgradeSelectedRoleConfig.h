#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSpotLightUpgradeSelectedRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTUPGRADESELECTEDROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BC260)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTUPGRADESELECTEDROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BC270)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTUPGRADESELECTEDROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BC220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpotLightUpgradeSelectedRoleConfig_TypeDefinitionIndex = 19791;

	class GridFightModifierSpotLightUpgradeSelectedRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTUPGRADESELECTEDROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpotLightUpgradeSelectedRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpotLightUpgradeSelectedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTUPGRADESELECTEDROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpotLightUpgradeSelectedRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpotLightUpgradeSelectedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTUPGRADESELECTEDROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
