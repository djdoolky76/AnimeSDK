#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRoleStarConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BBD90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BBDA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BBD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarConfig_TypeDefinitionIndex = 19563;

	class GridFightModifierShopUpRoleStarConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
