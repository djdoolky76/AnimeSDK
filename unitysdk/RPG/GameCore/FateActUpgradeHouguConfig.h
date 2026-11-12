#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActUpgradeHouguConfig; }

#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6750)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A6760)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A6710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActUpgradeHouguConfig_TypeDefinitionIndex = 19419;

	class FateActUpgradeHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActUpgradeHouguConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActUpgradeHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActUpgradeHouguConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActUpgradeHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
