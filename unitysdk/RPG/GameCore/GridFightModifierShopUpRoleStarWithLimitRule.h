#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRoleStarWithLimitRule; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x208BBE50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITRULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BBE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleStarWithLimitRule_TypeDefinitionIndex = 19565;

	class GridFightModifierShopUpRoleStarWithLimitRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITRULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithLimitRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithLimitRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHLIMITRULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
