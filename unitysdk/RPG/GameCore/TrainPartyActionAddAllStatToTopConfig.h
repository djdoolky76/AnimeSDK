#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionAddAllStatToTopConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFED40)
#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFED50)
#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFED00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddAllStatToTopConfig_TypeDefinitionIndex = 18082;

	class TrainPartyActionAddAllStatToTopConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
