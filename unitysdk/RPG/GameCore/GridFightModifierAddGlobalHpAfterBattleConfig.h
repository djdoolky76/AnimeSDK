#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddGlobalHpAfterBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F620)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93F630)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93F5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddGlobalHpAfterBattleConfig_TypeDefinitionIndex = 19613;

	class GridFightModifierAddGlobalHpAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
