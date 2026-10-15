#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierDisableMasterRoundRandomAffixConfig; }

#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DA00)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66DA10)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66D9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierDisableMasterRoundRandomAffixConfig_TypeDefinitionIndex = 19280;

	class FateModifierDisableMasterRoundRandomAffixConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
