#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddBattleMonsterWaveConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERWAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060AC70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERWAVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060AC80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERWAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060AC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddBattleMonsterWaveConfig_TypeDefinitionIndex = 19628;

	class GridFightModifierAddBattleMonsterWaveConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERWAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddBattleMonsterWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERWAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddBattleMonsterWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddBattleMonsterWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDBATTLEMONSTERWAVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
