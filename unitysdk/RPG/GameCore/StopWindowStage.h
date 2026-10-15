#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopWindowStage; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPWINDOWSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB263E0)
#define RPG_GAMECORE_STOPWINDOWSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB263F0)
#define RPG_GAMECORE_STOPWINDOWSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB263B0)

namespace RPG::GameCore
{
	class StopWindowStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPWINDOWSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopWindowStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopWindowStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPWINDOWSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopWindowStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopWindowStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPWINDOWSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
