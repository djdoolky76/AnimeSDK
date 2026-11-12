#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeAhaRarityConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAHARARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944990)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAHARARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9449A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAHARARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeAhaRarityConfig_TypeDefinitionIndex = 19729;

	class GridFightModifierUpgradeAhaRarityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAHARARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeAhaRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeAhaRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAHARARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeAhaRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeAhaRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAHARARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
