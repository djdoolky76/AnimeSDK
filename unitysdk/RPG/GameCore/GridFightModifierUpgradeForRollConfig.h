#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeForRollConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BC800)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BC810)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BC7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeForRollConfig_TypeDefinitionIndex = 19659;

	class GridFightModifierUpgradeForRollConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
