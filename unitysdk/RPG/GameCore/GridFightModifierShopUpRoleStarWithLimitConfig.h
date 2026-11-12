#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRoleStarWithLimitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9441C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9441D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarWithLimitConfig_TypeDefinitionIndex = 19566;

	class GridFightModifierShopUpRoleStarWithLimitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
