#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentOptionConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentRandomOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73FA00)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73FA10)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73FDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomOptionConfig_TypeDefinitionIndex = 16811;

	class HipplenIncidentRandomOptionConfig : public ::RPG::GameCore::HipplenIncidentOptionConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenIncidentRandomSettlementConfig*>* Settlements; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentRandomOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentRandomOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentRandomOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentRandomOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
