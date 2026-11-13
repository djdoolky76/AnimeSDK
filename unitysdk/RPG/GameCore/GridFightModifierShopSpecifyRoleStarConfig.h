#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopSpecifyRoleStarConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPSPECIFYROLESTARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BBC10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPSPECIFYROLESTARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BBC20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPSPECIFYROLESTARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BBBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopSpecifyRoleStarConfig_TypeDefinitionIndex = 19567;

	class GridFightModifierShopSpecifyRoleStarConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPSPECIFYROLESTARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopSpecifyRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopSpecifyRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPSPECIFYROLESTARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopSpecifyRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopSpecifyRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPSPECIFYROLESTARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
