#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionModifyCardStepConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2D310)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2D320)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2D3F0)

namespace RPG::GameCore
{
	class TrainPartyActionModifyCardStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
