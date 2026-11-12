#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddEquipPropertyByBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEQUIPPROPERTYBYBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F440)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEQUIPPROPERTYBYBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93F450)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEQUIPPROPERTYBYBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93F400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddEquipPropertyByBattleConfig_TypeDefinitionIndex = 19607;

	class GridFightModifierAddEquipPropertyByBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEQUIPPROPERTYBYBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddEquipPropertyByBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddEquipPropertyByBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEQUIPPROPERTYBYBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddEquipPropertyByBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddEquipPropertyByBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEQUIPPROPERTYBYBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
