#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentOptionConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentCommitOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76CCF0)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76CD00)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76CCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentCommitOptionConfig_TypeDefinitionIndex = 16810;

	class HipplenIncidentCommitOptionConfig : public ::RPG::GameCore::HipplenIncidentOptionConfig
	{
	public:
		::RPG::GameCore::HipplenIncidentSettlementConfig* Settlement; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentCommitOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentCommitOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentCommitOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentCommitOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
