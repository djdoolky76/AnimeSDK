#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierCraftEquipAfterBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCRAFTEQUIPAFTERBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060C5E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCRAFTEQUIPAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060C5F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCRAFTEQUIPAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060C5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCraftEquipAfterBattleConfig_TypeDefinitionIndex = 19622;

	class GridFightModifierCraftEquipAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCRAFTEQUIPAFTERBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCraftEquipAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCraftEquipAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCRAFTEQUIPAFTERBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCraftEquipAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCraftEquipAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCRAFTEQUIPAFTERBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
