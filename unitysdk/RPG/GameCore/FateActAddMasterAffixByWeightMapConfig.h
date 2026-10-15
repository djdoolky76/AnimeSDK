#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterAffixByWeightMapConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699990)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6999A0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699950)

namespace RPG::GameCore
{
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
