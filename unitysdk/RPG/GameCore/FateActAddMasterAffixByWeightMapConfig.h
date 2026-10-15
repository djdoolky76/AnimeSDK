#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterAffixByWeightMapConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BF10)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66BF20)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByWeightMapConfig_TypeDefinitionIndex = 19232;

	class FateActAddMasterAffixByWeightMapConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
