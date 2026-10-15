#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterAffixByRarityConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BE50)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66BE60)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRarityConfig_TypeDefinitionIndex = 19233;

	class FateActAddMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYRARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
