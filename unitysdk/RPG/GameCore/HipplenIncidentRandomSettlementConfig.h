#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentSettlementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentRandomSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76D8F0)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76D900)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76D8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomSettlementConfig_TypeDefinitionIndex = 16802;

	class HipplenIncidentRandomSettlementConfig : public ::RPG::GameCore::HipplenIncidentSettlementConfig
	{
	public:
		::System::UInt32 Weight; // 0x28
		::System::UInt32 Ratio; // 0x2C
		::System::Boolean IsSuccess; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
