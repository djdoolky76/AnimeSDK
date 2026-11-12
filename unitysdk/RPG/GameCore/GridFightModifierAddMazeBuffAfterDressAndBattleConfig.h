#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddMazeBuffAfterDressAndBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSANDBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F740)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSANDBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93F750)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSANDBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMazeBuffAfterDressAndBattleConfig_TypeDefinitionIndex = 19643;

	class GridFightModifierAddMazeBuffAfterDressAndBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSANDBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressAndBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressAndBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSANDBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressAndBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressAndBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSANDBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
