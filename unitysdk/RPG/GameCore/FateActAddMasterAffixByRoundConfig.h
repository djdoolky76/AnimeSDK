#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterAffixByRoundConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699930)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699940)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6998F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRoundConfig_TypeDefinitionIndex = 19239;

	class FateActAddMasterAffixByRoundConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
