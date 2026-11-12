#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierDisableMasterRandomReijuAffixConfig; }

#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7D00)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A7D10)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A7CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierDisableMasterRandomReijuAffixConfig_TypeDefinitionIndex = 19469;

	class FateModifierDisableMasterRandomReijuAffixConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
