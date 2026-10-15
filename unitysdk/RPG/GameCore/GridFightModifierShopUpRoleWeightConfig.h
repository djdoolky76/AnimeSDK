#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRoleWeightConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735DE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735DF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopUpRoleWeightConfig_TypeDefinitionIndex = 19356;

	class GridFightModifierShopUpRoleWeightConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
