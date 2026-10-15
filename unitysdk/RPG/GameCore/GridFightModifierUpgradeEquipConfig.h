#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7361A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7361B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D736160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeEquipConfig_TypeDefinitionIndex = 19430;

	class GridFightModifierUpgradeEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
