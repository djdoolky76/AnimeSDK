#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActBanMasterConfig; }

#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699BD0)
#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699BE0)
#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActBanMasterConfig_TypeDefinitionIndex = 19243;

	class FateActBanMasterConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActBanMasterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActBanMasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActBanMasterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActBanMasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
