#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddGlobalHpAfterFinalBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B0F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B100)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddGlobalHpAfterFinalBattleConfig_TypeDefinitionIndex = 19612;

	class GridFightModifierAddGlobalHpAfterFinalBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
