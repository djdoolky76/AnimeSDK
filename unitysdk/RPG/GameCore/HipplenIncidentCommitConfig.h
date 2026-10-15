#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentCommitConfig; }
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76CAA0)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76CAB0)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76C9E0)

namespace RPG::GameCore
{
	class HipplenIncidentCommitConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::RPG::GameCore::HipplenIncidentSettlementConfig* Settlement; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentCommitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentCommitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentCommitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentCommitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
