#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetMinimapAlertVisionState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0420)
#define RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B0450)
#define RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B03D0)

namespace RPG::GameCore
{
	class AdvSetMinimapAlertVisionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetMinimapAlertVisionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetMinimapAlertVisionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetMinimapAlertVisionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetMinimapAlertVisionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
