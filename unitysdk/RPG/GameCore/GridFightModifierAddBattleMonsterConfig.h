#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddBattleMonsterConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D704F40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D704F50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D704F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddBattleMonsterConfig_TypeDefinitionIndex = 19401;

	class GridFightModifierAddBattleMonsterConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddBattleMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
