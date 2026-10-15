#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierModifyMasterAffixRarityProbabilityConfig; }

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DD50)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66DD60)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66DD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterAffixRarityProbabilityConfig_TypeDefinitionIndex = 19275;

	class FateModifierModifyMasterAffixRarityProbabilityConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyMasterAffixRarityProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERAFFIXRARITYPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
