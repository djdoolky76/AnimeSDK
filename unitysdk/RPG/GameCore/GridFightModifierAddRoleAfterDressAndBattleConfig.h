#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRoleAfterDressAndBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEAFTERDRESSANDBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B7A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEAFTERDRESSANDBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B7B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEAFTERDRESSANDBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleAfterDressAndBattleConfig_TypeDefinitionIndex = 19646;

	class GridFightModifierAddRoleAfterDressAndBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEAFTERDRESSANDBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleAfterDressAndBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleAfterDressAndBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEAFTERDRESSANDBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleAfterDressAndBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleAfterDressAndBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEAFTERDRESSANDBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
