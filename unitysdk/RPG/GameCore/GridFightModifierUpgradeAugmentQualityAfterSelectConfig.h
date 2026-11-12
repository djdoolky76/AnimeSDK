#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeAugmentQualityAfterSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAUGMENTQUALITYAFTERSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9449F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAUGMENTQUALITYAFTERSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E944A00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAUGMENTQUALITYAFTERSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9449B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeAugmentQualityAfterSelectConfig_TypeDefinitionIndex = 19773;

	class GridFightModifierUpgradeAugmentQualityAfterSelectConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAUGMENTQUALITYAFTERSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeAugmentQualityAfterSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeAugmentQualityAfterSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAUGMENTQUALITYAFTERSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeAugmentQualityAfterSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeAugmentQualityAfterSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEAUGMENTQUALITYAFTERSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
